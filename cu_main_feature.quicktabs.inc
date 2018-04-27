<?php
/**
 * @file
 * cu_main_feature.quicktabs.inc
 */

/**
 * Implements hook_quicktabs_default_quicktabs().
 */
function cu_main_feature_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'promoted_tabs';
  $quicktabs->ajax = 1;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Promoted Tabs';
  $quicktabs->tabs = array(
    0 => array(
      'vid' => 'promoted_tabs',
      'display' => 'block',
      'args' => '',
      'use_title' => 0,
      'title' => 'EVENTS',
      'weight' => '-100',
      'type' => 'view',
    ),
    1 => array(
      'vid' => 'promoted_tabs',
      'display' => 'block_1',
      'args' => '',
      'use_title' => 0,
      'title' => 'GOVERNMENT',
      'weight' => '-99',
      'type' => 'view',
    ),
    2 => array(
      'bid' => 'masquerade_delta_masquerade',
      'hide_title' => 1,
      'title' => 'DAILY LIFE',
      'weight' => '-98',
      'type' => 'block',
    ),
    3 => array(
      'bid' => 'masquerade_delta_masquerade',
      'hide_title' => 1,
      'title' => 'CREATIVITY',
      'weight' => '-97',
      'type' => 'block',
    ),
    4 => array(
      'bid' => 'masquerade_delta_masquerade',
      'hide_title' => 1,
      'title' => 'ENVIRONMENTS',
      'weight' => '-96',
      'type' => 'block',
    ),
    5 => array(
      'bid' => 'masquerade_delta_masquerade',
      'hide_title' => 1,
      'title' => 'WORK',
      'weight' => '-95',
      'type' => 'block',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'nostyle';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('CREATIVITY');
  t('DAILY LIFE');
  t('ENVIRONMENTS');
  t('EVENTS');
  t('GOVERNMENT');
  t('Promoted Tabs');
  t('WORK');

  $export['promoted_tabs'] = $quicktabs;

  return $export;
}
