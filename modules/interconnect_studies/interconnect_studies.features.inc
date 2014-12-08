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
  if (isset($data['group_general_design|node|study|form'])) {
    $data['group_general_design|node|study|form']->data['children']['0'] = 'field_family_ic'; /* WAS: 'group_nb_participants' */
    $data['group_general_design|node|study|form']->data['children']['1'] = 'field_family_other_ic'; /* WAS: 'group_study_design' */
    $data['group_general_design|node|study|form']->data['children']['2'] = 'group_study_design'; /* WAS: 'group_study_timeline' */
    $data['group_general_design|node|study|form']->data['children']['3'] = 'group_study_timeline'; /* WAS: '' */
  }
  if (isset($data['group_general_info|node|study|form'])) {
    $data['group_general_info|node|study|form']->data['children']['4'] = 'group_marker_paper'; /* WAS: 'field_networks' */
  }
  if (isset($data['group_marker_paper|node|study|form'])) {
    $data['group_marker_paper|node|study|form']->data['format_settings']['formatter'] = 'open'; /* WAS: 'closed' */
    $data['group_marker_paper|node|study|form']->data['format_settings']['label'] = 'Study Reference Paper'; /* WAS: 'Marker Paper' */
    $data['group_marker_paper|node|study|form']->data['format_type'] = 'fieldset'; /* WAS: 'htab' */
    $data['group_marker_paper|node|study|form']->data['label'] = 'Study Reference Paper'; /* WAS: 'Marker Paper' */
    $data['group_marker_paper|node|study|form']->data['weight'] = 4; /* WAS: 12 */
    $data['group_marker_paper|node|study|form']->parent_name = 'group_general_info'; /* WAS: 'group_tabs' */
  }
  if (isset($data['group_methods|node|study|form'])) {
    $data['group_methods|node|study|form']->data['children'] = array(
      0 => 'group_general_design',
      1 => 'group_nb_participants',
    ); /* WAS: '' */
  }
  if (isset($data['group_nb_participants|node|study|form'])) {
    $data['group_nb_participants|node|study|form']->data['children']['3'] = 'group_actual_particip_ic'; /* WAS: '' */
    $data['group_nb_participants|node|study|form']->data['format_settings'] = array(
      'label' => 'Number of participants',
      'formatter' => 'open',
    ); /* WAS: '' */
    $data['group_nb_participants|node|study|form']->data['weight'] = 67; /* WAS: 7 */
  }
  if (isset($data['group_pop_age|node|population|form'])) {
    $data['group_pop_age|node|population|form']->data['weight'] = 7; /* WAS: 6 */
  }
  if (isset($data['group_pop_countries|node|population|form'])) {
    $data['group_pop_countries|node|population|form']->data['children']['2'] = 'field_pop_locality_ic'; /* WAS: '' */
    $data['group_pop_countries|node|population|form']->data['weight'] = 8; /* WAS: 7 */
  }
  if (isset($data['group_pop_participants_number|node|population|form'])) {
    $data['group_pop_participants_number|node|population|form']->data['weight'] = 4; /* WAS: 3 */
  }
  if (isset($data['group_pop_recruitment_procedures|node|population|form'])) {
    $data['group_pop_recruitment_procedures|node|population|form']->data['children']['0'] = 'field_pop_recruitment_other'; /* WAS: 'field_pop_exist_study_part' */
    $data['group_pop_recruitment_procedures|node|population|form']->data['children']['1'] = 'field_pop_specific_pop'; /* WAS: 'field_pop_general_pop_recruit' */
    $data['group_pop_recruitment_procedures|node|population|form']->data['children']['2'] = 'field_pop_specific_pop_other_sp'; /* WAS: 'field_pop_recruit_supp_info' */
    $data['group_pop_recruitment_procedures|node|population|form']->data['children']['3'] = 'field_pop_src_recruit'; /* WAS: 'field_pop_recruitment_other' */
    $data['group_pop_recruitment_procedures|node|population|form']->data['weight'] = 3; /* WAS: 1 */
    unset($data['group_pop_recruitment_procedures|node|population|form']->data['children']['4']);
    unset($data['group_pop_recruitment_procedures|node|population|form']->data['children']['5']);
    unset($data['group_pop_recruitment_procedures|node|population|form']->data['children']['6']);
  }
  if (isset($data['group_pop_selection_criteria|node|population|form'])) {
    $data['group_pop_selection_criteria|node|population|form']->data['children']['10'] = 'group_pop_age'; /* WAS: '' */
    $data['group_pop_selection_criteria|node|population|form']->data['children']['11'] = 'group_pop_countries'; /* WAS: '' */
    $data['group_pop_selection_criteria|node|population|form']->data['children']['6'] = 'field_pop_gender_ic'; /* WAS: 'group_pop_age' */
    $data['group_pop_selection_criteria|node|population|form']->data['children']['7'] = 'field_pop_migration_ic'; /* WAS: 'group_pop_countries' */
    $data['group_pop_selection_criteria|node|population|form']->data['children']['8'] = 'field_pop_newborn_ic'; /* WAS: '' */
    $data['group_pop_selection_criteria|node|population|form']->data['children']['9'] = 'field_pop_pregnancy_ic'; /* WAS: '' */
    $data['group_pop_selection_criteria|node|population|form']->data['format_settings']['instance_settings'] = array(
      'required_fields' => 1,
      'classes' => '',
      'description' => 'Specify the criteria that were used to select participants (i.e. the selection criteria used to inform recruitment, not the characteristics  of the participants actually recruited)',
    ); /* WAS: '' */
    $data['group_pop_selection_criteria|node|population|form']->data['format_settings']['label'] = 'Participant selection criteria'; /* WAS: 'Selection Criteria / Characteristics of the population' */
    $data['group_pop_selection_criteria|node|population|form']->data['label'] = 'Participant selection criteria'; /* WAS: 'Selection Criteria / Characteristics of the population' */
  }
  if (isset($data['group_study_design|node|study|form'])) {
    $data['group_study_design|node|study|form']->data['children']['10'] = 'field_interv_type_ic'; /* WAS: '' */
    $data['group_study_design|node|study|form']->data['children']['11'] = 'field_other_case_ic'; /* WAS: '' */
    $data['group_study_design|node|study|form']->data['children']['12'] = 'field_trial_number_ic'; /* WAS: '' */
    $data['group_study_design|node|study|form']->data['children']['6'] = 'field_case_definition_ic'; /* WAS: '' */
    $data['group_study_design|node|study|form']->data['children']['7'] = 'field_design_ic'; /* WAS: '' */
    $data['group_study_design|node|study|form']->data['children']['8'] = 'field_design_other_ic'; /* WAS: '' */
    $data['group_study_design|node|study|form']->data['children']['9'] = 'field_interv_other_ic'; /* WAS: '' */
    $data['group_study_design|node|study|form']->data['format_settings']['formatter'] = 'open'; /* WAS: 'collapsible' */
    $data['group_study_design|node|study|form']->data['weight'] = 67; /* WAS: 6 */
    $data['group_study_design|node|study|form']->parent_name = 'group_general_design'; /* WAS: 'group_methods' */
  }
  if (isset($data['group_study_timeline|node|study|form'])) {
    $data['group_study_timeline|node|study|form']->data['children']['2'] = 'field_recruit_cont_ic'; /* WAS: '' */
    $data['group_study_timeline|node|study|form']->data['children']['3'] = 'field_recruit_end_ic'; /* WAS: '' */
    $data['group_study_timeline|node|study|form']->data['children']['4'] = 'field_recruit_start_ic'; /* WAS: '' */
    $data['group_study_timeline|node|study|form']->data['format_settings'] = array(
      'label' => 'Study Timeline',
      'formatter' => 'open',
    ); /* WAS: '' */
    $data['group_study_timeline|node|study|form']->data['weight'] = 68; /* WAS: 8 */
    $data['group_study_timeline|node|study|form']->parent_name = 'group_general_design'; /* WAS: 'group_methods' */
  }
  if (isset($data['group_tabs|node|study|form'])) {
    $data['group_tabs|node|study|form']->data['children']['5'] = 'group_methods'; /* WAS: 'group_marker_paper' */
    $data['group_tabs|node|study|form']->data['children']['6'] = 'group_supp_info'; /* WAS: 'group_methods' */
    $data['group_tabs|node|study|form']->data['children']['7'] = 'group_available_info_ic'; /* WAS: 'group_supp_info' */
    $data['group_tabs|node|study|form']->data['children']['8'] = 'group_ethnic_race_ic'; /* WAS: '' */
    $data['group_tabs|node|study|form']->data['children']['9'] = 'group_sample_pop_ic'; /* WAS: '' */
  }
}

/**
 * Implements hook_field_default_field_instances_alter().
 */
function interconnect_studies_field_default_field_instances_alter(&$data) {
  if (isset($data['node-population-field_pop_age_max'])) {
    $data['node-population-field_pop_age_max']['label'] = 'Maximum age at recruitment'; /* WAS: 'Maximum age' */
  }
  if (isset($data['node-population-field_pop_age_min'])) {
    $data['node-population-field_pop_age_min']['label'] = 'Minimum age at recruitment'; /* WAS: 'Minimum age' */
  }
  if (isset($data['node-population-field_pop_country'])) {
    $data['node-population-field_pop_country']['description'] = 'Select the countries of residence of the study participants from the list, selecting all that apply   '; /* WAS: '' */
    $data['node-population-field_pop_country']['label'] = 'Country of residence at time of recruitment'; /* WAS: 'Country of residence' */
    $data['node-population-field_pop_country']['widget']['active'] = 1; /* WAS: 0 */
  }
  if (isset($data['node-population-field_pop_ethnic_origin'])) {
    $data['node-population-field_pop_ethnic_origin']['widget']['weight'] = 15; /* WAS: 9 */
  }
  if (isset($data['node-population-field_pop_exist_study_part'])) {
    $data['node-population-field_pop_exist_study_part']['widget'] = array(
      'active' => 1,
      'module' => 'text',
      'type' => 'text_textfield',
      'weight' => 51,
    ); /* WAS: '' */
  }
  if (isset($data['node-population-field_pop_general_pop_recruit'])) {
    $data['node-population-field_pop_general_pop_recruit']['widget']['weight'] = 50; /* WAS: 40 */
  }
  if (isset($data['node-population-field_pop_health_status'])) {
    $data['node-population-field_pop_health_status']['description'] = 'Please specify'; /* WAS: '' */
    $data['node-population-field_pop_health_status']['label'] = 'Selection on the basis of a specific pre-existing health condition '; /* WAS: 'Health Status' */
    $data['node-population-field_pop_health_status']['widget']['weight'] = 12; /* WAS: 10 */
  }
  if (isset($data['node-population-field_pop_partcipant_sel_supp_in'])) {
    $data['node-population-field_pop_partcipant_sel_supp_in']['widget']['weight'] = 16; /* WAS: 12 */
  }
  if (isset($data['node-population-field_pop_recruit_supp_info'])) {
    $data['node-population-field_pop_recruit_supp_info']['widget']['weight'] = 52; /* WAS: 45 */
  }
  if (isset($data['node-population-field_pop_recruitment_other'])) {
    $data['node-population-field_pop_recruitment_other']['widget']['weight'] = 56; /* WAS: 44 */
  }
  if (isset($data['node-population-field_pop_select_criteria'])) {
    $data['node-population-field_pop_select_criteria']['widget']['weight'] = 13; /* WAS: 8 */
  }
  if (isset($data['node-population-field_pop_specific_pop'])) {
    $data['node-population-field_pop_specific_pop']['widget']['weight'] = 54; /* WAS: 42 */
  }
  if (isset($data['node-population-field_pop_specific_pop_other_sp'])) {
    $data['node-population-field_pop_specific_pop_other_sp']['widget']['weight'] = 55; /* WAS: 43 */
  }
  if (isset($data['node-population-field_pop_src_recruit'])) {
    $data['node-population-field_pop_src_recruit']['description'] = 'Specify the sources of recruitment'; /* WAS: '' */
    $data['node-population-field_pop_src_recruit']['widget']['weight'] = 53; /* WAS: 39 */
  }
  if (isset($data['node-population-title_field'])) {
    $data['node-population-title_field']['default_value']['0'] = array(
      'value' => 'Population',
    ); /* WAS: '' */
    $data['node-population-title_field']['display_label'] = ''; /* WAS: '' */
    $data['node-population-title_field']['required'] = 1; /* WAS: TRUE */
    $data['node-population-title_field']['widget'] = array(
      'active' => 1,
      'module' => 'text',
      'type' => 'text_textfield',
      'weight' => 0,
    ); /* WAS: '' */
  }
  if (isset($data['node-study-body'])) {
    $data['node-study-body']['required'] = 0; /* WAS: 1 */
    $data['node-study-body']['widget']['weight'] = 5; /* WAS: 4 */
  }
  if (isset($data['node-study-field_acroym'])) {
    $data['node-study-field_acroym']['description'] = 'If applicable, enter study acronym'; /* WAS: 'Acronym of the study if applicable.' */
  }
  if (isset($data['node-study-field_contacts_ref'])) {
    $data['node-study-field_contacts_ref']['description'] = 'Enter the name of the person(s) who could provide additional information about the study. You will be able to edit the contact details after saving the study.'; /* WAS: 'Enter the Contact full name. You will be able to edit these Contacts once the Study will be saved.' */
  }
  if (isset($data['node-study-field_marker_paper'])) {
    $data['node-study-field_marker_paper']['label'] = 'Study Reference Paper'; /* WAS: 'Marker paper' */
  }
  if (isset($data['node-study-field_pubmedid'])) {
    $data['node-study-field_pubmedid']['description'] = 'If available, enter marker paper’s Pubmed ID.  '; /* WAS: 'If applicable, enter marker paper’s Pubmed ID.  ' */
  }
  if (isset($data['node-study-field_website'])) {
    $data['node-study-field_website']['description'] = 'Enter study website URL'; /* WAS: '' */
    $data['node-study-field_website']['widget']['weight'] = 6; /* WAS: 5 */
  }
}
