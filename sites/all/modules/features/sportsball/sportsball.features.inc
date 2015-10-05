<?php
/**
 * @file
 * sportsball.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function sportsball_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function sportsball_node_info() {
  $items = array(
    'sportsball' => array(
      'name' => t('Sportsball'),
      'base' => 'node_content',
      'description' => t('Use this to add your favorite sport.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
