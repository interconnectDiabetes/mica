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
function interconnect_studies_field_default_field_bases_alter(&$data) {
  if (isset($data['title_field'])) {
    $data['title_field']['settings'] = array(
      'field_description_infos' => array(
        'field_description' => 1,
        'field_description_body' => 'Enter the official study',
        'field_description_label' => 'Study name',
        'field_description_value_type' => 'text',
      ),
      'max_length' => 255,
      'profile2_private' => FALSE,
    ); /* WAS: '' */
  }
}
 
/**
 * Implements hook_field_default_field_instances_alter().
 */

function interconnect_studies_field_default_field_instances_alter(&$data) {

  if (isset($data['node-study-body'])) {
    $data['node-study-body']['required'] = 0; /* WAS: 1 */
  }

 // if (isset($data['node-study-field_contacts_ref'])) {
    // $data['node-study-field_contacts_ref']['description'] = 'Enter the contact full name to look up an existing contact, or create a new contact by clicking on Create Contact link. Multiple contacts can be added by clicking Add another item.'; /* WAS: 'Enter the Contact full name. You will be able to edit these Contacts once the Study will be saved.' */
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
  // }
 
  if (isset($data['node-study-field_marker_paper'])) {
    $data['node-study-field_marker_paper']['description'] = 'If available, enter a bibliographic citation (i.e. published sources such as journal article, web site, or report) which describes the study design'; /* WAS: 'If applicable, enter a bibliographic citation (i.e. published sources such as journal article, web site, or report) which should be used to refer to your study.' */
    $data['node-study-field_marker_paper']['label'] = 'Study reference paper'; /* WAS: 'Marker paper' */ 
  }
    if (isset($data['node-study-title_field'])) {
    $data['node-study-title_field']['description'] = 'Enter the official study name'; /* WAS: 'Official study name' */
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
}