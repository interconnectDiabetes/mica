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
  
  $overrides["field_instance.node-study-field_marker_paper.label"] = 'Study reference paper';
  $overrides["field_instance.node-study-field_marker_paper.description"] = 'If available, enter a bibliographic citation (i.e. published sources such as journal article, web site, or report) which describes the study design'; /* WAS: 'If applicable, enter a bibliographic citation (i.e. published sources such as journal article, web site, or report) which should be used to refer to your study.' */ 
  $overrides["field_instance.node-study-field_marker_paper.settings|description_display"] = 'before';

  
  $overrides["field_instance.node-study-title_field.label"] = 'Name of the study'; /* WAS: 'Name' */
  $overrides["field_instance.node-study-title_field.description"] = 'Enter the official study name'; /* WAS: 'Official study name' */
  $overrides["field_instance.node-study-title_field.widget"] = array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => -5,
    );
  $overrides["field_instance.node-study-title_field.settings|description_display"] = 'before';

	$overrides["field_instance.node-study-field_acroym.widget|settings"] = array(
      'size' => 60,
    );
	$overrides["field_instance.node-study-field_acroym.description"] = 'If available, enter the study acronym'; /* WAS: 'Acronym of the study if applicable.' */
   $overrides["field_instance.node-study-field_acroym.settings|description_display"] = 'before';
	
  $overrides["field_instance.node-study-field_contacts_ref.label"] = 'Contact person(s)';
  $overrides["field_instance.node-study-field_contacts_ref.widget|settings"] = array(
    'autocomplete_match' => 'contains',
    'autocomplete_path' => 'node_reference/autocomplete',
    'size' => 60,
  );
  	$overrides["field_instance.node-study-field_contacts_ref.description"] = 'Enter the contact details of the person(s) that could provide additional information about the study. More contacts can be added with the "Add another item" button. You will be able to edit these Contacts after saving the Study.'; /* WAS: 'Enter the Contact full name. You will be able to edit these Contacts once the Study will be saved' */ 
	$overrides["field_instance.node-study-field_contacts_ref.settings|description_display"] = 'before';
	
  $overrides["field_instance.node-study-field_pubmedid.description"] = 'If available, enter the paper’s Pubmed ID'; /* WAS: 'If applicable, enter marker paper’s Pubmed ID.' */ 
  $overrides["field_instance.node-study-field_pubmedid.settings|description_display"] = 'before';  

  $overrides["field_instance.node-study-field_website.description"] = 'If available, enter the study website URL'; /* WAS: '' */ 
  $overrides["field_instance.node-study-field_website.settings|description_display"] = 'before'; 
  
  $overrides["field_instance.node-population-title_field.label"] = 'Enter the name of the sampling frame';
  $overrides["field_instance.node-population-title_field.widget"] = array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => -5,
    );
	$overrides["field_instance.node-population-title_field.description"] = 'Enter the name of the sampling frame'; /* WAS: '' */ 
  $overrides["field_instance.node-population-title_field.settings|description_display"] = 'before';

  
  
    // Exported overrides for: field_group
  $overrides["field_group.group_study_design|node|study|form.label"] = 'Overall main study design informing recruitment';
  $overrides["field_group.group_marker_paper|node|study|form.label"] = 'Study Reference Paper';
  
  
 return $overrides;
}
