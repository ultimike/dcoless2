<?php
/**
 * @file
 * creartive.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function creartive_filter_default_formats() {
  $formats = array();

  // Exported format: newtext.
  $formats['newtext'] = array(
    'format' => 'newtext',
    'name' => 'newtext',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(),
  );

  return $formats;
}
