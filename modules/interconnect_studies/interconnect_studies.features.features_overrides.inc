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
  // $overrides["field_base.title_field.settings"] = array(
    // 'field_description_infos' => array(
      // 'field_description' => 1,
      // 'field_description_body' => 'Enter the official study',
      // 'field_description_label' => 'Study name',
      // 'field_description_value_type' => 'text',
    // ),
    // 'max_length' => 255,
    // 'profile2_private' => FALSE,
  // );
  
    // Exported overrides for: field_instance
  $overrides["field_instance.node-study-body.required"] = 0;
  $overrides["field_instance.node-study-field_marker_paper.widget|settings|label_help_description"] = 'If available, enter a bibliographic citation (i.e. published sources such as journal article, web site, or report) which describes the study design';
  $overrides["field_instance.node-study-field_marker_paper.label"] = 'Study reference paper';
  $overrides["field_instance.node-study-title_field.label"] = 'Name of the study'; /* WAS: 'Name' */
  $overrides["field_instance.node-study-title_field.widget"] = array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'label_help_description' => 'Enter the official study name',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => -5,
    );
  $overrides["field_instance.node-study-field_acroym.widget|settings"] = array(
      'label_help_description' => 'If available, enter the study acronym',
      'size' => 60,
    );
  $overrides["field_instance.node-study-field_contacts_ref.label"] = 'Contact person(s)';
  $overrides["field_instance.node-study-field_contacts_ref.widget|settings"] = array(
    'autocomplete_match' => 'contains',
    'autocomplete_path' => 'node_reference/autocomplete',
    'label_help_description' => 'Enter the contact details of the person(s) that could provide additional information about the study. More contacts can be added with the "Add another item" button. You will be able to edit these Contacts after saving the Study.',
    'size' => 60,
  );
  $overrides["field_instance.node-study-field_pubmedid.widget|settings|label_help_description"] = 'If available, enter the paper’s Pubmed ID';
  $overrides["field_instance.node-study-field_website.widget|settings|label_help_description"] = 'If available, enter the study website URL';
  
  $overrides["field_instance.node-population-title_field.label"] = 'Enter the name of the sampling frame';
  $overrides["field_instance.node-population-title_field.widget"] = array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'label_help_description' => 'Enter the name of the sampling frame',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => -5,
    );
	

  
  
    // Exported overrides for: field_group
  $overrides["field_group.group_study_design|node|study|form.label"] = 'Overall main study design informing recruitment';
  $overrides["field_group.group_marker_paper|node|study|form.label"] = 'Study Reference Paper';
  
  
 return $overrides;
}
