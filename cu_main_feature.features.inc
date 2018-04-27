<?php
/**
 * @file
 * cu_main_feature.features.inc
 */

/**
 * Implements hook_default_blockgroups().
 */
function cu_main_feature_default_blockgroups() {
  return array(
    'first_sidebar_search_blocks' => 'FIrst Sidebar Search Blocks',
  );
}

/**
 * Implements hook_ctools_plugin_api().
 */
function cu_main_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "quicktabs" && $api == "quicktabs") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function cu_main_feature_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function cu_main_feature_image_default_styles() {
  $styles = array();

  // Exported image style: collection_images_style.
  $styles['collection_images_style'] = array(
    'label' => 'Collection Images Style',
    'effects' => array(
      28 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 211.5,
          'height' => 211.5,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: featured_collections.
  $styles['featured_collections'] = array(
    'label' => 'Featured Collections',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 425,
          'height' => 283,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: front_page_image_style.
  $styles['front_page_image_style'] = array(
    'label' => 'Front Page Image Style',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1542,
          'height' => 420,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: islandora_imagecache_image_style_large.
  $styles['islandora_imagecache_image_style_large'] = array(
    'label' => 'Islandora Imagecache Image Style Large Size',
    'effects' => array(
      27 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 3015,
          'height' => 900,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: islandora_imagecache_image_style_medium.
  $styles['islandora_imagecache_image_style_medium'] = array(
    'label' => 'Islandora Imagecache Image Style Medium Size',
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 185,
          'height' => 125,
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: islandora_imagecache_image_style_small.
  $styles['islandora_imagecache_image_style_small'] = array(
    'label' => 'Islandora Imagecache Image Style Small Size',
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 210,
          'height' => 210,
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: popular_resources.
  $styles['popular_resources'] = array(
    'label' => 'Popular Resources',
    'effects' => array(
      30 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 369,
          'height' => 200,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: trending.
  $styles['trending'] = array(
    'label' => 'Trending',
    'effects' => array(
      29 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 260,
          'height' => 180,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_islandora_solr_metadata_configurations_default_fields().
 */
function cu_main_feature_islandora_solr_metadata_configurations_default_fields() {
 return array(
  'collection_mods' => array(
    'fields' => array(
      'mods_abstract_ms' => array(
        'solr_field' => 'mods_abstract_ms',
        'data' => 'a:2:{s:13:"display_label";s:16:"mods_abstract_ms";s:9:"hyperlink";i:0;}',
        'weight' => 1,
        'display_label' => 'mods_abstract_ms',
        'hyperlink' => 0,
      ),
    ),
    'cmodels' => array(
      'islandora:collectionCModel' => array(
        'cmodel' => 'islandora:collectionCModel',
      ),
    ),
    'description' => array(
      'description_field' => 'dc.description',
      'description_label' => '',
      'description_data' => array(
        'truncation' => array(
          'truncation_type' => 'separate_value_option',
          'max_length' => 0,
          'word_safe' => 0,
          'ellipsis' => 0,
          'min_wordsafe_length' => 1,
        ),
      ),
    ),
    'name' => 'Collection MODS',
  ),
);
}
