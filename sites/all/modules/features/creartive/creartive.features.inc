<?php
/**
 * @file
 * creartive.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function creartive_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function creartive_node_info() {
  $items = array(
    'artist_profile' => array(
      'name' => t('Artist Profile'),
      'base' => 'node_content',
      'description' => t('AN INTRODUCTION TO AN ARTIST WORK'),
      'has_title' => '1',
      'title_label' => t('Artist Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
