<?php
/**
 * @file
 * communication_content_textformat.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function communication_content_textformat_filter_default_formats() {
  $formats = array();

  // Exported format: communications content.
  $formats['communications_content'] = array(
    'format' => 'communications_content',
    'name' => 'communications content',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(
      'filter_url' => array(
        'weight' => -50,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'filter_html' => array(
        'weight' => -49,
        'status' => 1,
        'settings' => array(
          'allowed_html' => '<a> <em> <strong> <cite> <blockquote> <ul> <ol> <li> <dl> <dt> <dd> <form> <h1> <h2> <h3> <h4> <h5> <h6> <i>',
          'filter_html_help' => 1,
          'filter_html_nofollow' => 0,
        ),
      ),
      'filter_autop' => array(
        'weight' => -47,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_htmlcorrector' => array(
        'weight' => -46,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  return $formats;
}
