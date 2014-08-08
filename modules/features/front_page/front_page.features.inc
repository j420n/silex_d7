<?php
/**
 * @file
 * front_page.features.inc
 */

/**
 * Implements hook_node_info().
 */
function front_page_node_info() {
  $items = array(
    'front_page_sliders' => array(
      'name' => t('Front Page Sliders'),
      'base' => 'node_content',
      'description' => t('A Image slider for the front page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
