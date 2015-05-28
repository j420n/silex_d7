<?php
/**
 * @file
 * silex_content.features.inc
 */

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
