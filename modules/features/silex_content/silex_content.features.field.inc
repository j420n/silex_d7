<?php
/**
 * @file
 * silex_content.features.field.inc
 */

/**
 * Implements hook_field_default_fields().
 */
function silex_content_field_default_fields() {
  $fields = array();

  // Exported field: 'node-carousel_item-body'.
  $fields['node-carousel_item-body'] = array(
      'field_config' => array(
          'active' => '1',
          'cardinality' => '1',
          'deleted' => '0',
          'entity_types' => array(
              0 => 'node',
          ),
          'field_name' => 'body',
          'foreign keys' => array(
              'format' => array(
                  'columns' => array(
                      'format' => 'format',
                  ),
                  'table' => 'filter_format',
              ),
          ),
          'indexes' => array(
              'format' => array(
                  0 => 'format',
              ),
          ),
          'locked' => '0',
          'module' => 'text',
          'settings' => array(),
          'translatable' => '0',
          'type' => 'text_with_summary',
      ),
      'field_instance' => array(
          'bundle' => 'carousel_item',
          'default_value' => NULL,
          'deleted' => '0',
          'description' => '',
          'display' => array(
              'default' => array(
                  'label' => 'hidden',
                  'module' => 'text',
                  'settings' => array(),
                  'type' => 'text_default',
                  'weight' => 0,
              ),
              'teaser' => array(
                  'label' => 'hidden',
                  'module' => 'text',
                  'settings' => array(
                      'trim_length' => 600,
                  ),
                  'type' => 'text_summary_or_trimmed',
                  'weight' => 0,
              ),
          ),
          'entity_type' => 'node',
          'field_name' => 'body',
          'label' => 'Lead',
          'required' => 1,
          'settings' => array(
              'display_summary' => 1,
              'text_processing' => '0',
              'user_register_form' => FALSE,
          ),
          'widget' => array(
              'active' => 1,
              'module' => 'text',
              'settings' => array(
                  'rows' => '20',
                  'summary_rows' => 5,
              ),
              'type' => 'text_textarea_with_summary',
              'weight' => '-4',
          ),
      ),
  );

  // Exported field: 'node-carousel_item-field_call_to_action'.
  $fields['node-carousel_item-field_call_to_action'] = array(
      'field_config' => array(
          'active' => '1',
          'cardinality' => '1',
          'deleted' => '0',
          'entity_types' => array(),
          'field_name' => 'field_call_to_action',
          'foreign keys' => array(
              'format' => array(
                  'columns' => array(
                      'format' => 'format',
                  ),
                  'table' => 'filter_format',
              ),
          ),
          'indexes' => array(
              'format' => array(
                  0 => 'format',
              ),
          ),
          'locked' => '0',
          'module' => 'text',
          'settings' => array(
              'max_length' => '255',
          ),
          'translatable' => '0',
          'type' => 'text',
      ),
      'field_instance' => array(
          'bundle' => 'carousel_item',
          'default_value' => NULL,
          'deleted' => '0',
          'description' => '',
          'display' => array(
              'default' => array(
                  'label' => 'above',
                  'module' => 'text',
                  'settings' => array(),
                  'type' => 'text_default',
                  'weight' => 2,
              ),
              'teaser' => array(
                  'label' => 'above',
                  'settings' => array(),
                  'type' => 'hidden',
                  'weight' => 0,
              ),
          ),
          'entity_type' => 'node',
          'field_name' => 'field_call_to_action',
          'label' => 'Call to action',
          'required' => 0,
          'settings' => array(
              'text_processing' => '0',
              'user_register_form' => FALSE,
          ),
          'widget' => array(
              'active' => 1,
              'module' => 'text',
              'settings' => array(
                  'size' => '60',
              ),
              'type' => 'text_textfield',
              'weight' => '-1',
          ),
      ),
  );

  // Exported field: 'node-carousel_item-field_image'.
  $fields['node-carousel_item-field_image'] = array(
      'field_config' => array(
          'active' => '1',
          'cardinality' => '1',
          'deleted' => '0',
          'entity_types' => array(),
          'field_name' => 'field_image',
          'foreign keys' => array(
              'fid' => array(
                  'columns' => array(
                      'fid' => 'fid',
                  ),
                  'table' => 'file_managed',
              ),
          ),
          'indexes' => array(
              'fid' => array(
                  0 => 'fid',
              ),
          ),
          'locked' => '0',
          'module' => 'image',
          'settings' => array(
              'default_image' => 0,
              'uri_scheme' => 'public',
          ),
          'translatable' => '0',
          'type' => 'image',
      ),
      'field_instance' => array(
          'bundle' => 'carousel_item',
          'deleted' => '0',
          'description' => '',
          'display' => array(
              'default' => array(
                  'label' => 'above',
                  'module' => 'image',
                  'settings' => array(
                      'image_link' => '',
                      'image_style' => '',
                  ),
                  'type' => 'image',
                  'weight' => 1,
              ),
              'teaser' => array(
                  'label' => 'above',
                  'settings' => array(),
                  'type' => 'hidden',
                  'weight' => 0,
              ),
          ),
          'entity_type' => 'node',
          'field_name' => 'field_image',
          'label' => 'Image',
          'required' => 0,
          'settings' => array(
              'alt_field' => 0,
              'default_image' => 0,
              'file_directory' => '',
              'file_extensions' => 'png gif jpg jpeg',
              'max_filesize' => '',
              'max_resolution' => '',
              'min_resolution' => '',
              'title_field' => 0,
              'user_register_form' => FALSE,
          ),
          'widget' => array(
              'active' => 1,
              'module' => 'image',
              'settings' => array(
                  'preview_image_style' => 'thumbnail',
                  'progress_indicator' => 'throbber',
              ),
              'type' => 'image_image',
              'weight' => '-2',
          ),
      ),
  );

  // Exported field: 'node-carousel_item-field_target'.
  $fields['node-carousel_item-field_target'] = array(
      'field_config' => array(
          'active' => '1',
          'cardinality' => '1',
          'deleted' => '0',
          'entity_types' => array(),
          'field_name' => 'field_target',
          'foreign keys' => array(
              'format' => array(
                  'columns' => array(
                      'format' => 'format',
                  ),
                  'table' => 'filter_format',
              ),
          ),
          'indexes' => array(
              'format' => array(
                  0 => 'format',
              ),
          ),
          'locked' => '0',
          'module' => 'text',
          'settings' => array(
              'max_length' => '255',
          ),
          'translatable' => '0',
          'type' => 'text',
      ),
      'field_instance' => array(
          'bundle' => 'carousel_item',
          'default_value' => NULL,
          'deleted' => '0',
          'description' => '',
          'display' => array(
              'default' => array(
                  'label' => 'above',
                  'module' => 'text',
                  'settings' => array(),
                  'type' => 'text_default',
                  'weight' => 3,
              ),
              'teaser' => array(
                  'label' => 'above',
                  'settings' => array(),
                  'type' => 'hidden',
                  'weight' => 0,
              ),
          ),
          'entity_type' => 'node',
          'field_name' => 'field_target',
          'label' => 'target',
          'required' => 0,
          'settings' => array(
              'text_processing' => '0',
              'user_register_form' => FALSE,
          ),
          'widget' => array(
              'active' => 1,
              'module' => 'text',
              'settings' => array(
                  'size' => '60',
              ),
              'type' => 'text_textfield',
              'weight' => '1',
          ),
      ),
  );

  // Exported field: 'node-promo_item-body'.
  $fields['node-promo_item-body'] = array(
      'field_config' => array(
          'active' => '1',
          'cardinality' => '1',
          'deleted' => '0',
          'entity_types' => array(
              0 => 'node',
          ),
          'field_name' => 'body',
          'foreign keys' => array(
              'format' => array(
                  'columns' => array(
                      'format' => 'format',
                  ),
                  'table' => 'filter_format',
              ),
          ),
          'indexes' => array(
              'format' => array(
                  0 => 'format',
              ),
          ),
          'locked' => '0',
          'module' => 'text',
          'settings' => array(),
          'translatable' => '0',
          'type' => 'text_with_summary',
      ),
      'field_instance' => array(
          'bundle' => 'promo_item',
          'default_value' => NULL,
          'deleted' => '0',
          'description' => '',
          'display' => array(
              'default' => array(
                  'label' => 'hidden',
                  'module' => 'text',
                  'settings' => array(),
                  'type' => 'text_default',
                  'weight' => 0,
              ),
              'teaser' => array(
                  'label' => 'hidden',
                  'module' => 'text',
                  'settings' => array(
                      'trim_length' => 600,
                  ),
                  'type' => 'text_summary_or_trimmed',
                  'weight' => '0',
              ),
          ),
          'entity_type' => 'node',
          'field_name' => 'body',
          'label' => 'Body',
          'required' => 0,
          'settings' => array(
              'display_summary' => 1,
              'text_processing' => '1',
              'user_register_form' => FALSE,
          ),
          'widget' => array(
              'active' => 1,
              'module' => 'text',
              'settings' => array(
                  'rows' => '20',
                  'summary_rows' => 5,
              ),
              'type' => 'text_textarea_with_summary',
              'weight' => '-4',
          ),
      ),
  );

  // Exported field: 'node-promo_item-field_image'.
  $fields['node-promo_item-field_image'] = array(
      'field_config' => array(
          'active' => '1',
          'cardinality' => '1',
          'deleted' => '0',
          'entity_types' => array(),
          'field_name' => 'field_image',
          'foreign keys' => array(
              'fid' => array(
                  'columns' => array(
                      'fid' => 'fid',
                  ),
                  'table' => 'file_managed',
              ),
          ),
          'indexes' => array(
              'fid' => array(
                  0 => 'fid',
              ),
          ),
          'locked' => '0',
          'module' => 'image',
          'settings' => array(
              'default_image' => 0,
              'uri_scheme' => 'public',
          ),
          'translatable' => '0',
          'type' => 'image',
      ),
      'field_instance' => array(
          'bundle' => 'promo_item',
          'deleted' => '0',
          'description' => '',
          'display' => array(
              'default' => array(
                  'label' => 'above',
                  'module' => 'image',
                  'settings' => array(
                      'image_link' => '',
                      'image_style' => '',
                  ),
                  'type' => 'image',
                  'weight' => 2,
              ),
              'teaser' => array(
                  'label' => 'above',
                  'settings' => array(),
                  'type' => 'hidden',
                  'weight' => '0',
              ),
          ),
          'entity_type' => 'node',
          'field_name' => 'field_image',
          'label' => 'Image',
          'required' => 0,
          'settings' => array(
              'alt_field' => 0,
              'default_image' => 0,
              'file_directory' => '',
              'file_extensions' => 'png gif jpg jpeg',
              'max_filesize' => '',
              'max_resolution' => '',
              'min_resolution' => '',
              'title_field' => 0,
              'user_register_form' => FALSE,
          ),
          'widget' => array(
              'active' => 1,
              'module' => 'image',
              'settings' => array(
                  'preview_image_style' => 'thumbnail',
                  'progress_indicator' => 'throbber',
              ),
              'type' => 'image_image',
              'weight' => '-1',
          ),
      ),
  );

  // Exported field: 'node-promo_item-field_target'.
  $fields['node-promo_item-field_target'] = array(
      'field_config' => array(
          'active' => '1',
          'cardinality' => '1',
          'deleted' => '0',
          'entity_types' => array(),
          'field_name' => 'field_target',
          'foreign keys' => array(
              'format' => array(
                  'columns' => array(
                      'format' => 'format',
                  ),
                  'table' => 'filter_format',
              ),
          ),
          'indexes' => array(
              'format' => array(
                  0 => 'format',
              ),
          ),
          'locked' => '0',
          'module' => 'text',
          'settings' => array(
              'max_length' => '255',
          ),
          'translatable' => '0',
          'type' => 'text',
      ),
      'field_instance' => array(
          'bundle' => 'promo_item',
          'default_value' => NULL,
          'deleted' => '0',
          'description' => '',
          'display' => array(
              'default' => array(
                  'label' => 'above',
                  'module' => 'text',
                  'settings' => array(),
                  'type' => 'text_default',
                  'weight' => 1,
              ),
              'teaser' => array(
                  'label' => 'above',
                  'settings' => array(),
                  'type' => 'hidden',
                  'weight' => '0',
              ),
          ),
          'entity_type' => 'node',
          'field_name' => 'field_target',
          'label' => 'target',
          'required' => 0,
          'settings' => array(
              'text_processing' => '0',
              'user_register_form' => FALSE,
          ),
          'widget' => array(
              'active' => 1,
              'module' => 'text',
              'settings' => array(
                  'size' => '60',
              ),
              'type' => 'text_textfield',
              'weight' => '-3',
          ),
      ),
  );

  // Exported field: 'node-promo_item-field_target_text'.
  $fields['node-promo_item-field_target_text'] = array(
      'field_config' => array(
          'active' => '1',
          'cardinality' => '1',
          'deleted' => '0',
          'entity_types' => array(),
          'field_name' => 'field_target_text',
          'foreign keys' => array(
              'format' => array(
                  'columns' => array(
                      'format' => 'format',
                  ),
                  'table' => 'filter_format',
              ),
          ),
          'indexes' => array(
              'format' => array(
                  0 => 'format',
              ),
          ),
          'locked' => '0',
          'module' => 'text',
          'settings' => array(
              'max_length' => '255',
          ),
          'translatable' => '0',
          'type' => 'text',
      ),
      'field_instance' => array(
          'bundle' => 'promo_item',
          'default_value' => NULL,
          'deleted' => '0',
          'description' => '',
          'display' => array(
              'default' => array(
                  'label' => 'above',
                  'module' => 'text',
                  'settings' => array(),
                  'type' => 'text_default',
                  'weight' => 3,
              ),
              'teaser' => array(
                  'label' => 'above',
                  'settings' => array(),
                  'type' => 'hidden',
                  'weight' => 0,
              ),
          ),
          'entity_type' => 'node',
          'field_name' => 'field_target_text',
          'label' => 'target_text',
          'required' => 0,
          'settings' => array(
              'text_processing' => '0',
              'user_register_form' => FALSE,
          ),
          'widget' => array(
              'active' => 1,
              'module' => 'text',
              'settings' => array(
                  'size' => '60',
              ),
              'type' => 'text_textfield',
              'weight' => 0,
          ),
      ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Body');
  t('Call to action');
  t('Image');
  t('Lead');
  t('target');
  t('target_text');

  return $fields;
}
