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
