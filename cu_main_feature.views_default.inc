<?php
/**
 * @file
 * cu_main_feature.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function cu_main_feature_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'at_a_glance';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'At a Glance';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'At a Glance';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image_block']['id'] = 'field_image_block';
  $handler->display->display_options['fields']['field_image_block']['table'] = 'field_data_field_image_block';
  $handler->display->display_options['fields']['field_image_block']['field'] = 'field_image_block';
  $handler->display->display_options['fields']['field_image_block']['label'] = '';
  $handler->display->display_options['fields']['field_image_block']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_block']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_block']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Node UUID */
  $handler->display->display_options['filters']['uuid']['id'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['table'] = 'node';
  $handler->display->display_options['filters']['uuid']['field'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['value'] = '50347416-1888-4ba9-ac43-f9c2e8945d3b';

  /* Display: At a Glance */
  $handler = $view->new_display('block', 'At a Glance', 'block');

  /* Display: Explore Group */
  $handler = $view->new_display('block', 'Explore Group', 'block_1');
  $translatables['at_a_glance'] = array(
    t('Master'),
    t('At a Glance'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Explore Group'),
  );
  $export['at_a_glance'] = $view;

  $view = new view();
  $view->name = 'basic_info';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Basic Info';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Basic Info';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Node UUID */
  $handler->display->display_options['filters']['uuid']['id'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['table'] = 'node';
  $handler->display->display_options['filters']['uuid']['field'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['value'] = 'fdf0c76a-1260-46bc-94a4-414aff3bc079';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['basic_info'] = array(
    t('Master'),
    t('Basic Info'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Block'),
  );
  $export['basic_info'] = $view;

  $view = new view();
  $view->name = 'collection_description';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'islandora_solr';
  $view->human_name = 'Collection Description';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h3>Description</h3>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Field: Islandora Solr: mods_abstract_mt */
  $handler->display->display_options['fields']['mods_abstract_mt']['id'] = 'mods_abstract_mt';
  $handler->display->display_options['fields']['mods_abstract_mt']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['mods_abstract_mt']['field'] = 'mods_abstract_mt';
  $handler->display->display_options['fields']['mods_abstract_mt']['label'] = '';
  $handler->display->display_options['fields']['mods_abstract_mt']['element_type'] = 'p';
  $handler->display->display_options['fields']['mods_abstract_mt']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['mods_abstract_mt']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['mods_abstract_mt']['link_to_object'] = 0;
  /* Contextual filter: Islandora Solr: PID */
  $handler->display->display_options['arguments']['PID']['id'] = 'PID';
  $handler->display->display_options['arguments']['PID']['table'] = 'islandora_solr';
  $handler->display->display_options['arguments']['PID']['field'] = 'PID';
  $handler->display->display_options['arguments']['PID']['default_action'] = 'default';
  $handler->display->display_options['arguments']['PID']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['PID']['title'] = 'Description';
  $handler->display->display_options['arguments']['PID']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['PID']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['PID']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['PID']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['PID']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Islandora Solr: RELS_EXT_hasModel_uri_mt */
  $handler->display->display_options['filters']['RELS_EXT_hasModel_uri_mt']['id'] = 'RELS_EXT_hasModel_uri_mt';
  $handler->display->display_options['filters']['RELS_EXT_hasModel_uri_mt']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['RELS_EXT_hasModel_uri_mt']['field'] = 'RELS_EXT_hasModel_uri_mt';
  $handler->display->display_options['filters']['RELS_EXT_hasModel_uri_mt']['value'] = 'info:fedora/islandora:collectionCModel';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['collection_description'] = array(
    t('Master'),
    t('<none>'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('<h3>Description</h3>'),
    t('All'),
    t('Description'),
    t('Block'),
  );
  $export['collection_description'] = $view;

  $view = new view();
  $view->name = 'featured_collections';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'islandora_solr';
  $view->human_name = 'Featured Collections';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Featured Collections';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Islandora Solr: dc.title */
  $handler->display->display_options['fields']['dc.title']['id'] = 'dc.title';
  $handler->display->display_options['fields']['dc.title']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['dc.title']['field'] = 'dc.title';
  $handler->display->display_options['fields']['dc.title']['label'] = '';
  $handler->display->display_options['fields']['dc.title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['dc.title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['dc.title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['dc.title']['link_to_object'] = 0;
  /* Field: Islandora Solr: dc.description */
  $handler->display->display_options['fields']['dc.description']['id'] = 'dc.description';
  $handler->display->display_options['fields']['dc.description']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['dc.description']['field'] = 'dc.description';
  $handler->display->display_options['fields']['dc.description']['label'] = '';
  $handler->display->display_options['fields']['dc.description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['dc.description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['dc.description']['link_to_object'] = 0;
  /* Field: Islandora Solr: Datastream Image */
  $handler->display->display_options['fields']['tn_cache']['id'] = 'tn_cache';
  $handler->display->display_options['fields']['tn_cache']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['tn_cache']['field'] = 'tn_cache';
  $handler->display->display_options['fields']['tn_cache']['label'] = '';
  $handler->display->display_options['fields']['tn_cache']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tn_cache']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tn_cache']['link_to_object'] = 0;
  $handler->display->display_options['fields']['tn_cache']['tn_dsid'] = 'OBJ';
  $handler->display->display_options['fields']['tn_cache']['tn_style'] = 'featured_collections';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="data-wrapper">
  <div class="text-data match-height">
      <div class="title"><h2>[dc.title]</h2></div>
      <div class="description">[dc.description]</div>
  </div>
  <div class="photo match-height">[tn_cache]</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Filter criterion: Islandora Solr: RELS_EXT_isMemberOfCollection_uri_mt */
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['id'] = 'RELS_EXT_isMemberOfCollection_uri_mt';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['field'] = 'RELS_EXT_isMemberOfCollection_uri_mt';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['value'] = 'islandora:featured_collection';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['featured_collections'] = array(
    t('Master'),
    t('Featured Collections'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('<div class="data-wrapper">
  <div class="text-data match-height">
      <div class="title"><h2>[dc.title]</h2></div>
      <div class="description">[dc.description]</div>
  </div>
  <div class="photo match-height">[tn_cache]</div>
</div>'),
    t('Block'),
  );
  $export['featured_collections'] = $view;

  $view = new view();
  $view->name = 'footer_about';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Footer About';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Footer About';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Node UUID */
  $handler->display->display_options['filters']['uuid']['id'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['table'] = 'node';
  $handler->display->display_options['filters']['uuid']['field'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['value'] = 'a6c8f7b4-679c-4cc1-9f7d-bf39d005ae34';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['footer_about'] = array(
    t('Master'),
    t('Footer About'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Block'),
  );
  $export['footer_about'] = $view;

  $view = new view();
  $view->name = 'front_page_slideshow';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'islandora_solr';
  $view->human_name = 'Front Page Slideshow';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Front Page Slideshow';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'owlcarousel';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Islandora Solr: PID */
  $handler->display->display_options['fields']['PID']['id'] = 'PID';
  $handler->display->display_options['fields']['PID']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['PID']['field'] = 'PID';
  $handler->display->display_options['fields']['PID']['label'] = '';
  $handler->display->display_options['fields']['PID']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['PID']['link_to_object'] = 0;
  /* Field: Islandora Solr: dc.title */
  $handler->display->display_options['fields']['dc.title']['id'] = 'dc.title';
  $handler->display->display_options['fields']['dc.title']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['dc.title']['field'] = 'dc.title';
  $handler->display->display_options['fields']['dc.title']['label'] = '';
  $handler->display->display_options['fields']['dc.title']['element_class'] = 'title-field';
  $handler->display->display_options['fields']['dc.title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['dc.title']['link_to_object'] = 1;
  /* Filter criterion: Islandora Solr: RELS_EXT_isMemberOfCollection_uri_mt */
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['id'] = 'RELS_EXT_isMemberOfCollection_uri_mt';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['field'] = 'RELS_EXT_isMemberOfCollection_uri_mt';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['value'] = 'islandora:sample_collection';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['block_description'] = 'Front Page Owl Slideshow';
  $translatables['front_page_slideshow'] = array(
    t('Master'),
    t('Front Page Slideshow'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Block'),
    t('Front Page Owl Slideshow'),
  );
  $export['front_page_slideshow'] = $view;

  $view = new view();
  $view->name = 'frontpage_hero_slideshow';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'islandora_solr';
  $view->human_name = 'Frontpage Hero Slideshow';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Frontpage Hero Slideshow';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Islandora Solr: dc.description */
  $handler->display->display_options['fields']['dc.description']['id'] = 'dc.description';
  $handler->display->display_options['fields']['dc.description']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['dc.description']['field'] = 'dc.description';
  $handler->display->display_options['fields']['dc.description']['label'] = '';
  $handler->display->display_options['fields']['dc.description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['dc.description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['dc.description']['link_to_object'] = 0;
  /* Field: Global: Block area */
  $handler->display->display_options['fields']['block']['id'] = 'block';
  $handler->display->display_options['fields']['block']['table'] = 'views';
  $handler->display->display_options['fields']['block']['field'] = 'block';
  $handler->display->display_options['fields']['block']['label'] = '';
  $handler->display->display_options['fields']['block']['exclude'] = TRUE;
  $handler->display->display_options['fields']['block']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['block']['block_to_insert'] = 'islandora_solr:simple';
  $handler->display->display_options['fields']['block']['title'] = '<none>';
  /* Field: Islandora Solr: Datastream Image */
  $handler->display->display_options['fields']['tn_cache']['id'] = 'tn_cache';
  $handler->display->display_options['fields']['tn_cache']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['tn_cache']['field'] = 'tn_cache';
  $handler->display->display_options['fields']['tn_cache']['label'] = '';
  $handler->display->display_options['fields']['tn_cache']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['tn_cache']['alter']['text'] = '<div>
[tn_cache]
[block]
<div class="description">[dc.description]</div>
</div>';
  $handler->display->display_options['fields']['tn_cache']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tn_cache']['link_to_object'] = 0;
  $handler->display->display_options['fields']['tn_cache']['tn_style'] = 'islandora_imagecache_image_style_large';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['mods_titleInfo_subTitle_ms']['id'] = 'mods_titleInfo_subTitle_ms';
  $handler->display->display_options['fields']['mods_titleInfo_subTitle_ms']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['mods_titleInfo_subTitle_ms']['field'] = 'mods_titleInfo_subTitle_ms';
  $handler->display->display_options['fields']['mods_titleInfo_subTitle_ms']['label'] = '';
  $handler->display->display_options['fields']['mods_titleInfo_subTitle_ms']['exclude'] = TRUE;
  $handler->display->display_options['fields']['mods_titleInfo_subTitle_ms']['element_label_colon'] = FALSE;
  /* Field: Islandora Solr: mods_titleInfo_title_ms */
  $handler->display->display_options['fields']['mods_titleInfo_title_ms']['id'] = 'mods_titleInfo_title_ms';
  $handler->display->display_options['fields']['mods_titleInfo_title_ms']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['mods_titleInfo_title_ms']['field'] = 'mods_titleInfo_title_ms';
  $handler->display->display_options['fields']['mods_titleInfo_title_ms']['label'] = '';
  $handler->display->display_options['fields']['mods_titleInfo_title_ms']['exclude'] = TRUE;
  $handler->display->display_options['fields']['mods_titleInfo_title_ms']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['mods_titleInfo_title_ms']['link_to_object'] = 0;
  /* Field: Islandora Solr: PID */
  $handler->display->display_options['fields']['PID']['id'] = 'PID';
  $handler->display->display_options['fields']['PID']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['PID']['field'] = 'PID';
  $handler->display->display_options['fields']['PID']['label'] = '';
  $handler->display->display_options['fields']['PID']['exclude'] = TRUE;
  $handler->display->display_options['fields']['PID']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['PID']['link_to_object'] = 0;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Global: Block area */
  $handler->display->display_options['fields']['block']['id'] = 'block';
  $handler->display->display_options['fields']['block']['table'] = 'views';
  $handler->display->display_options['fields']['block']['field'] = 'block';
  $handler->display->display_options['fields']['block']['label'] = '';
  $handler->display->display_options['fields']['block']['exclude'] = TRUE;
  $handler->display->display_options['fields']['block']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['block']['block_to_insert'] = 'islandora_solr:simple';
  $handler->display->display_options['fields']['block']['title'] = '<none>';
  /* Field: Islandora Solr: PID */
  $handler->display->display_options['fields']['PID']['id'] = 'PID';
  $handler->display->display_options['fields']['PID']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['PID']['field'] = 'PID';
  $handler->display->display_options['fields']['PID']['label'] = '';
  $handler->display->display_options['fields']['PID']['exclude'] = TRUE;
  $handler->display->display_options['fields']['PID']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['PID']['link_to_object'] = 0;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['mods_titleInfo_subTitle_ms']['id'] = 'mods_titleInfo_subTitle_ms';
  $handler->display->display_options['fields']['mods_titleInfo_subTitle_ms']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['mods_titleInfo_subTitle_ms']['field'] = 'mods_titleInfo_subTitle_ms';
  $handler->display->display_options['fields']['mods_titleInfo_subTitle_ms']['label'] = '';
  $handler->display->display_options['fields']['mods_titleInfo_subTitle_ms']['exclude'] = TRUE;
  $handler->display->display_options['fields']['mods_titleInfo_subTitle_ms']['element_label_colon'] = FALSE;
  /* Field: Islandora Solr: fgs_label_s */
  $handler->display->display_options['fields']['fgs_label_s']['id'] = 'fgs_label_s';
  $handler->display->display_options['fields']['fgs_label_s']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['fgs_label_s']['field'] = 'fgs_label_s';
  $handler->display->display_options['fields']['fgs_label_s']['label'] = '';
  $handler->display->display_options['fields']['fgs_label_s']['exclude'] = TRUE;
  $handler->display->display_options['fields']['fgs_label_s']['alter']['text'] = 'SHOWN: [fgs_label_s]';
  $handler->display->display_options['fields']['fgs_label_s']['alter']['path'] = 'islandora/object/[PID]';
  $handler->display->display_options['fields']['fgs_label_s']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['fgs_label_s']['link_to_object'] = 0;
  /* Field: Islandora Solr: dc.description */
  $handler->display->display_options['fields']['dc.description']['id'] = 'dc.description';
  $handler->display->display_options['fields']['dc.description']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['dc.description']['field'] = 'dc.description';
  $handler->display->display_options['fields']['dc.description']['label'] = '';
  $handler->display->display_options['fields']['dc.description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['dc.description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['dc.description']['link_to_object'] = 0;
  /* Field: Islandora Solr: Datastream Image */
  $handler->display->display_options['fields']['tn_cache']['id'] = 'tn_cache';
  $handler->display->display_options['fields']['tn_cache']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['tn_cache']['field'] = 'tn_cache';
  $handler->display->display_options['fields']['tn_cache']['label'] = '';
  $handler->display->display_options['fields']['tn_cache']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['tn_cache']['alter']['text'] = '<div>
  <div class="image-background">
    [tn_cache]
    <div class="data-wrapper">
      <div class="inner-data-wrapper">
       <h2>[fgs_label_s]</h2>
        <span>Explore and contribute to our online collections</span>
        <div class="collection-link-wrapper">
         <a title="Click here to visit our online archive" href="/islandora">Our Collections</a>
        </div>
      </div>
    </div>
  </div>
</div>';
  $handler->display->display_options['fields']['tn_cache']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tn_cache']['link_to_object'] = 0;
  $handler->display->display_options['fields']['tn_cache']['tn_dsid'] = 'OBJ';
  $handler->display->display_options['fields']['tn_cache']['tn_style'] = 'front_page_image_style';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Islandora Solr: PID */
  $handler->display->display_options['filters']['PID']['id'] = 'PID';
  $handler->display->display_options['filters']['PID']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['PID']['field'] = 'PID';
  $handler->display->display_options['filters']['PID']['value'] = 'islandora:root';
  $handler->display->display_options['filters']['PID']['exposed'] = TRUE;
  $handler->display->display_options['filters']['PID']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['PID']['expose']['identifier'] = 'pid';
  $handler->display->display_options['filters']['PID']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );

  /* Display: Collection Hero */
  $handler = $view->new_display('block', 'Collection Hero', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Collection Hero Slideshow';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'collection-hero';
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Islandora Solr: dc.description */
  $handler->display->display_options['fields']['dc.description']['id'] = 'dc.description';
  $handler->display->display_options['fields']['dc.description']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['dc.description']['field'] = 'dc.description';
  $handler->display->display_options['fields']['dc.description']['label'] = '';
  $handler->display->display_options['fields']['dc.description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['dc.description']['alter']['max_length'] = '125';
  $handler->display->display_options['fields']['dc.description']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['dc.description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['dc.description']['link_to_object'] = 0;
  /* Field: Global: Block area */
  $handler->display->display_options['fields']['block']['id'] = 'block';
  $handler->display->display_options['fields']['block']['table'] = 'views';
  $handler->display->display_options['fields']['block']['field'] = 'block';
  $handler->display->display_options['fields']['block']['label'] = '';
  $handler->display->display_options['fields']['block']['exclude'] = TRUE;
  $handler->display->display_options['fields']['block']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['block']['block_to_insert'] = 'islandora_solr:simple';
  $handler->display->display_options['fields']['block']['title'] = '<none>';
  /* Field: Islandora Solr: Datastream Image */
  $handler->display->display_options['fields']['tn_cache']['id'] = 'tn_cache';
  $handler->display->display_options['fields']['tn_cache']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['tn_cache']['field'] = 'tn_cache';
  $handler->display->display_options['fields']['tn_cache']['label'] = '';
  $handler->display->display_options['fields']['tn_cache']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['tn_cache']['alter']['text'] = '<div>
[tn_cache]
[block]
<div class="description"></div>
</div>';
  $handler->display->display_options['fields']['tn_cache']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tn_cache']['link_to_object'] = 0;
  $handler->display->display_options['fields']['tn_cache']['tn_dsid'] = 'OBJ';
  $handler->display->display_options['fields']['tn_cache']['tn_style'] = 'islandora_imagecache_image_style_large';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['mods_titleInfo_subTitle_ms']['id'] = 'mods_titleInfo_subTitle_ms';
  $handler->display->display_options['fields']['mods_titleInfo_subTitle_ms']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['mods_titleInfo_subTitle_ms']['field'] = 'mods_titleInfo_subTitle_ms';
  $handler->display->display_options['fields']['mods_titleInfo_subTitle_ms']['label'] = '';
  $handler->display->display_options['fields']['mods_titleInfo_subTitle_ms']['exclude'] = TRUE;
  $handler->display->display_options['fields']['mods_titleInfo_subTitle_ms']['element_label_colon'] = FALSE;
  /* Field: Islandora Solr: mods_titleInfo_title_ms */
  $handler->display->display_options['fields']['mods_titleInfo_title_ms']['id'] = 'mods_titleInfo_title_ms';
  $handler->display->display_options['fields']['mods_titleInfo_title_ms']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['mods_titleInfo_title_ms']['field'] = 'mods_titleInfo_title_ms';
  $handler->display->display_options['fields']['mods_titleInfo_title_ms']['label'] = '';
  $handler->display->display_options['fields']['mods_titleInfo_title_ms']['exclude'] = TRUE;
  $handler->display->display_options['fields']['mods_titleInfo_title_ms']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['mods_titleInfo_title_ms']['link_to_object'] = 0;
  /* Field: Islandora Solr: PID */
  $handler->display->display_options['fields']['PID']['id'] = 'PID';
  $handler->display->display_options['fields']['PID']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['PID']['field'] = 'PID';
  $handler->display->display_options['fields']['PID']['label'] = '';
  $handler->display->display_options['fields']['PID']['exclude'] = TRUE;
  $handler->display->display_options['fields']['PID']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['PID']['link_to_object'] = 0;
  /* Field: Islandora Solr: fgs_label_s */
  $handler->display->display_options['fields']['fgs_label_s']['id'] = 'fgs_label_s';
  $handler->display->display_options['fields']['fgs_label_s']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['fgs_label_s']['field'] = 'fgs_label_s';
  $handler->display->display_options['fields']['fgs_label_s']['label'] = '';
  $handler->display->display_options['fields']['fgs_label_s']['exclude'] = TRUE;
  $handler->display->display_options['fields']['fgs_label_s']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['fgs_label_s']['link_to_object'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Islandora Solr: PID */
  $handler->display->display_options['arguments']['PID']['id'] = 'PID';
  $handler->display->display_options['arguments']['PID']['table'] = 'islandora_solr';
  $handler->display->display_options['arguments']['PID']['field'] = 'PID';
  $handler->display->display_options['arguments']['PID']['default_action'] = 'default';
  $handler->display->display_options['arguments']['PID']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['PID']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['PID']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['PID']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['PID']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;

  /* Display: Search Hero */
  $handler = $view->new_display('block', 'Search Hero', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Search Hero Slideshow';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'search-hero';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Global: Block area */
  $handler->display->display_options['fields']['block']['id'] = 'block';
  $handler->display->display_options['fields']['block']['table'] = 'views';
  $handler->display->display_options['fields']['block']['field'] = 'block';
  $handler->display->display_options['fields']['block']['label'] = '';
  $handler->display->display_options['fields']['block']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['block']['block_to_insert'] = 'islandora_solr:simple';
  $handler->display->display_options['fields']['block']['title'] = '<none>';
  /* Field: Islandora Solr: PID */
  $handler->display->display_options['fields']['PID']['id'] = 'PID';
  $handler->display->display_options['fields']['PID']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['PID']['field'] = 'PID';
  $handler->display->display_options['fields']['PID']['label'] = '';
  $handler->display->display_options['fields']['PID']['exclude'] = TRUE;
  $handler->display->display_options['fields']['PID']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['PID']['link_to_object'] = 0;
  $translatables['frontpage_hero_slideshow'] = array(
    t('Master'),
    t('Frontpage Hero Slideshow'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('<div>
[tn_cache]
[block]
<div class="description">[dc.description]</div>
</div>'),
    t('Block'),
    t('SHOWN: [fgs_label_s]'),
    t('<div>
  <div class="image-background">
    [tn_cache]
    <div class="data-wrapper">
      <div class="inner-data-wrapper">
       <h2>[fgs_label_s]</h2>
        <span>Explore and contribute to our online collections</span>
        <div class="collection-link-wrapper">
         <a title="Click here to visit our online archive" href="/islandora">Our Collections</a>
        </div>
      </div>
    </div>
  </div>
</div>'),
    t('Collection Hero'),
    t('Collection Hero Slideshow'),
    t('<div>
[tn_cache]
[block]
<div class="description"></div>
</div>'),
    t('All'),
    t('Search Hero'),
    t('Search Hero Slideshow'),
  );
  $export['frontpage_hero_slideshow'] = $view;

  $view = new view();
  $view->name = 'frontpage_solr_boxes';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'islandora_solr';
  $view->human_name = 'Frontpage Solr boxes';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Frontpage Solr boxes';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Islandora Solr: dc.title */
  $handler->display->display_options['fields']['dc.title']['id'] = 'dc.title';
  $handler->display->display_options['fields']['dc.title']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['dc.title']['field'] = 'dc.title';
  $handler->display->display_options['fields']['dc.title']['label'] = '';
  $handler->display->display_options['fields']['dc.title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['dc.title']['link_to_object'] = 1;
  /* Filter criterion: Islandora Solr: dc.title */
  $handler->display->display_options['filters']['dc.title']['id'] = 'dc.title';
  $handler->display->display_options['filters']['dc.title']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['dc.title']['field'] = 'dc.title';
  $handler->display->display_options['filters']['dc.title']['group'] = 1;

  /* Display: Browse Collections */
  $handler = $view->new_display('block', 'Browse Collections', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Browse Collections';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '11';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'dc.title' => 'dc.title',
    'counter' => 'counter',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Islandora Solr: dc.title */
  $handler->display->display_options['fields']['dc.title']['id'] = 'dc.title';
  $handler->display->display_options['fields']['dc.title']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['dc.title']['field'] = 'dc.title';
  $handler->display->display_options['fields']['dc.title']['label'] = '';
  $handler->display->display_options['fields']['dc.title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['dc.title']['link_to_object'] = 1;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Islandora Solr: dc.title */
  $handler->display->display_options['filters']['dc.title']['id'] = 'dc.title';
  $handler->display->display_options['filters']['dc.title']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['dc.title']['field'] = 'dc.title';
  $handler->display->display_options['filters']['dc.title']['group'] = 1;
  /* Filter criterion: Islandora Solr: RELS_EXT_isMemberOfCollection_uri_mt */
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['id'] = 'RELS_EXT_isMemberOfCollection_uri_mt';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['field'] = 'RELS_EXT_isMemberOfCollection_uri_mt';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['value'] = 'islandora:root';

  /* Display: Featured Collections */
  $handler = $view->new_display('block', 'Featured Collections', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Featured Collections';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'Featured Collections';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'There are no featured collections.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Islandora Solr: PID */
  $handler->display->display_options['fields']['PID']['id'] = 'PID';
  $handler->display->display_options['fields']['PID']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['PID']['field'] = 'PID';
  $handler->display->display_options['fields']['PID']['label'] = '';
  $handler->display->display_options['fields']['PID']['exclude'] = TRUE;
  $handler->display->display_options['fields']['PID']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['PID']['link_to_object'] = 0;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="islandora/object/[PID]"><img class="featured-thumb" src="islandora/object/[PID]/datastream/TN/view" alt=""/></a>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Islandora Solr: dc.title */
  $handler->display->display_options['fields']['dc.title']['id'] = 'dc.title';
  $handler->display->display_options['fields']['dc.title']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['dc.title']['field'] = 'dc.title';
  $handler->display->display_options['fields']['dc.title']['label'] = '';
  $handler->display->display_options['fields']['dc.title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['dc.title']['link_to_object'] = 1;
  /* Field: Islandora Solr: dc.description */
  $handler->display->display_options['fields']['dc.description']['id'] = 'dc.description';
  $handler->display->display_options['fields']['dc.description']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['dc.description']['field'] = 'dc.description';
  $handler->display->display_options['fields']['dc.description']['label'] = '';
  $handler->display->display_options['fields']['dc.description']['alter']['max_length'] = '140';
  $handler->display->display_options['fields']['dc.description']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['dc.description']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['dc.description']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Islandora Solr: dc.title */
  $handler->display->display_options['filters']['dc.title']['id'] = 'dc.title';
  $handler->display->display_options['filters']['dc.title']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['dc.title']['field'] = 'dc.title';
  $handler->display->display_options['filters']['dc.title']['group'] = 1;
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['rels.isMemberOfCollection']['id'] = 'rels.isMemberOfCollection';
  $handler->display->display_options['filters']['rels.isMemberOfCollection']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['rels.isMemberOfCollection']['field'] = 'rels.isMemberOfCollection';
  $handler->display->display_options['filters']['rels.isMemberOfCollection']['value'] = 'islandora:266';
  /* Filter criterion: Islandora Solr: RELS_EXT_isMemberOfCollection_uri_mt */
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['id'] = 'RELS_EXT_isMemberOfCollection_uri_mt';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['field'] = 'RELS_EXT_isMemberOfCollection_uri_mt';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['value'] = 'islandora:featured_collection';
  $translatables['frontpage_solr_boxes'] = array(
    t('Master'),
    t('Frontpage Solr boxes'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Browse Collections'),
    t('Featured Collections'),
    t('There are no featured collections.'),
    t('<a href="islandora/object/[PID]"><img class="featured-thumb" src="islandora/object/[PID]/datastream/TN/view" alt=""/></a>'),
  );
  $export['frontpage_solr_boxes'] = $view;

  $view = new view();
  $view->name = 'image_blocks';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Image blocks';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Image blocks';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image_block']['id'] = 'field_image_block';
  $handler->display->display_options['fields']['field_image_block']['table'] = 'field_data_field_image_block';
  $handler->display->display_options['fields']['field_image_block']['field'] = 'field_image_block';
  $handler->display->display_options['fields']['field_image_block']['label'] = '';
  $handler->display->display_options['fields']['field_image_block']['element_type'] = '0';
  $handler->display->display_options['fields']['field_image_block']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_block']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_image_block']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_image_block']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_block']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_image_block']['field_api_classes'] = TRUE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'image_block' => 'image_block',
  );
  /* Filter criterion: Content: Nid */
  $handler->display->display_options['filters']['nid']['id'] = 'nid';
  $handler->display->display_options['filters']['nid']['table'] = 'node';
  $handler->display->display_options['filters']['nid']['field'] = 'nid';

  /* Display: Image Block 1 */
  $handler = $view->new_display('block', 'Image Block 1', 'block');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image_block']['id'] = 'field_image_block';
  $handler->display->display_options['fields']['field_image_block']['table'] = 'field_data_field_image_block';
  $handler->display->display_options['fields']['field_image_block']['field'] = 'field_image_block';
  $handler->display->display_options['fields']['field_image_block']['label'] = '';
  $handler->display->display_options['fields']['field_image_block']['element_type'] = '0';
  $handler->display->display_options['fields']['field_image_block']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_block']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_image_block']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_image_block']['empty'] = '<img src="sites/all/modules/cu_main_feature/images/award_winning.png"/>';
  $handler->display->display_options['fields']['field_image_block']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_block']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_image_block']['field_api_classes'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'image_block' => 'image_block',
  );
  /* Filter criterion: Content: Node UUID */
  $handler->display->display_options['filters']['uuid']['id'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['table'] = 'node';
  $handler->display->display_options['filters']['uuid']['field'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['value'] = '15310bdf-5e1b-408b-8a7b-19ae5569eabd';

  /* Display: Footer logo */
  $handler = $view->new_display('block', 'Footer logo', 'block_1');
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image_block']['id'] = 'field_image_block';
  $handler->display->display_options['fields']['field_image_block']['table'] = 'field_data_field_image_block';
  $handler->display->display_options['fields']['field_image_block']['field'] = 'field_image_block';
  $handler->display->display_options['fields']['field_image_block']['label'] = '';
  $handler->display->display_options['fields']['field_image_block']['element_type'] = '0';
  $handler->display->display_options['fields']['field_image_block']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_block']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_image_block']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_image_block']['empty'] = '<img src="/sites/all/modules/cu_main_feature/images/dgi-footer-logo.png"/>';
  $handler->display->display_options['fields']['field_image_block']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_block']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_image_block']['field_api_classes'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'image_block' => 'image_block',
  );
  /* Filter criterion: Content: Node UUID */
  $handler->display->display_options['filters']['uuid']['id'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['table'] = 'node';
  $handler->display->display_options['filters']['uuid']['field'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['value'] = '847549c5-2502-4938-8fbb-4ea35e2f4815';

  /* Display: Welcome Message */
  $handler = $view->new_display('block', 'Welcome Message', 'block_2');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'image_block' => 'image_block',
  );
  /* Filter criterion: Content: Node UUID */
  $handler->display->display_options['filters']['uuid']['id'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['table'] = 'node';
  $handler->display->display_options['filters']['uuid']['field'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['value'] = '9c8f491e-d901-4fc8-9b5d-75490185bdd6';
  $translatables['image_blocks'] = array(
    t('Master'),
    t('Image blocks'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Image Block 1'),
    t('<img src="sites/all/modules/cu_main_feature/images/award_winning.png"/>'),
    t('Footer logo'),
    t('<img src="/sites/all/modules/cu_main_feature/images/dgi-footer-logo.png"/>'),
    t('Welcome Message'),
  );
  $export['image_blocks'] = $view;

  $view = new view();
  $view->name = 'logo_copyright';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Logo Copyright';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Logo Copyright';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Image Block Link */
  $handler->display->display_options['fields']['field_image_block_link']['id'] = 'field_image_block_link';
  $handler->display->display_options['fields']['field_image_block_link']['table'] = 'field_data_field_image_block_link';
  $handler->display->display_options['fields']['field_image_block_link']['field'] = 'field_image_block_link';
  $handler->display->display_options['fields']['field_image_block_link']['label'] = '';
  $handler->display->display_options['fields']['field_image_block_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image_block_link']['element_label_colon'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image_block']['id'] = 'field_image_block';
  $handler->display->display_options['fields']['field_image_block']['table'] = 'field_data_field_image_block';
  $handler->display->display_options['fields']['field_image_block']['field'] = 'field_image_block';
  $handler->display->display_options['fields']['field_image_block']['label'] = '';
  $handler->display->display_options['fields']['field_image_block']['alter']['text'] = '<a href="[field_image_block_link]">
[field_image_block]
</a>';
  $handler->display->display_options['fields']['field_image_block']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_block']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_block']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Node UUID */
  $handler->display->display_options['filters']['uuid']['id'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['table'] = 'node';
  $handler->display->display_options['filters']['uuid']['field'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['value'] = 'a6c8f7b4-679c-4cc1-9f7d-bf39d005ae34';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['logo_copyright'] = array(
    t('Master'),
    t('Logo Copyright'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('<a href="[field_image_block_link]">
[field_image_block]
</a>'),
    t('Block'),
  );
  $export['logo_copyright'] = $view;

  $view = new view();
  $view->name = 'platform_front_page';
  $view->description = 'Emulates the default Drupal front page; you may set the default home page path to this view to make it your front page.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Platform Front page';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Sort criterion: Content: Sticky */
  $handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['table'] = 'node';
  $handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['order'] = 'DESC';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Promoted to front page */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';
  $handler->display->display_options['filters']['promote']['group'] = 0;
  $handler->display->display_options['filters']['promote']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'front';
  $translatables['platform_front_page'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Page'),
  );
  $export['platform_front_page'] = $view;

  $view = new view();
  $view->name = 'popular_resources';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'islandora_solr';
  $view->human_name = 'Popular Resources';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Popular Resources';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Islandora Solr: dc.title */
  $handler->display->display_options['fields']['dc.title']['id'] = 'dc.title';
  $handler->display->display_options['fields']['dc.title']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['dc.title']['field'] = 'dc.title';
  $handler->display->display_options['fields']['dc.title']['label'] = '';
  $handler->display->display_options['fields']['dc.title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['dc.title']['element_wrapper_class'] = 'popular-resource-title';
  $handler->display->display_options['fields']['dc.title']['link_to_object'] = 0;
  /* Field: Islandora Solr: Datastream Image */
  $handler->display->display_options['fields']['tn_cache']['id'] = 'tn_cache';
  $handler->display->display_options['fields']['tn_cache']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['tn_cache']['field'] = 'tn_cache';
  $handler->display->display_options['fields']['tn_cache']['label'] = '';
  $handler->display->display_options['fields']['tn_cache']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tn_cache']['link_to_object'] = 1;
  $handler->display->display_options['fields']['tn_cache']['tn_style'] = 'popular_resources';
  /* Field: Islandora Solr: dc.description */
  $handler->display->display_options['fields']['dc.description']['id'] = 'dc.description';
  $handler->display->display_options['fields']['dc.description']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['dc.description']['field'] = 'dc.description';
  $handler->display->display_options['fields']['dc.description']['label'] = '';
  $handler->display->display_options['fields']['dc.description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['dc.description']['link_to_object'] = 0;
  /* Sort criterion: Islandora Solr: fgs_createdDate_dt */
  $handler->display->display_options['sorts']['fgs_createdDate_dt']['id'] = 'fgs_createdDate_dt';
  $handler->display->display_options['sorts']['fgs_createdDate_dt']['table'] = 'islandora_solr';
  $handler->display->display_options['sorts']['fgs_createdDate_dt']['field'] = 'fgs_createdDate_dt';
  $handler->display->display_options['sorts']['fgs_createdDate_dt']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['fgs_createdDate_dt']['expose']['label'] = 'fgs_createdDate_dt';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['popular_resources'] = array(
    t('Master'),
    t('Popular Resources'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('fgs_createdDate_dt'),
    t('Block'),
  );
  $export['popular_resources'] = $view;

  $view = new view();
  $view->name = 'promoted_tabs';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'islandora_solr';
  $view->human_name = 'Promoted Tabs';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Promoted Tabs';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'owlcarousel';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Islandora Solr: Datastream Image */
  $handler->display->display_options['fields']['tn_cache']['id'] = 'tn_cache';
  $handler->display->display_options['fields']['tn_cache']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['tn_cache']['field'] = 'tn_cache';
  $handler->display->display_options['fields']['tn_cache']['label'] = '';
  $handler->display->display_options['fields']['tn_cache']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tn_cache']['link_to_object'] = 1;
  $handler->display->display_options['fields']['tn_cache']['tn_dsid'] = 'OBJ';
  $handler->display->display_options['fields']['tn_cache']['tn_style'] = 'islandora_imagecache_image_style_small';
  /* Field: Islandora Solr: mods_titleInfo_title_mt */
  $handler->display->display_options['fields']['mods_titleInfo_title_mt']['id'] = 'mods_titleInfo_title_mt';
  $handler->display->display_options['fields']['mods_titleInfo_title_mt']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['mods_titleInfo_title_mt']['field'] = 'mods_titleInfo_title_mt';
  $handler->display->display_options['fields']['mods_titleInfo_title_mt']['label'] = '';
  $handler->display->display_options['fields']['mods_titleInfo_title_mt']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['mods_titleInfo_title_mt']['link_to_object'] = 1;
  /* Filter criterion: Islandora Solr: RELS_EXT_isMemberOfCollection_uri_mt */
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['id'] = 'RELS_EXT_isMemberOfCollection_uri_mt';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['field'] = 'RELS_EXT_isMemberOfCollection_uri_mt';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['value'] = 'islandora:sample_collection';

  /* Display: Promoted Tab One */
  $handler = $view->new_display('block', 'Promoted Tab One', 'block');
  $handler->display->display_options['block_description'] = 'Promoted Tab One';

  /* Display: Promoted Tab Two */
  $handler = $view->new_display('block', 'Promoted Tab Two', 'block_1');
  $handler->display->display_options['block_description'] = 'Promoted Tab Two';

  /* Display: Promoted Tab Three */
  $handler = $view->new_display('block', 'Promoted Tab Three', 'block_2');
  $handler->display->display_options['block_description'] = 'Promoted Tab Three';

  /* Display: Neighborhoods */
  $handler = $view->new_display('block', 'Neighborhoods', 'block_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Neighborhoods';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['block_description'] = 'Neighborhoods';

  /* Display: Cities */
  $handler = $view->new_display('block', 'Cities', 'block_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Cities';
  $handler->display->display_options['block_description'] = 'Cities';

  /* Display: Names */
  $handler = $view->new_display('block', 'Names', 'block_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Names';
  $handler->display->display_options['block_description'] = 'Names';

  /* Display: Collection Images */
  $handler = $view->new_display('block', 'Collection Images', 'collection_images');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'collection-images';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'owlcarousel';
  $handler->display->display_options['style_options']['instance'] = 'owlcarousel_settings_collection-images';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = '<div class="header-data">Displaying @start - @end of @total Digital Images Shown</div>';
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['content'] = '<div class="header-data view-all">
  <a href="/islandora">See All<span class=\'glyphicon glyphicon-chevron-right\'></span></a>
</div>';
  $handler->display->display_options['header']['area_text_custom']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Islandora Solr: mods_titleInfo_title_mt */
  $handler->display->display_options['fields']['mods_titleInfo_title_mt']['id'] = 'mods_titleInfo_title_mt';
  $handler->display->display_options['fields']['mods_titleInfo_title_mt']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['mods_titleInfo_title_mt']['field'] = 'mods_titleInfo_title_mt';
  $handler->display->display_options['fields']['mods_titleInfo_title_mt']['label'] = '';
  $handler->display->display_options['fields']['mods_titleInfo_title_mt']['exclude'] = TRUE;
  $handler->display->display_options['fields']['mods_titleInfo_title_mt']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['mods_titleInfo_title_mt']['link_to_object'] = 0;
  /* Field: Islandora Solr: Datastream Image */
  $handler->display->display_options['fields']['tn_cache']['id'] = 'tn_cache';
  $handler->display->display_options['fields']['tn_cache']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['tn_cache']['field'] = 'tn_cache';
  $handler->display->display_options['fields']['tn_cache']['label'] = '';
  $handler->display->display_options['fields']['tn_cache']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['tn_cache']['alter']['text'] = '<span title="[mods_titleInfo_title_mt]">
[tn_cache]
</span>
';
  $handler->display->display_options['fields']['tn_cache']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tn_cache']['link_to_object'] = 1;
  $handler->display->display_options['fields']['tn_cache']['tn_dsid'] = 'OBJ';
  $handler->display->display_options['fields']['tn_cache']['tn_style'] = 'collection_images_style';
  $translatables['promoted_tabs'] = array(
    t('Master'),
    t('Promoted Tabs'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Promoted Tab One'),
    t('Promoted Tab Two'),
    t('Promoted Tab Three'),
    t('Neighborhoods'),
    t('Cities'),
    t('Names'),
    t('Collection Images'),
    t('<div class="header-data">Displaying @start - @end of @total Digital Images Shown</div>'),
    t('<div class="header-data view-all">
  <a href="/islandora">See All<span class=\'glyphicon glyphicon-chevron-right\'></span></a>
</div>'),
    t('<span title="[mods_titleInfo_title_mt]">
[tn_cache]
</span>
'),
  );
  $export['promoted_tabs'] = $view;

  $view = new view();
  $view->name = 'social_media_links';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Social Media Links';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Social Media Links';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Social Media Link */
  $handler->display->display_options['fields']['field_social_media_link']['id'] = 'field_social_media_link';
  $handler->display->display_options['fields']['field_social_media_link']['table'] = 'field_data_field_social_media_link';
  $handler->display->display_options['fields']['field_social_media_link']['field'] = 'field_social_media_link';
  $handler->display->display_options['fields']['field_social_media_link']['label'] = '';
  $handler->display->display_options['fields']['field_social_media_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_social_media_link']['element_label_colon'] = FALSE;
  /* Field: Content: Social Media Icon Image */
  $handler->display->display_options['fields']['field_social_media_link_icon']['id'] = 'field_social_media_link_icon';
  $handler->display->display_options['fields']['field_social_media_link_icon']['table'] = 'field_data_field_social_media_link_icon';
  $handler->display->display_options['fields']['field_social_media_link_icon']['field'] = 'field_social_media_link_icon';
  $handler->display->display_options['fields']['field_social_media_link_icon']['label'] = '';
  $handler->display->display_options['fields']['field_social_media_link_icon']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_social_media_link_icon']['alter']['text'] = '<a href="[field_social_media_link]">
[field_social_media_link_icon]
</a>';
  $handler->display->display_options['fields']['field_social_media_link_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_social_media_link_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_social_media_link_icon']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'social_media' => 'social_media',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['social_media_links'] = array(
    t('Master'),
    t('Social Media Links'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('<a href="[field_social_media_link]">
[field_social_media_link_icon]
</a>'),
    t('Block'),
  );
  $export['social_media_links'] = $view;

  $view = new view();
  $view->name = 'trending';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'islandora_solr';
  $view->human_name = 'Trending';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Trending';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Islandora Solr: Datastream Image */
  $handler->display->display_options['fields']['tn_cache']['id'] = 'tn_cache';
  $handler->display->display_options['fields']['tn_cache']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['tn_cache']['field'] = 'tn_cache';
  $handler->display->display_options['fields']['tn_cache']['label'] = '';
  $handler->display->display_options['fields']['tn_cache']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tn_cache']['link_to_object'] = 1;
  $handler->display->display_options['fields']['tn_cache']['tn_style'] = 'trending';
  /* Field: Islandora Solr: fedora_datastream_latest_DC_MIMETYPE_ms */
  $handler->display->display_options['fields']['fedora_datastream_latest_DC_MIMETYPE_ms']['id'] = 'fedora_datastream_latest_DC_MIMETYPE_ms';
  $handler->display->display_options['fields']['fedora_datastream_latest_DC_MIMETYPE_ms']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['fedora_datastream_latest_DC_MIMETYPE_ms']['field'] = 'fedora_datastream_latest_DC_MIMETYPE_ms';
  $handler->display->display_options['fields']['fedora_datastream_latest_DC_MIMETYPE_ms']['label'] = '';
  $handler->display->display_options['fields']['fedora_datastream_latest_DC_MIMETYPE_ms']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['fedora_datastream_latest_DC_MIMETYPE_ms']['element_wrapper_class'] = 'trending-type';
  $handler->display->display_options['fields']['fedora_datastream_latest_DC_MIMETYPE_ms']['link_to_object'] = 0;
  /* Field: Islandora Solr: dc.description */
  $handler->display->display_options['fields']['dc.description']['id'] = 'dc.description';
  $handler->display->display_options['fields']['dc.description']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['dc.description']['field'] = 'dc.description';
  $handler->display->display_options['fields']['dc.description']['label'] = '';
  $handler->display->display_options['fields']['dc.description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['dc.description']['element_wrapper_class'] = 'trending-description';
  $handler->display->display_options['fields']['dc.description']['link_to_object'] = 0;
  /* Sort criterion: Islandora Solr: fgs_createdDate_dt */
  $handler->display->display_options['sorts']['fgs_createdDate_dt']['id'] = 'fgs_createdDate_dt';
  $handler->display->display_options['sorts']['fgs_createdDate_dt']['table'] = 'islandora_solr';
  $handler->display->display_options['sorts']['fgs_createdDate_dt']['field'] = 'fgs_createdDate_dt';
  $handler->display->display_options['sorts']['fgs_createdDate_dt']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['fgs_createdDate_dt']['expose']['label'] = 'fgs_createdDate_dt';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['trending'] = array(
    t('Master'),
    t('Trending'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('fgs_createdDate_dt'),
    t('Block'),
  );
  $export['trending'] = $view;

  $view = new view();
  $view->name = 'welcome_block';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Welcome Block';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Welcome Block';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Node UUID */
  $handler->display->display_options['filters']['uuid']['id'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['table'] = 'node';
  $handler->display->display_options['filters']['uuid']['field'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['value'] = '9c8f491e-d901-4fc8-9b5d-75490185bdd6';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['welcome_block'] = array(
    t('Master'),
    t('Welcome Block'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Block'),
  );
  $export['welcome_block'] = $view;

  return $export;
}
