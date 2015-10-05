<?php
/**
 * @file
 * animal.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function animal_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function animal_node_info() {
  $items = array(
    'animal' => array(
      'name' => t('Animal'),
      'base' => 'node_content',
      'description' => t('Animal names and descriptions'),
      'has_title' => '1',
      'title_label' => t('Animal'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
