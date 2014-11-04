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
	 $data['node-study-field_contacts_ref']['label'] = 'Contact person(s)'; /* WAS: 'Contacts' */ 
	 $data['node-study-field_contacts_ref']['description'] = 'Enter the contact details of the person(s) that could provide additional information about the study. More contacts can be added with the "Add another item" button. You will be able to edit these Contacts after saving the Study.'; /* WAS: 'Enter the Contact full name. You will be able to edit these Contacts once the Study will be saved' */ 
	 $data['node-study-field_contacts_ref']['settings']['description_display'] = 'before';
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
    $data['node-study-field_marker_paper']['label'] = 'Study reference paper'; /* WAS: 'Marker paper' */ 
	$data['node-study-field_marker_paper']['description'] = 'If available, enter a bibliographic citation (i.e. published sources such as journal article, web site, or report) which describes the study design'; /* WAS: 'If applicable, enter a bibliographic citation (i.e. published sources such as journal article, web site, or report) which should be used to refer to your study.' */ 
	$data['node-study-field_marker_paper']['settings']['description_display'] = 'before';
  }
  
    if (isset($data['node-study-field_pubmedid'])) {
    $data['node-study-field_pubmedid']['If available, enter the paper’s Pubmed ID'] = ''; /* WAS: 'If applicable, enter marker paper’s Pubmed ID.' */ 
	$data['node-study-field_pubmedid']['settings']['description_display'] = 'before';
 }
    if (isset($data['node-study-title_field'])) {
	$data['node-study-title_field']['label'] = 'Name of the study'; /* WAS: 'Name' */
	$data['node-study-title_field']['description'] = 'Enter the official study name'; /* WAS: 'Official study name' */
	$data['node-study-title_field']['settings']['description_display'] = 'before';

  }

 
    if (isset($data['node-study-field_website'])) {
	$data['node-study-field_website']['description'] = 'If available, enter the study website URL'; /* WAS: 'Official study name' */
	$data['node-study-field_website']['settings']['description_display'] = 'before';
  }
  
    if (isset($data['node-study-field_acroym'])) {
	$data['node-study-field_acroym']['description'] = 'If available, enter the study acronym'; /* WAS: 'Acronym of the study if applicable.' */
	$data['node-study-field_acroym']['settings']['description_display'] = 'before';
  }

    if (isset($data['node-population-title_field'])) {
    $data['node-population-title_field']['label'] = 'Name'; /* WAS: 'Title' */
	$data['node-population-title_field']['description'] = 'Enter the name of the sampling frame'; /* WAS: '' */
	$data['node-population-title_field']['settings']['description_display'] = 'before';
  }

    if (isset($data['node-population-field_pop_country'])) {
	$data['node-population-field_pop_country']['label'] = 'Country of residence at time of recruitment'; /* WAS: 'Country' */
	$data['node-population-field_pop_country']['description'] = 'Select the countries of residence of the study
		participants from the list, selecting all that apply.'; /* WAS: '' */
	$data['node-population-field_pop_country']['settings']['description_display'] = 'before';
  }
  

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