<?php
/**
 * @file
 * sportsball.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function sportsball_filter_default_formats() {
  $formats = array();

  // Exported format: Dans Text Format.
  $formats['dans_text_format'] = array(
    'format' => 'dans_text_format',
    'name' => 'Dans Text Format',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(),
  );

  return $formats;
}
