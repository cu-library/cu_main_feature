<?php
/**
 * @file
 * cu_main_feature.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function cu_main_feature_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'More info about this site';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'about_this_site';
  $fe_block_boxes->body = '<div class="jumbotron">
<div class="more-info-block">
<h2>Explore our collections – freely, easily, openly</h2>

<p>Explore Chicago Collections lets researchers, teachers and students search many locations at once. Our unified search lets you locate thousands of archival collections and digital images at member institutions all over the Chicago area.</p>

<a href="/islandora">Learn more about us</a><a href="islandora">See all Libraries & Archives</a>
</div>
</div>';

  $export['about_this_site'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Submit to collection Anonymous';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'submit_to_collection_anonymous';
  $fe_block_boxes->body = '<a href="/user">|+| Submit to a collection</a>';

  $export['submit_to_collection_anonymous'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Submit to collection box';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'submit_to_collection_box';
  $fe_block_boxes->body = '<a href="/islandora/object/islandora%3Aroot">|+| Submit to a collection</a>';

  $export['submit_to_collection_box'] = $fe_block_boxes;

  return $export;
}
