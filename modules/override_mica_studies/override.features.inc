<?php
/**
 * @file
 * override.features.inc
 */



/**
 * Implements hook_ctools_plugin_api().
 */
function override_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
  dpm("I got called");
    return array("version" => "1");
  }
}

 
function override_field_default_field_instances_alter(&$data) {
  if (isset($data['node-study-body'])) {
    $data['node-study-body']['required'] = 0; /* WAS: 1 */
  }
}



/**
 * Implements hook_field_default_field_bases_alter().
 */
function override_field_default_field_bases_alter(&$data) {
  if (isset($data['field_access_biosamples'])) {
    $data['field_access_biosamples']['settings']['field_description_infos']['field_description_body'] = 'Specify if requests for access to study biological samples by external researchers or third parties would be considered.'; /* WAS: 'Specify if access to study biological samples by external researchers or third parties is provided or foreseen.' */
    $data['field_access_biosamples']['settings']['profile2_private'] = FALSE; /* WAS: '' */
  }
  if (isset($data['field_access_data'])) {
    $data['field_access_data']['settings']['field_description_infos']['field_description_body'] = 'Specify if requests for access to individual participant data from the study by external researchers or third parties would be considered.
    '; /* WAS: 'Specify if access to study data by external researchers or third parties is provided or foreseen.' */
    $data['field_access_data']['settings']['profile2_private'] = FALSE; /* WAS: '' */
  }
}

/**
 * Implements hook_field_default_field_instances_alter().
 */
function override_field_default_field_instances_alter(&$data) {
  if (isset($data['node-study-body'])) {
    $data['node-study-body']['required'] = 0; /* WAS: 1 */
    $data['node-study-body']['widget']['weight'] = 5; /* WAS: 4 */
  }
  if (isset($data['node-study-field_access_biosamples'])) {
    $data['node-study-field_access_biosamples']['description'] = 'Specify if requests for access to study biological samples by external researchers or third parties would be considered.'; /* WAS: 'Specify if access to study biological samples by external researchers or third parties is provided or foreseen.' */
  }
  if (isset($data['node-study-field_access_data'])) {
    $data['node-study-field_access_data']['description'] = 'Specify if requests for access to individual participant data from the study by external researchers or third parties would be considered.
    '; /* WAS: 'Specify if access to study data by external researchers or third parties is provided or foreseen.' */
  }
  if (isset($data['node-study-field_contacts_ref'])) {
    $data['node-study-field_contacts_ref']['description'] = 'Enter the contact full name to look up an existing contact, or create a new contact by clicking on Create Contact link. Multiple contacts can be added by clicking Add another item.'; /* WAS: 'Enter the Contact full name. You will be able to edit these Contacts once the Study will be saved.' */
    $data['node-study-field_contacts_ref']['widget']['module'] = 'node_reference'; /* WAS: 'noderefcreate' */
    $data['node-study-field_contacts_ref']['widget']['settings'] = array(
      'autocomplete_match' => 'contains',
      'autocomplete_path' => 'node_reference/autocomplete',
      'references_dialog_add' => 1,
      'references_dialog_edit' => 1,
      'references_dialog_search' => 1,
      'references_dialog_search_view' => '',
      'size' => 60,
    ); /* WAS: '' */
    $data['node-study-field_contacts_ref']['widget']['type'] = 'node_reference_autocomplete'; /* WAS: 'noderefcreate_autocomplete' */
  }
  if (isset($data['node-study-field_marker_paper'])) {
    $data['node-study-field_marker_paper']['label'] = 'Study Reference Paper'; /* WAS: 'Marker paper' */
  }
}

/**
 * Implements hook_field_group_info_alter().
 */
function override_field_group_info_alter(&$data) {
  if (isset($data['group_marker_paper|node|study|form'])) {
    $data['group_marker_paper|node|study|form']->data['label'] = 'Study Reference Paper'; /* WAS: 'Marker paper' */
  }
}
