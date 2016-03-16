<?php
/**
 * @file
 * silex_content.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function silex_content_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function silex_content_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function silex_content_node_info() {
  $items = array(
    'carousel_item' => array(
      'name' => t('Carousel Item'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Caption'),
      'help' => '',
    ),
    'our_team' => array(
      'name' => t('Our Team'),
      'base' => 'node_content',
      'description' => t('Content type for our team.'),
      'has_title' => '1',
      'title_label' => t('Nick'),
      'help' => '',
    ),
    'promo_item' => array(
      'name' => t('Promo Item'),
      'base' => 'node_content',
      'description' => t('Promo Items are shown on the home page and link to some promoted content in the site.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}

function silex_content_image_default_styles() {
    $styles = array();

    // Exported image style: headshots.
    $styles['headshots'] = array(
        'name' => 'headshots',
        'label' => 'headshots',
        'effects' => array(
            2 => array(
                'label' => ' Image Crop',
                'help' => '',
                'effect callback' => 'imagefield_crop_image',
                'form callback' => 'imagefield_crop_image_form',
                'module' => 'imagefield_crop',
                'name' => 'imagefield_crop',
                'data' => array(
                    'width' => '500',
                    'height' => '500',
                    'anchor' => 'center-center',
                ),
                'weight' => '1',
            ),
        ),
    );

    return $styles;
}

