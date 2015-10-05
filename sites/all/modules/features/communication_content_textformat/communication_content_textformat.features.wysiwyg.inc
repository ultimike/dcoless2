<?php
/**
 * @file
 * communication_content_textformat.features.wysiwyg.inc
 */

/**
 * Implements hook_wysiwyg_default_profiles().
 */
function communication_content_textformat_wysiwyg_default_profiles() {
  $profiles = array();

  // Exported profile: communications_content
  $profiles['communications_content'] = array(
    'format' => 'communications_content',
    'editor' => 'ckeditor',
    'settings' => array(
      'default' => 1,
      'user_choose' => 0,
      'show_toggle' => 1,
      'add_to_summaries' => 1,
      'theme' => '',
      'language' => 'en',
      'buttons' => array(
        'default' => array(
          'Bold' => 1,
          'Italic' => 1,
          'Strike' => 1,
          'JustifyLeft' => 1,
          'JustifyCenter' => 1,
          'JustifyRight' => 1,
          'JustifyBlock' => 1,
          'BulletedList' => 1,
          'NumberedList' => 1,
          'Indent' => 1,
          'Undo' => 1,
          'Link' => 1,
          'Unlink' => 1,
          'Image' => 1,
          'Cut' => 1,
          'Copy' => 1,
          'Paste' => 1,
          'Font' => 1,
          'FontSize' => 1,
          'SpellChecker' => 1,
          'Scayt' => 1,
        ),
      ),
      'toolbarLocation' => 'top',
      'resize_enabled' => 1,
      'default_toolbar_grouping' => 0,
      'simple_source_formatting' => 0,
      'acf_mode' => 0,
      'acf_allowed_content' => '',
      'css_setting' => 'theme',
      'css_path' => '',
      'stylesSet' => '',
      'block_formats' => 'p,address,pre,h2,h3,h4,h5,h6,div',
      'advanced__active_tab' => 'edit-paste',
      'forcePasteAsPlainText' => 0,
    ),
    'rdf_mapping' => array(),
  );

  return $profiles;
}
