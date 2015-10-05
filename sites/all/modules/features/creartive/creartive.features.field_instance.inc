<?php
/**
 * @file
 * creartive.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function creartive_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-artist_profile-body'
  $field_instances['node-artist_profile-body'] = array(
    'bundle' => 'artist_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 200,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'About the artist...',
    'required' => 0,
    'settings' => array(
      'display_summary' => 1,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => -4,
    ),
  );

  // Exported field_instance: 'node-artist_profile-field_date_of_birth'
  $field_instances['node-artist_profile-field_date_of_birth'] = array(
    'bundle' => 'artist_profile',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
        ),
        'type' => 'date_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
        ),
        'type' => 'date_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_date_of_birth',
    'label' => 'Date of birth',
    'required' => 0,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'm/d/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'no_fieldset' => 0,
        'text_parts' => array(),
        'year_range' => '-10:+3',
      ),
      'type' => 'date_select',
      'weight' => -3,
    ),
  );

  // Exported field_instance: 'node-artist_profile-field_foto'
  $field_instances['node-artist_profile-field_foto'] = array(
    'bundle' => 'artist_profile',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'module' => 'file_entity',
        'settings' => array(
          'file_view_mode' => 'default',
        ),
        'type' => 'file_rendered',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_foto',
    'label' => 'foto',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => 'fotos',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '2 MB',
      'max_resolution' => '800x800',
      'min_resolution' => '100x100',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'media',
      'settings' => array(
        'allowed_schemes' => array(
          'public' => 'public',
        ),
        'allowed_types' => array(
          'audio' => 0,
          'document' => 0,
          'image' => 'image',
          'media' => 0,
          'video' => 0,
        ),
        'browser_plugins' => array(
          'media_default--media_browser_1' => 'media_default--media_browser_1',
          'media_default--media_browser_my_files' => 'media_default--media_browser_my_files',
          'upload' => 'upload',
        ),
      ),
      'type' => 'media_generic',
      'weight' => -2,
    ),
  );

  // Exported field_instance: 'node-artist_profile-field_sound_sample'
  $field_instances['node-artist_profile-field_sound_sample'] = array(
    'bundle' => 'artist_profile',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'file_entity',
        'settings' => array(
          'autoplay' => FALSE,
          'controls' => TRUE,
          'loop' => FALSE,
          'multiple_file_behavior' => 'tags',
          'preload' => '',
        ),
        'type' => 'file_audio',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'module' => 'file_entity',
        'settings' => array(
          'autoplay' => FALSE,
          'controls' => TRUE,
          'loop' => FALSE,
          'multiple_file_behavior' => 'tags',
          'preload' => '',
        ),
        'type' => 'file_audio',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_sound_sample',
    'label' => 'sound sample',
    'required' => 0,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => 'artistsounds',
      'file_extensions' => 'mp3 wav',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'media',
      'settings' => array(
        'allowed_schemes' => array(
          'public' => 'public',
        ),
        'allowed_types' => array(
          'audio' => 'audio',
          'document' => 0,
          'image' => 0,
          'media' => 0,
          'video' => 0,
        ),
        'browser_plugins' => array(
          'media_default--media_browser_1' => 0,
          'media_default--media_browser_my_files' => 0,
          'media_internet' => 0,
          'upload' => 0,
        ),
      ),
      'type' => 'media_generic',
      'weight' => -1,
    ),
  );

  // Exported field_instance: 'node-artist_profile-field_video_sample'
  $field_instances['node-artist_profile-field_video_sample'] = array(
    'bundle' => 'artist_profile',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'file_entity',
        'settings' => array(
          'autoplay' => FALSE,
          'controls' => TRUE,
          'height' => NULL,
          'loop' => FALSE,
          'multiple_file_behavior' => 'tags',
          'muted' => FALSE,
          'preload' => '',
          'width' => NULL,
        ),
        'type' => 'file_video',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'module' => 'file_entity',
        'settings' => array(
          'autoplay' => FALSE,
          'controls' => TRUE,
          'height' => NULL,
          'loop' => FALSE,
          'multiple_file_behavior' => 'tags',
          'muted' => FALSE,
          'preload' => '',
          'width' => NULL,
        ),
        'type' => 'file_video',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_video_sample',
    'label' => 'video sample',
    'required' => 0,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => '',
      'file_extensions' => 'mpeg avi',
      'max_filesize' => '150 MB',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'media',
      'settings' => array(
        'allowed_schemes' => array(
          'public' => 'public',
        ),
        'allowed_types' => array(
          'audio' => 0,
          'document' => 0,
          'image' => 0,
          'media' => 0,
          'video' => 'video',
        ),
        'browser_plugins' => array(
          'media_default--media_browser_1' => 0,
          'media_default--media_browser_my_files' => 0,
          'media_internet' => 0,
          'upload' => 'upload',
        ),
      ),
      'type' => 'media_generic',
      'weight' => 0,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('About the artist...');
  t('Date of birth');
  t('foto');
  t('sound sample');
  t('video sample');

  return $field_instances;
}
