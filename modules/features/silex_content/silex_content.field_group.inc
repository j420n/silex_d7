<?php
/**
 * @file
 * silex_content.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function silex_content_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_social_links|node|our_team|default';
  $field_group->group_name = 'group_social_links';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'our_team';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'social_links',
    'weight' => '3',
    'children' => array(
      0 => 'field_linkedin',
      1 => 'field_twitter',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'social_links',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'social-links',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_social_links|node|our_team|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_social_links|node|our_team|teaser';
  $field_group->group_name = 'group_social_links';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'our_team';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'social_links',
    'weight' => '4',
    'children' => array(
      0 => 'field_linkedin',
      1 => 'field_twitter',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'social_links',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-social-links field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_social_links|node|our_team|teaser'] = $field_group;

  return $export;
}
