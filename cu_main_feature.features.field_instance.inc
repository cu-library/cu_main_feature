<?php
/**
 * @file
 * cu_main_feature.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function cu_main_feature_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-image_block-field_image_block_link'.
  $field_instances['node-image_block-field_image_block_link'] = array(
    'bundle' => 'image_block',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Image link location when clicked.',
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
    'field_name' => 'field_image_block_link',
    'label' => 'Image Block Link',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 3,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Image Block Link');
  t('Image link location when clicked.');

  return $field_instances;
}
