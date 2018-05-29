<?php
/**
 * @file
 * cu_main_feature.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function cu_main_feature_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'back_to_top_bg_color';
  $strongarm->value = '#F7F7F7';
  $export['back_to_top_bg_color'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'back_to_top_border_color';
  $strongarm->value = '#CCCCCC';
  $export['back_to_top_border_color'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'back_to_top_button_place';
  $strongarm->value = '3';
  $export['back_to_top_button_place'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'back_to_top_button_trigger';
  $strongarm->value = '100';
  $export['back_to_top_button_trigger'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'back_to_top_button_type';
  $strongarm->value = 'image';
  $export['back_to_top_button_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'back_to_top_hover_color';
  $strongarm->value = '#EEEEEE';
  $export['back_to_top_hover_color'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'back_to_top_prevent_in_admin';
  $strongarm->value = 1;
  $export['back_to_top_prevent_in_admin'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'back_to_top_prevent_on_mobile';
  $strongarm->value = 1;
  $export['back_to_top_prevent_on_mobile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'back_to_top_text_color';
  $strongarm->value = '#333333';
  $export['back_to_top_text_color'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'blockify_blocks';
  $strongarm->value = array(
    'blockify-logo' => 'blockify-logo',
    'blockify-breadcrumb' => 'blockify-breadcrumb',
    'blockify-site-name' => 0,
    'blockify-site-slogan' => 0,
    'blockify-page-title' => 0,
    'blockify-tabs' => 0,
    'blockify-messages' => 0,
    'blockify-actions' => 0,
    'blockify-feed-icons' => 0,
  );
  $export['blockify_blocks'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'designkit_color';
  $strongarm->value = array(
    'leaderboard_color' => '#000000',
    'body_background' => '#E6E6E6',
    'footer_background' => '#000000',
  );
  $export['designkit_color'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'error_level';
  $strongarm->value = '2';
  $export['error_level'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'file_private_path';
  $strongarm->value = 'sites/default/files/private';
  $export['file_private_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'islandora_basic_collection_disable_display_generation';
  $strongarm->value = 1;
  $export['islandora_basic_collection_disable_display_generation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'islandora_basic_collection_display_backend';
  $strongarm->value = 'islandora_solr_query_backend';
  $export['islandora_basic_collection_display_backend'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'islandora_basic_collection_page_size';
  $strongarm->value = '12';
  $export['islandora_basic_collection_page_size'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'islandora_book_metadata_display';
  $strongarm->value = 1;
  $export['islandora_book_metadata_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'islandora_collection_metadata_display';
  $strongarm->value = 0;
  $export['islandora_collection_metadata_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'islandora_enhanced_grid_item_enable_label';
  $strongarm->value = 0;
  $export['islandora_enhanced_grid_item_enable_label'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'islandora_large_image_viewers';
  $strongarm->value = array(
    'name' => array(
      'none' => 'none',
      'islandora_openseadragon' => 'islandora_openseadragon',
    ),
    'default' => 'islandora_openseadragon',
  );
  $export['islandora_large_image_viewers'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'islandora_manuscript_metadata_display';
  $strongarm->value = 1;
  $export['islandora_manuscript_metadata_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'islandora_solr_collection_display_use_solr_display_profiles';
  $strongarm->value = 1;
  $export['islandora_solr_collection_display_use_solr_display_profiles'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'islandora_solr_facet_pages_fields_data';
  $strongarm->value = array(
    0 => array(
      'solr_field' => 'mods_subject_topic_mt',
      'label' => 'Topic',
      'path' => 'topic',
    ),
    1 => array(
      'solr_field' => 'mods_typeOfResource_mt',
      'label' => 'Type',
      'path' => 'type',
    ),
  );
  $export['islandora_solr_facet_pages_fields_data'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'islandora_solr_primary_display';
  $strongarm->value = 'enhanced-grid';
  $export['islandora_solr_primary_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'islandora_solr_primary_display_table';
  $strongarm->value = array(
    'weight' => array(
      'bookmark' => '0',
      'default' => '0',
      'grid' => '0',
      'table' => '0',
      'enhanced-grid' => '1',
    ),
    'default' => 'enhanced-grid',
    'enabled' => array(
      'bookmark' => 'bookmark',
      'default' => 'default',
      'grid' => 'grid',
      'table' => 'table',
      'enhanced-grid' => 'enhanced-grid',
    ),
  );
  $export['islandora_solr_primary_display_table'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'islandora_solr_secondary_display';
  $strongarm->value = array(
    'csv' => 'csv',
    'rss' => 'rss',
  );
  $export['islandora_solr_secondary_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_admin_theme';
  $strongarm->value = 1;
  $export['node_admin_theme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_export_file_supported_fields';
  $strongarm->value = 'file, image';
  $export['node_export_file_supported_fields'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_export_reset_changed_image_block';
  $strongarm->value = 1;
  $export['node_export_reset_changed_image_block'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_add_class_active_owlcarousel_settings_collection-images';
  $strongarm->value = 1;
  $export['owlcarousel_add_class_active_owlcarousel_settings_collection-images'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_add_class_active_owlcarousel_settings_default';
  $strongarm->value = 1;
  $export['owlcarousel_add_class_active_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_auto_height_owlcarousel_settings_collection-images';
  $strongarm->value = 0;
  $export['owlcarousel_auto_height_owlcarousel_settings_collection-images'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_auto_height_owlcarousel_settings_default';
  $strongarm->value = 0;
  $export['owlcarousel_auto_height_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_auto_play_owlcarousel_settings_collection-images';
  $strongarm->value = '5000';
  $export['owlcarousel_auto_play_owlcarousel_settings_collection-images'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_auto_play_owlcarousel_settings_default';
  $strongarm->value = '0';
  $export['owlcarousel_auto_play_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_base_class_owlcarousel_settings_collection-images';
  $strongarm->value = 'owl-carousel';
  $export['owlcarousel_base_class_owlcarousel_settings_collection-images'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_base_class_owlcarousel_settings_default';
  $strongarm->value = 'owl-carousel';
  $export['owlcarousel_base_class_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_drag_before_anim_finish_owlcarousel_settings_collection-images';
  $strongarm->value = 1;
  $export['owlcarousel_drag_before_anim_finish_owlcarousel_settings_collection-images'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_drag_before_anim_finish_owlcarousel_settings_default';
  $strongarm->value = 1;
  $export['owlcarousel_drag_before_anim_finish_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_desktop_owlcarousel_settings_collection-images_items';
  $strongarm->value = '4';
  $export['owlcarousel_items_desktop_owlcarousel_settings_collection-images_items'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_desktop_owlcarousel_settings_collection-images_width';
  $strongarm->value = '1199';
  $export['owlcarousel_items_desktop_owlcarousel_settings_collection-images_width'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_desktop_owlcarousel_settings_default_items';
  $strongarm->value = '5';
  $export['owlcarousel_items_desktop_owlcarousel_settings_default_items'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_desktop_owlcarousel_settings_default_width';
  $strongarm->value = '1199';
  $export['owlcarousel_items_desktop_owlcarousel_settings_default_width'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_desktop_small_owlcarousel_settings_collection-images_items';
  $strongarm->value = '3';
  $export['owlcarousel_items_desktop_small_owlcarousel_settings_collection-images_items'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_desktop_small_owlcarousel_settings_collection-images_width';
  $strongarm->value = '979';
  $export['owlcarousel_items_desktop_small_owlcarousel_settings_collection-images_width'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_desktop_small_owlcarousel_settings_default_items';
  $strongarm->value = '5';
  $export['owlcarousel_items_desktop_small_owlcarousel_settings_default_items'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_desktop_small_owlcarousel_settings_default_width';
  $strongarm->value = '979';
  $export['owlcarousel_items_desktop_small_owlcarousel_settings_default_width'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_mobile_owlcarousel_settings_collection-images_items';
  $strongarm->value = '1';
  $export['owlcarousel_items_mobile_owlcarousel_settings_collection-images_items'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_mobile_owlcarousel_settings_collection-images_width';
  $strongarm->value = '479';
  $export['owlcarousel_items_mobile_owlcarousel_settings_collection-images_width'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_mobile_owlcarousel_settings_default_items';
  $strongarm->value = '1';
  $export['owlcarousel_items_mobile_owlcarousel_settings_default_items'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_mobile_owlcarousel_settings_default_width';
  $strongarm->value = '479';
  $export['owlcarousel_items_mobile_owlcarousel_settings_default_width'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_owlcarousel_settings_collection-images';
  $strongarm->value = '4';
  $export['owlcarousel_items_owlcarousel_settings_collection-images'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_owlcarousel_settings_default';
  $strongarm->value = '5';
  $export['owlcarousel_items_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_scale_up_owlcarousel_settings_collection-images';
  $strongarm->value = 0;
  $export['owlcarousel_items_scale_up_owlcarousel_settings_collection-images'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_scale_up_owlcarousel_settings_default';
  $strongarm->value = 0;
  $export['owlcarousel_items_scale_up_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_tablet_owlcarousel_settings_collection-images_items';
  $strongarm->value = '2';
  $export['owlcarousel_items_tablet_owlcarousel_settings_collection-images_items'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_tablet_owlcarousel_settings_collection-images_width';
  $strongarm->value = '768';
  $export['owlcarousel_items_tablet_owlcarousel_settings_collection-images_width'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_tablet_owlcarousel_settings_default_items';
  $strongarm->value = '3';
  $export['owlcarousel_items_tablet_owlcarousel_settings_default_items'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_tablet_owlcarousel_settings_default_width';
  $strongarm->value = '768';
  $export['owlcarousel_items_tablet_owlcarousel_settings_default_width'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_tablet_small_owlcarousel_settings_collection-images_items';
  $strongarm->value = '0';
  $export['owlcarousel_items_tablet_small_owlcarousel_settings_collection-images_items'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_tablet_small_owlcarousel_settings_collection-images_width';
  $strongarm->value = '0';
  $export['owlcarousel_items_tablet_small_owlcarousel_settings_collection-images_width'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_tablet_small_owlcarousel_settings_default_items';
  $strongarm->value = '2';
  $export['owlcarousel_items_tablet_small_owlcarousel_settings_default_items'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_tablet_small_owlcarousel_settings_default_width';
  $strongarm->value = '768';
  $export['owlcarousel_items_tablet_small_owlcarousel_settings_default_width'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_json_path_owlcarousel_settings_collection-images';
  $strongarm->value = '';
  $export['owlcarousel_json_path_owlcarousel_settings_collection-images'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_json_path_owlcarousel_settings_default';
  $strongarm->value = '';
  $export['owlcarousel_json_path_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_json_success_owlcarousel_settings_collection-images';
  $strongarm->value = '';
  $export['owlcarousel_json_success_owlcarousel_settings_collection-images'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_json_success_owlcarousel_settings_default';
  $strongarm->value = '';
  $export['owlcarousel_json_success_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_lazy_effect_owlcarousel_settings_collection-images';
  $strongarm->value = 'fadeIn';
  $export['owlcarousel_lazy_effect_owlcarousel_settings_collection-images'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_lazy_effect_owlcarousel_settings_default';
  $strongarm->value = 'fadeIn';
  $export['owlcarousel_lazy_effect_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_lazy_follow_owlcarousel_settings_collection-images';
  $strongarm->value = 1;
  $export['owlcarousel_lazy_follow_owlcarousel_settings_collection-images'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_lazy_follow_owlcarousel_settings_default';
  $strongarm->value = 1;
  $export['owlcarousel_lazy_follow_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_lazy_load_owlcarousel_settings_collection-images';
  $strongarm->value = 0;
  $export['owlcarousel_lazy_load_owlcarousel_settings_collection-images'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_lazy_load_owlcarousel_settings_default';
  $strongarm->value = 1;
  $export['owlcarousel_lazy_load_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_mouse_drag_owlcarousel_settings_collection-images';
  $strongarm->value = 1;
  $export['owlcarousel_mouse_drag_owlcarousel_settings_collection-images'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_mouse_drag_owlcarousel_settings_default';
  $strongarm->value = 1;
  $export['owlcarousel_mouse_drag_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_navigation_owlcarousel_settings_collection-images';
  $strongarm->value = 1;
  $export['owlcarousel_navigation_owlcarousel_settings_collection-images'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_navigation_owlcarousel_settings_default';
  $strongarm->value = 0;
  $export['owlcarousel_navigation_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_navigation_text_owlcarousel_settings_collection-images';
  $strongarm->value = array(
    0 => '<span class="glyphicon glyphicon-chevron-left"></span>',
    1 => '<span class="glyphicon glyphicon-chevron-right"></span>',
  );
  $export['owlcarousel_navigation_text_owlcarousel_settings_collection-images'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_navigation_text_owlcarousel_settings_default';
  $strongarm->value = array(
    0 => 'prev',
    1 => 'next',
  );
  $export['owlcarousel_navigation_text_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_override_ajax_pagination_owlcarousel_settings_collection-images';
  $strongarm->value = 0;
  $export['owlcarousel_override_ajax_pagination_owlcarousel_settings_collection-images'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_override_ajax_pagination_owlcarousel_settings_default';
  $strongarm->value = 0;
  $export['owlcarousel_override_ajax_pagination_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_pagination_numbers_owlcarousel_settings_collection-images';
  $strongarm->value = 0;
  $export['owlcarousel_pagination_numbers_owlcarousel_settings_collection-images'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_pagination_numbers_owlcarousel_settings_default';
  $strongarm->value = 0;
  $export['owlcarousel_pagination_numbers_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_pagination_owlcarousel_settings_collection-images';
  $strongarm->value = 0;
  $export['owlcarousel_pagination_owlcarousel_settings_collection-images'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_pagination_owlcarousel_settings_default';
  $strongarm->value = 1;
  $export['owlcarousel_pagination_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_pagination_speed_owlcarousel_settings_collection-images';
  $strongarm->value = '800';
  $export['owlcarousel_pagination_speed_owlcarousel_settings_collection-images'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_pagination_speed_owlcarousel_settings_default';
  $strongarm->value = '800';
  $export['owlcarousel_pagination_speed_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_responsive_base_width_owlcarousel_settings_collection-images';
  $strongarm->value = 'window';
  $export['owlcarousel_responsive_base_width_owlcarousel_settings_collection-images'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_responsive_base_width_owlcarousel_settings_default';
  $strongarm->value = 'window';
  $export['owlcarousel_responsive_base_width_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_responsive_owlcarousel_settings_collection-images';
  $strongarm->value = 1;
  $export['owlcarousel_responsive_owlcarousel_settings_collection-images'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_responsive_owlcarousel_settings_default';
  $strongarm->value = 1;
  $export['owlcarousel_responsive_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_responsive_refresh_rate_owlcarousel_settings_collection-images';
  $strongarm->value = '200';
  $export['owlcarousel_responsive_refresh_rate_owlcarousel_settings_collection-images'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_responsive_refresh_rate_owlcarousel_settings_default';
  $strongarm->value = '100';
  $export['owlcarousel_responsive_refresh_rate_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_rewind_nav_owlcarousel_settings_collection-images';
  $strongarm->value = 1;
  $export['owlcarousel_rewind_nav_owlcarousel_settings_collection-images'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_rewind_nav_owlcarousel_settings_default';
  $strongarm->value = 1;
  $export['owlcarousel_rewind_nav_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_rewind_speed_owlcarousel_settings_collection-images';
  $strongarm->value = '1000';
  $export['owlcarousel_rewind_speed_owlcarousel_settings_collection-images'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_rewind_speed_owlcarousel_settings_default';
  $strongarm->value = '1000';
  $export['owlcarousel_rewind_speed_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_scroll_per_page_owlcarousel_settings_collection-images';
  $strongarm->value = 0;
  $export['owlcarousel_scroll_per_page_owlcarousel_settings_collection-images'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_scroll_per_page_owlcarousel_settings_default';
  $strongarm->value = 0;
  $export['owlcarousel_scroll_per_page_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_settings_collection-images';
  $strongarm->value = 'Collection Images';
  $export['owlcarousel_settings_collection-images'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_settings_default';
  $strongarm->value = 'owlcarousel_default';
  $export['owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_single_item_owlcarousel_settings_collection-images';
  $strongarm->value = 0;
  $export['owlcarousel_single_item_owlcarousel_settings_collection-images'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_single_item_owlcarousel_settings_default';
  $strongarm->value = 0;
  $export['owlcarousel_single_item_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_slide_speed_owlcarousel_settings_collection-images';
  $strongarm->value = '200';
  $export['owlcarousel_slide_speed_owlcarousel_settings_collection-images'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_slide_speed_owlcarousel_settings_default';
  $strongarm->value = '200';
  $export['owlcarousel_slide_speed_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_stop_on_hover_owlcarousel_settings_collection-images';
  $strongarm->value = 0;
  $export['owlcarousel_stop_on_hover_owlcarousel_settings_collection-images'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_stop_on_hover_owlcarousel_settings_default';
  $strongarm->value = 1;
  $export['owlcarousel_stop_on_hover_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_theme_owlcarousel_settings_collection-images';
  $strongarm->value = 'owl-theme';
  $export['owlcarousel_theme_owlcarousel_settings_collection-images'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_theme_owlcarousel_settings_default';
  $strongarm->value = 'owl-theme';
  $export['owlcarousel_theme_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_touch_drag_owlcarousel_settings_collection-images';
  $strongarm->value = 1;
  $export['owlcarousel_touch_drag_owlcarousel_settings_collection-images'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_touch_drag_owlcarousel_settings_default';
  $strongarm->value = 1;
  $export['owlcarousel_touch_drag_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_transition_style_owlcarousel_settings_collection-images';
  $strongarm->value = '';
  $export['owlcarousel_transition_style_owlcarousel_settings_collection-images'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_transition_style_owlcarousel_settings_default';
  $strongarm->value = 'goDown';
  $export['owlcarousel_transition_style_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_frontpage';
  $strongarm->value = 'front';
  $export['site_frontpage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_name';
  $strongarm->value = 'MacOdrum Library Digital Collections';
  $export['site_name'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_slogan';
  $strongarm->value = 'Explore and contribute to our Online Collections';
  $export['site_slogan'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_cu_theme_files_directory';
  $strongarm->value = 'public://adaptivetheme/cu_theme_files';
  $export['theme_cu_theme_files_directory'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_cu_theme_settings';
  $strongarm->value = array(
    'toggle_logo' => 1,
    'toggle_name' => 1,
    'toggle_slogan' => 1,
    'toggle_node_user_picture' => 1,
    'toggle_comment_user_picture' => 1,
    'toggle_comment_user_verification' => 1,
    'toggle_favicon' => 1,
    'toggle_main_menu' => 0,
    'toggle_secondary_menu' => 0,
    'default_logo' => 1,
    'logo_path' => '',
    'logo_upload' => '',
    'default_favicon' => 1,
    'favicon_path' => '',
    'favicon_upload' => '',
    'bigscreen_layout' => 'three_col_grail',
    'bigscreen_sidebar_unit' => '%',
    'bigscreen_sidebar_first' => '25',
    'bigscreen_sidebar_second' => '25',
    'bigscreen_page_unit' => '%',
    'bigscreen_page_width' => '100',
    'bigscreen_set_max_width' => 1,
    'bigscreen_max_width_unit' => 'px',
    'bigscreen_max_width' => '1280',
    'bigscreen_media_query' => 'only screen and (min-width:1025px)',
    'tablet_landscape_layout' => 'three_col_grail',
    'tablet_landscape_sidebar_unit' => '%',
    'tablet_landscape_sidebar_first' => '20',
    'tablet_landscape_sidebar_second' => '20',
    'tablet_landscape_page_unit' => '%',
    'tablet_landscape_page_width' => '100',
    'tablet_landscape_media_query' => 'only screen and (min-width:769px) and (max-width:1024px)',
    'tablet_portrait_layout' => 'one_col_vert',
    'tablet_portrait_sidebar_unit' => '%',
    'tablet_portrait_sidebar_first' => '50',
    'tablet_portrait_sidebar_second' => '50',
    'tablet_portrait_page_unit' => '%',
    'tablet_portrait_page_width' => '100',
    'tablet_portrait_media_query' => 'only screen and (min-width:581px) and (max-width:768px)',
    'smalltouch_landscape_layout' => 'one_col_vert',
    'smalltouch_landscape_sidebar_unit' => '%',
    'smalltouch_landscape_sidebar_first' => '50',
    'smalltouch_landscape_sidebar_second' => '50',
    'smalltouch_landscape_media_query' => 'only screen and (min-width:321px) and (max-width:580px)',
    'smalltouch_landscape_page_width' => '100',
    'smalltouch_landscape_page_unit' => '%',
    'smalltouch_portrait_media_query' => 'only screen and (max-width:320px)',
    'smalltouch_portrait_page_width' => '100',
    'smalltouch_portrait_page_unit' => '%',
    'smalltouch_portrait_sidebar_first' => '100',
    'smalltouch_portrait_sidebar_second' => '100',
    'smalltouch_portrait_sidebar_unit' => '%',
    'smalltouch_portrait_layout' => 'one_col_stack',
    'bigscreen_three_3x33' => 'three-3x33',
    'bigscreen_three_50_25_25' => 'three-50-25-25',
    'bigscreen_three_25_50_25' => 'three-25-50-25',
    'bigscreen_three_25_25_50' => 'three-25-25-50',
    'bigscreen_five_5x20' => 'five-5x20-2x3-grid',
    'bigscreen_two_brick' => 'two-brick',
    'bigscreen_two_50' => 'two-50',
    'bigscreen_two_66_33' => 'two-66-33',
    'bigscreen_two_33_66' => 'two-33-66',
    'bigscreen_four_4x25' => 'four-4x25',
    'bigscreen_six_6x16' => 'six-6x16-3x2-grid',
    'bigscreen_three_inset_right' => 'three-inset-right',
    'bigscreen_three_inset_left' => 'three-inset-left',
    'tablet_landscape_three_3x33' => 'three-3x33',
    'tablet_landscape_three_50_25_25' => 'three-50-25-25',
    'tablet_landscape_three_25_50_25' => 'three-25-50-25',
    'tablet_landscape_three_25_25_50' => 'three-25-25-50',
    'tablet_landscape_five_5x20' => 'five-5x20',
    'tablet_landscape_two_brick' => 'two-brick',
    'tablet_landscape_two_50' => 'two-50',
    'tablet_landscape_two_66_33' => 'two-66-33',
    'tablet_landscape_two_33_66' => 'two-33-66',
    'tablet_landscape_four_4x25' => 'four-4x25',
    'tablet_landscape_six_6x16' => 'six-6x16-3x2-grid',
    'tablet_landscape_three_inset_right' => 'three-inset-right',
    'tablet_landscape_three_inset_left' => 'three-inset-left',
    'tablet_portrait_three_3x33' => 'three-3x33-stack-top',
    'tablet_portrait_three_50_25_25' => 'three-50-25-25-stack-top',
    'tablet_portrait_three_25_50_25' => 'three-25-50-25-stack-top',
    'tablet_portrait_three_25_25_50' => 'three-25-25-50-stack-top',
    'tablet_portrait_five_5x20' => 'five-5x20-1x2x2-grid',
    'tablet_portrait_two_brick' => 'two-brick',
    'tablet_portrait_two_50' => 'two-50',
    'tablet_portrait_two_66_33' => 'two-66-33',
    'tablet_portrait_two_33_66' => 'two-33-66',
    'tablet_portrait_four_4x25' => 'four-4x25-2x2-grid',
    'tablet_portrait_six_6x16' => 'six-6x16-2x3-grid',
    'tablet_portrait_three_inset_right' => 'three-inset-right-wrap',
    'tablet_portrait_three_inset_left' => 'three-inset-left-wrap',
    'smalltouch_landscape_three_3x33' => 'three-3x33-stack',
    'smalltouch_landscape_three_50_25_25' => 'three-50-25-25-stack',
    'smalltouch_landscape_three_25_50_25' => 'three-25-50-25-stack',
    'smalltouch_landscape_three_25_25_50' => 'three-25-25-50-stack',
    'smalltouch_landscape_five_5x20' => 'five-5x20-stack',
    'smalltouch_landscape_two_brick' => 'two-brick-stack',
    'smalltouch_landscape_two_50' => 'two-50-stack',
    'smalltouch_landscape_two_66_33' => 'two-66-33-stack',
    'smalltouch_landscape_two_33_66' => 'two-33-66-stack',
    'smalltouch_landscape_four_4x25' => 'four-4x25-stack',
    'smalltouch_landscape_six_6x16' => 'six-6x16-stack',
    'smalltouch_landscape_three_inset_right' => 'three-inset-right-stack',
    'smalltouch_landscape_three_inset_left' => 'three-inset-left-stack',
    'global_default_layout_toggle' => 0,
    'global_default_layout' => 'smalltouch-portrait',
    'disable_responsive_styles' => 0,
    'global_files_path' => 'public_files',
    'custom_files_path' => '',
    'combine_css_files' => 0,
    'combine_js_files' => 0,
    'enable_custom_media_queries' => 1,
    'load_html5js' => 1,
    'load_matchmediajs' => 0,
    'load_onmediaqueryjs' => 0,
    'load_ltie8css' => 0,
    'load_respondjs' => 0,
    'load_scalefixjs' => 0,
    'adaptivetheme_meta_viewport' => 'width=device-width, initial-scale=1.0, user-scalable=yes',
    'adaptivetheme_meta_mobileoptimized' => 'width',
    'adaptivetheme_meta_handheldfriendly' => '1',
    'adaptivetheme_meta_apple_mobile_web_app_capable' => 'yes',
    'adaptivetheme_meta_ie_document_mode' => '',
    'adaptivetheme_meta_clear_type' => 0,
    'expose_regions' => 0,
    'show_window_size' => 0,
    'atcore_version_test' => 0,
    'load_all_panels' => 0,
    'load_all_panels_no_sidebars' => 0,
    'enable_extensions' => 1,
    'enable_font_settings' => 0,
    'enable_heading_settings' => 0,
    'enable_image_settings' => 0,
    'enable_apple_touch_icons' => 0,
    'enable_exclude_css' => 0,
    'enable_custom_css' => 0,
    'enable_context_regions' => 0,
    'enable_menu_toggle' => 0,
    'enable_float_region_blocks' => 0,
    'enable_markup_overides' => 1,
    'at-settings__active_tab' => 'edit-extend',
    'global_gutter_width' => '',
    'page_full_width_wrappers' => 0,
    'page_content_type_suggestions' => 0,
    'menu_item_span_elements' => 0,
    'breadcrumb_display' => 1,
    'breadcrumb_home' => 0,
    'breadcrumb_label' => 0,
    'breadcrumb_title' => 1,
    'breadcrumb_separator' => ' / ',
    'login_block_remove_links' => 0,
    'login_block_remove_openid' => 0,
    'horizontal_login_block' => 0,
    'user_block_user_name' => 1,
    'frontpage_remove_title' => 0,
    'unset_block_system_main_front' => 0,
    'feed_icons_hide' => 0,
    'comments_hide_title' => 0,
    'unset_menu_titles' => 0,
    'unset_local_tasks' => 0,
    'adv_search_extra_fieldsets' => 0,
    'skip_link_target' => '#main-content',
    'rel_author' => 0,
    'logo_title' => 0,
    'extra_page_classes' => 1,
    'extra_article_classes' => 1,
    'extra_comment_classes' => 1,
    'extra_block_classes' => 1,
    'extra_menu_classes' => 1,
    'extra_item_list_classes' => 1,
    'attribution_toggle' => 0,
    'at__active_tab' => 'edit-modify-output',
    'at_core' => '7.x-3.x',
    'designkit_color' => array(
      'leaderboard_color' => '#000000',
      'body_background' => '#E6E6E6',
      'footer_background' => '#000000',
    ),
  );
  $export['theme_cu_theme_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_default';
  $strongarm->value = 'cu_theme';
  $export['theme_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_ir7_saas_settings';
  $strongarm->value = array(
    'toggle_logo' => 1,
    'toggle_name' => 1,
    'toggle_slogan' => 1,
    'toggle_node_user_picture' => 1,
    'toggle_comment_user_picture' => 1,
    'toggle_favicon' => 1,
    'toggle_main_menu' => 1,
    'toggle_secondary_menu' => 0,
    'default_logo' => 1,
    'logo_path' => '',
    'logo_upload' => '',
    'default_favicon' => 1,
    'favicon_path' => '',
    'favicon_upload' => '',
    'zen_breadcrumb' => 'yes',
    'zen_breadcrumb_separator' => ' › ',
    'zen_breadcrumb_home' => 1,
    'zen_breadcrumb_trailing' => 1,
    'zen_breadcrumb_title' => 0,
    'zen_skip_link_anchor' => 'main-menu',
    'zen_skip_link_text' => 'Jump to navigation',
    'zen_meta' => array(
      'html5' => 'html5',
      'meta' => 'meta',
    ),
    'zen_rebuild_registry' => 0,
    'ir7_saas_background_dsid' => 'OBJ',
    'designkit_color' => array(
      'background' => '#E2E2E2',
      'header' => '#E2E2E2',
      'content' => '#ffffff',
      'navigation' => '#E2E2E2',
      'footer' => '#E2E2E2',
      'sidebars' => '#ffffff',
    ),
  );
  $export['theme_ir7_saas_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_saas_settings';
  $strongarm->value = array(
    'toggle_logo' => 1,
    'toggle_name' => 0,
    'toggle_slogan' => 0,
    'toggle_node_user_picture' => 1,
    'toggle_comment_user_picture' => 1,
    'toggle_comment_user_verification' => 1,
    'toggle_favicon' => 1,
    'toggle_main_menu' => 1,
    'toggle_secondary_menu' => 1,
    'default_logo' => 1,
    'logo_path' => '',
    'logo_upload' => '',
    'default_favicon' => 1,
    'favicon_path' => '',
    'favicon_upload' => '',
    'bootstrap__active_tab' => 'edit-general',
    'bootstrap_fluid_container' => 0,
    'bootstrap_button_size' => '',
    'bootstrap_button_colorize' => 1,
    'bootstrap_button_iconize' => 1,
    'bootstrap_forms_required_has_error' => 0,
    'bootstrap_forms_smart_descriptions' => 1,
    'bootstrap_forms_smart_descriptions_limit' => '250',
    'bootstrap_forms_smart_descriptions_allowed_tags' => 'b, code, em, i, kbd, span, strong',
    'bootstrap_image_shape' => '',
    'bootstrap_image_responsive' => 1,
    'bootstrap_table_bordered' => 0,
    'bootstrap_table_condensed' => 0,
    'bootstrap_table_hover' => 1,
    'bootstrap_table_striped' => 1,
    'bootstrap_table_responsive' => 1,
    'bootstrap_breadcrumb' => '1',
    'bootstrap_breadcrumb_home' => 0,
    'bootstrap_breadcrumb_title' => 1,
    'bootstrap_navbar_position' => 'static-top',
    'bootstrap_navbar_inverse' => 0,
    'bootstrap_pager_first_and_last' => 1,
    'bootstrap_region_well-navigation' => '',
    'bootstrap_region_well-header' => '',
    'bootstrap_region_well-highlighted' => '',
    'bootstrap_region_well-help' => '',
    'bootstrap_region_well-content' => '',
    'bootstrap_region_well-sidebar_first' => '',
    'bootstrap_region_well-sidebar_second' => '',
    'bootstrap_region_well-pre_footer' => '',
    'bootstrap_region_well-footer' => '',
    'bootstrap_region_well-page_top' => '',
    'bootstrap_region_well-page_bottom' => '',
    'bootstrap_region_well-dashboard_main' => '',
    'bootstrap_region_well-dashboard_sidebar' => '',
    'bootstrap_region_well-dashboard_inactive' => '',
    'bootstrap_anchors_fix' => '0',
    'bootstrap_anchors_smooth_scrolling' => '0',
    'bootstrap_forms_has_error_value_toggle' => 1,
    'bootstrap_popover_enabled' => 1,
    'bootstrap_popover_animation' => 1,
    'bootstrap_popover_html' => 0,
    'bootstrap_popover_placement' => 'top',
    'bootstrap_popover_selector' => '',
    'bootstrap_popover_trigger' => array(
      'click' => 'click',
      'hover' => 0,
      'focus' => 0,
      'manual' => 0,
    ),
    'bootstrap_popover_trigger_autoclose' => 1,
    'bootstrap_popover_title' => '',
    'bootstrap_popover_content' => '',
    'bootstrap_popover_delay' => '0',
    'bootstrap_popover_container' => 'body',
    'bootstrap_tooltip_enabled' => 0,
    'bootstrap_tooltip_animation' => 1,
    'bootstrap_tooltip_html' => 1,
    'bootstrap_tooltip_placement' => 'auto left',
    'bootstrap_tooltip_selector' => '',
    'bootstrap_tooltip_trigger' => array(
      'hover' => 'hover',
      'focus' => 'focus',
      'click' => 0,
      'manual' => 0,
    ),
    'bootstrap_tooltip_delay' => '0',
    'bootstrap_tooltip_container' => 'body',
    'bootstrap_toggle_jquery_error' => 0,
    'bootstrap_cdn_provider' => '',
    'bootstrap_cdn_custom_css' => 'https://cdn.jsdelivr.net/bootstrap/3.3.7/css/bootstrap.css',
    'bootstrap_cdn_custom_css_min' => 'https://cdn.jsdelivr.net/bootstrap/3.3.7/css/bootstrap.min.css',
    'bootstrap_cdn_custom_js' => 'https://cdn.jsdelivr.net/bootstrap/3.3.7/js/bootstrap.js',
    'bootstrap_cdn_custom_js_min' => 'https://cdn.jsdelivr.net/bootstrap/3.3.7/js/bootstrap.min.js',
    'bootstrap_cdn_jsdelivr_version' => '3.3.5',
    'bootstrap_cdn_jsdelivr_theme' => 'bootstrap',
    'browse_collection_pid' => 'islandora:root',
    'max_solr_result' => '10000',
  );
  $export['theme_saas_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_settings';
  $strongarm->value = array(
    'toggle_logo' => 1,
    'toggle_name' => 1,
    'toggle_slogan' => 1,
    'toggle_node_user_picture' => 1,
    'toggle_comment_user_picture' => 1,
    'toggle_comment_user_verification' => 1,
    'toggle_favicon' => 1,
    'toggle_main_menu' => 1,
    'toggle_secondary_menu' => 1,
    'default_logo' => 1,
    'logo_path' => '',
    'logo_upload' => '',
    'default_favicon' => 1,
    'favicon_path' => '',
    'favicon_upload' => '',
    'designkit_color' => array(
      'background' => '',
      'header' => '#ffffff',
      'content' => '#ffffff',
      'navigation' => '#ffffff',
      'footer' => '#ffffff',
      'sidebars' => '#ffffff',
    ),
  );
  $export['theme_settings'] = $strongarm;

  return $export;
}
