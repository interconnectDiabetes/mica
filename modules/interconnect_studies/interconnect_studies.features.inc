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
 * Implements hook_field_group_info_alter().
 */
function interconnect_studies_field_group_info_alter(&$data) {
  if (isset($data['group_general_info|node|study|form'])) {
    $data['group_general_info|node|study|form']->data['children']['4'] = 'group_marker_paper'; /* WAS: 'field_networks' */
  }
  if (isset($data['group_marker_paper|node|study|form'])) {
    $data['group_marker_paper|node|study|form']->data['format_type'] = 'fieldset'; /* WAS: 'htab' */
    $data['group_marker_paper|node|study|form']->data['label'] = 'Study Reference Paper'; /* WAS: 'Marker Paper' */
    $data['group_marker_paper|node|study|form']->data['weight'] = 4; /* WAS: 12 */
    $data['group_marker_paper|node|study|form']->parent_name = 'group_general_info'; /* WAS: 'group_tabs' */
    unset($data['group_marker_paper|node|study|form']->data['format_settings']);
  }
  if (isset($data['group_methods|node|study|form'])) {
    $data['group_methods|node|study|form']->data['children'] = array(
      0 => 'group_general_design',
      1 => 'group_nb_participants',
    ); /* WAS: '' */
  }
  if (isset($data['group_nb_participants|node|study|form'])) {
    $data['group_nb_participants|node|study|form']->data['children']['3'] = 'group_actual_particip_ic'; /* WAS: '' */
    $data['group_nb_participants|node|study|form']->data['weight'] = 67; /* WAS: 7 */
  }
  if (isset($data['group_study_design|node|study|form'])) {
    $data['group_study_design|node|study|form']->data['children']['10'] = 'field_interv_type_ic'; /* WAS: '' */
    $data['group_study_design|node|study|form']->data['children']['11'] = 'field_other_case_ic'; /* WAS: '' */
    $data['group_study_design|node|study|form']->data['children']['12'] = 'field_trial_number_ic'; /* WAS: '' */
    $data['group_study_design|node|study|form']->data['children']['6'] = 'field_case_definition_ic'; /* WAS: '' */
    $data['group_study_design|node|study|form']->data['children']['7'] = 'field_design_ic'; /* WAS: '' */
    $data['group_study_design|node|study|form']->data['children']['8'] = 'field_design_other_ic'; /* WAS: '' */
    $data['group_study_design|node|study|form']->data['children']['9'] = 'field_interv_other_ic'; /* WAS: '' */
    $data['group_study_design|node|study|form']->data['weight'] = 67; /* WAS: 6 */
    $data['group_study_design|node|study|form']->parent_name = 'group_general_design'; /* WAS: 'group_methods' */
  }
  if (isset($data['group_study_timeline|node|study|form'])) {
    $data['group_study_timeline|node|study|form']->data['children']['2'] = 'field_recruit_end_ic'; /* WAS: '' */
    $data['group_study_timeline|node|study|form']->data['children']['3'] = 'field_recruit_start_ic'; /* WAS: '' */
    $data['group_study_timeline|node|study|form']->data['weight'] = 68; /* WAS: 8 */
    $data['group_study_timeline|node|study|form']->parent_name = 'group_general_design'; /* WAS: 'group_methods' */
  }
}

/**
 * Implements hook_field_default_field_instances_alter().
 */
function interconnect_temp_field_default_field_instances_alter(&$data) {
  if (isset($data['node-population-field_pop_country'])) {
    $data['node-population-field_pop_country']['description'] = 'Select the countries of residence of the study
        		participants from the list, selecting all that apply.'; /* WAS: '' */
    $data['node-population-field_pop_country']['label'] = 'Country of residence at time of recruitment'; /* WAS: 'Country of residence' */
    $data['node-population-field_pop_country']['settings'] = array(
      'description_display' => 'before',
      'user_register_form' => FALSE,
    ); /* WAS: '' */
  }
  if (isset($data['node-study-body'])) {
    $data['node-study-body']['required'] = 0; /* WAS: 1 */
    $data['node-study-body']['widget']['weight'] = 5; /* WAS: 4 */
  }
  if (isset($data['node-study-field_acroym'])) {
    $data['node-study-field_acroym']['description'] = 'If available, enter the study acronym'; /* WAS: 'Acronym of the study if applicable.' */
    $data['node-study-field_acroym']['settings'] = array(
      'description_display' => 'before',
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ); /* WAS: '' */
  }
  if (isset($data['node-study-field_contacts_ref'])) {
    $data['node-study-field_contacts_ref']['description'] = 'Enter the contact details of the person(s) that could provide additional information about the study. More contacts can be added with the "Add another item" button. You will be able to edit these Contacts after saving the Study.'; /* WAS: 'Enter the Contact full name. You will be able to edit these Contacts once the Study will be saved.' */
    $data['node-study-field_contacts_ref']['label'] = 'Contact person(s)'; /* WAS: 'Contacts' */
  }
  if (isset($data['node-study-field_marker_paper'])) {
    $data['node-study-field_marker_paper']['description'] = 'If available, enter a bibliographic citation (i.e. published sources such as journal article, web site, or report) which describes the study design'; /* WAS: 'If applicable, enter a bibliographic citation (i.e. published sources such as journal article, web site, or report)Â which should be used to refer to your study.' */
    $data['node-study-field_marker_paper']['label'] = 'Study reference paper'; /* WAS: 'Marker paper' */
  }
  if (isset($data['node-study-field_pubmedid'])) {
    $data['node-study-field_pubmedid']['If available, enter the paperâ€™s Pubmed ID'] = ''; /* WAS: '' */
  }
  if (isset($data['node-study-field_website'])) {
    $data['node-study-field_website']['description'] = 'If available, enter the study website URL'; /* WAS: '' */
    $data['node-study-field_website']['settings']['description_display'] = 'before'; /* WAS: '' */
    $data['node-study-field_website']['widget']['weight'] = 6; /* WAS: 5 */
  }
  if (isset($data['node-study-title_field'])) {
    $data['node-study-title_field']['description'] = 'Enter the official study name'; /* WAS: 'Official study name' */
    $data['node-study-title_field']['label'] = 'Name of the study'; /* WAS: 'Name' */
  }
}
