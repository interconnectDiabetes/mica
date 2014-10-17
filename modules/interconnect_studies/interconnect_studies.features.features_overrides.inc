<?php
/**
 * @file
 * interconnect_studies.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function interconnect_studies_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

    // Exported overrides for: field_base
  $overrides["field_base.title_field.settings"] = array(
    'field_description_infos' => array(
      'field_description' => 1,
      'field_description_body' => 'Enter the official study',
      'field_description_label' => 'Study name',
      'field_description_value_type' => 'text',
    ),
    'max_length' => 255,
    'profile2_private' => FALSE,
  );
  
    // Exported overrides for: field_instance
  $overrides["field_instance.node-study-body.required"] = 0;
  $overrides["field_instance.node-study-field_marker_paper.description"] = 'If available, enter a bibliographic citation (i.e. published sources such as journal article, web site, or report) which describes the study design';
  $overrides["field_instance.node-study-field_marker_paper.label"] = 'Study reference paper';
  $overrides["field_instance.node-study-title_field.description"] = 'Enter the official study';

  
 return $overrides;
}
