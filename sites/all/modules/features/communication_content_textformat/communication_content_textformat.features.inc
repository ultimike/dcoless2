<?php
/**
 * @file
 * communication_content_textformat.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function communication_content_textformat_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function communication_content_textformat_node_info() {
  $items = array(
    'publication' => array(
      'name' => t('Publication'),
      'base' => 'node_content',
      'description' => t('Brochure that deals with a different area of Benefits'),
      'has_title' => '1',
      'title_label' => t('Publication Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
