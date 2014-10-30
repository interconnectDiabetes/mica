<?php
/**
 * @file
 * interconnect_studies.features.inc
 */

 
 /**
 * Implements hook_ctools_plugin_api().
 */
function interconnect_studies_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_field_default_field_bases_alter().
 */
// function interconnect_studies_field_default_field_bases_alter(&$data) {
  // if (isset($data['title_field'])) {
    // $data['title_field']['settings'] = array(
      // 'field_description_infos' => array(
        // 'field_description' => 1,
        // 'field_description_body' => 'Enter the official study',
        // 'field_description_label' => 'Study name',
        // 'field_description_value_type' => 'text',
      // ),
      // 'max_length' => 255,
      // 'profile2_private' => FALSE,
    // ); /* WAS: '' */
  // }
// }
 
/**
 * Implements hook_field_default_field_instances_alter().
 */

function interconnect_studies_field_default_field_instances_alter(&$data) {

  if (isset($data['node-study-body'])) {
    $data['node-study-body']['required'] = 0; /* WAS: 1 */
  }

 if (isset($data['node-study-field_contacts_ref'])) {
     $data['node-study-field_contacts_ref']['widget']['settings'] = array(
      'autocomplete_match' => 'contains',
      'autocomplete_path' => 'node_reference/autocomplete',
      'label_help_description' => 'Enter the contact details of the person(s) that could provide additional information about the study. More contacts can be added with the "Add another item" button. You will be able to edit these Contacts after saving the Study.',
      'size' => 60,
		);
	 $data['node-study-field_contacts_ref']['label'] = 'Contact person(s)'; /* WAS: 'Contacts' */ 
    // $data['node-study-field_contacts_ref']['widget']['module'] = 'node_reference'; /* WAS: 'noderefcreate' */
    // $data['node-study-field_contacts_ref']['widget']['settings'] = array(
      // 'autocomplete_match' => 'contains',
      // 'autocomplete_path' => 'node_reference/autocomplete',
      // 'references_dialog_add' => 1,
      // 'references_dialog_edit' => 1,
      // 'references_dialog_search' => 1,
      // 'references_dialog_search_view' => '',
      // 'size' => 60,
    // ); /* WAS: '' */
    // $data['node-study-field_contacts_ref']['widget']['type'] = 'node_reference_autocomplete'; /* WAS: 'noderefcreate_autocomplete' */
   }
 
  if (isset($data['node-study-field_marker_paper'])) {
    $data['node-study-field_marker_paper']['widget']['settings']['label_help_description'] = 'If available, enter a bibliographic citation (i.e. published sources such as journal article, web site, or report) which describes the study design'; /* WAS: '' */
    $data['node-study-field_marker_paper']['label'] = 'Study reference paper'; /* WAS: 'Marker paper' */ 
  }
  
    if (isset($data['node-study-field_pubmedid'])) {
    $data['node-study-field_pubmedid']['widget']['settings']['label_help_description'] = 'If available, enter the paper’s Pubmed ID'; /* WAS: '' */
  }
    if (isset($data['node-study-title_field'])) {
	$data['node-study-title_field']['label'] = 'Name of the study'; /* WAS: 'Name' */
	 $data['node-study-title_field']['widget'] = array(
	  'active' => 1,
	  'module' => 'text',
	  'settings' => array(
		'label_help_description' => 'Enter the official study name',
		'size' => 60,
	  ),
	  'type' => 'text_textfield',
	  'weight' => -5,
	);
  }

 
    if (isset($data['node-study-field_website'])) {
    $data['node-study-field_website']['widget']['settings']['label_help_description'] = 'If available, enter the study website URL'; /* WAS: '' */
  }
  
    if (isset($data['node-study-field_acroym'])) {
    $data['node-study-field_acroym']['widget']['settings'] = array(
      'label_help_description' => 'If available, enter the study acronym',
      'size' => 60,
    );
  
  }

    if (isset($data['node-population-title_field'])) {
    $data['node-population-title_field']['label'] = 'Name'; /* WAS: 'Title' */
  }

    if (isset($data['node-population-title_field'])) {
    $data['node-population-title_field']['description'] = 'Enter the name of the sampling frame'; /* WAS: '' */
    $data['node-population-title_field']['widget'] = array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'label_help_description' => 'Enter the name of the sampling frame',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => -5,
    );
  }  
  
    // if (isset($data['node-study-field_design'])) {
    // $data['node-study-field_design']['default_value'] = array(
      // 'value' => '_none',
    // ); 
	//}
}  


/**
 * Implements hook_field_group_info_alter().
 */
function interconnect_studies_field_group_info_alter(&$data) {
  if (isset($data['group_marker_paper|node|study|form'])) {
    $data['group_marker_paper|node|study|form']->data['label'] = 'Study Reference Paper'; /* WAS: 'Marker paper' */
  }

  if (isset($data['group_study_design|node|study|form'])) {
    $data['group_study_design|node|study|form']->data['label'] = 'Overall main study design informing recruitment'; /* WAS: 'Study Design' */
  }
  
}