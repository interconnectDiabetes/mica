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
  if (isset($data['field_target_number_participants'])) {
    $data['field_target_number_participants']['settings']['field_description_infos']['field_description_body'] = 'Number of participants planned to be recruited.'; /* WAS: 'Number of participants planned to be recruited. If the study is completed, enter the final number of participants.' */
    $data['field_target_number_participants']['settings']['profile2_private'] = FALSE; /* WAS: '' */
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
    $data['group_general_design|node|study|form']->data['format_settings']['instance_settings'] = array(
      'required_fields' => 1,
      'classes' => 'group-main-ic',
      'description' => '',
    ); /* WAS: '' */
    $data['group_general_design|node|study|form']->data['format_settings']['label'] = 'General Design'; /* WAS: '' */
  }
  if (isset($data['group_general_info|node|study|form'])) {
    $data['group_general_info|node|study|form']->data['children']['4'] = 'field_study_info_public'; /* WAS: 'field_networks' */
    $data['group_general_info|node|study|form']->data['children']['5'] = 'group_marker_paper'; /* WAS: 'group_study_name' */
    $data['group_general_info|node|study|form']->data['children']['6'] = 'group_study_name'; /* WAS: '' */
  }
  if (isset($data['group_marker_paper|node|study|form'])) {
    $data['group_marker_paper|node|study|form']->data['format_settings']['formatter'] = 'open'; /* WAS: 'closed' */
    $data['group_marker_paper|node|study|form']->data['format_settings']['label'] = 'Study Reference Paper'; /* WAS: 'Marker Paper' */
    $data['group_marker_paper|node|study|form']->data['format_type'] = 'fieldset'; /* WAS: 'htab' */
    $data['group_marker_paper|node|study|form']->data['label'] = 'Study Reference Paper'; /* WAS: 'Marker Paper' */
    $data['group_marker_paper|node|study|form']->data['weight'] = 175; /* WAS: 12 */
    $data['group_marker_paper|node|study|form']->parent_name = 'group_general_info'; /* WAS: 'group_tabs' */
  }
  if (isset($data['group_methods|node|study|form'])) {
    $data['group_methods|node|study|form']->data['children'] = array(
      0 => 'group_general_design',
      1 => 'group_nb_participants',
    ); /* WAS: '' */
  }
  if (isset($data['group_nb_participants|node|study|form'])) {
    $data['group_nb_participants|node|study|form']->data['children']['1'] = 'group_actual_particip_ic'; /* WAS: 'group_target_nb_participants' */
    $data['group_nb_participants|node|study|form']->data['children']['2'] = 'group_target_nb_participants'; /* WAS: 'group_target_nb_samples' */
    $data['group_nb_participants|node|study|form']->data['children']['3'] = 'group_target_nb_samples'; /* WAS: '' */
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
    $data['group_pop_recruitment_procedures|node|population|form']->data['format_settings']['formatter'] = 'open'; /* WAS: 'collapsible' */
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
    $data['group_pop_selection_criteria|node|population|form']->data['format_settings']['formatter'] = 'open'; /* WAS: 'collapsible' */
    $data['group_pop_selection_criteria|node|population|form']->data['format_settings']['instance_settings'] = array(
      'required_fields' => 1,
      'classes' => 'group-main-ic',
      'description' => 'Specify the criteria that were used to select participants (i.e. the selection criteria used to inform recruitment, not the characteristics  of the participants actually recruited)
                                                                                                                                                                                                                                                                                                                                    <br>
                                                                                                                                                                                                                                                                                                                                    <br>',
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
    $data['group_tabs|node|study|form']->data['children']['1'] = 'group_available_info_ic'; /* WAS: 'group_access' */
    $data['group_tabs|node|study|form']->data['children']['2'] = 'group_ethnic_race_ic'; /* WAS: 'group_authorization' */
    $data['group_tabs|node|study|form']->data['children']['3'] = 'group_sample_pop_ic'; /* WAS: 'group_documents' */
    $data['group_tabs|node|study|form']->data['children']['4'] = 'group_access'; /* WAS: 'group_general_info' */
    $data['group_tabs|node|study|form']->data['children']['5'] = 'group_authorization'; /* WAS: 'group_marker_paper' */
    $data['group_tabs|node|study|form']->data['children']['6'] = 'group_documents'; /* WAS: 'group_methods' */
    $data['group_tabs|node|study|form']->data['children']['7'] = 'group_general_info'; /* WAS: 'group_supp_info' */
    $data['group_tabs|node|study|form']->data['children']['8'] = 'group_methods'; /* WAS: '' */
    $data['group_tabs|node|study|form']->data['children']['9'] = 'group_supp_info'; /* WAS: '' */
  }
  if (isset($data['group_target_nb_participants|node|study|form'])) {
    $data['group_target_nb_participants|node|study|form']->data['weight'] = 10; /* WAS: 8 */
  }
  if (isset($data['group_target_nb_samples|node|study|form'])) {
    $data['group_target_nb_samples|node|study|form']->data['weight'] = 11; /* WAS: 9 */
  }
}

/**
 * Implements hook_field_default_field_instances_alter().
 */
function interconnect_studies_field_default_field_instances_alter(&$data) {
  if (isset($data['node-contact-field_contact_country'])) {
    $data['node-contact-field_contact_country']['display']['diff_standard'] = array(
      'label' => 'above',
      'module' => 'list',
      'settings' => array(),
      'type' => 'list_default',
      'weight' => 0,
    ); /* WAS: '' */
  }
  if (isset($data['node-contact-field_contact_email'])) {
    $data['node-contact-field_contact_email']['display']['diff_standard'] = array(
      'label' => 'above',
      'module' => 'email',
      'settings' => array(),
      'type' => 'email_default',
      'weight' => 0,
    ); /* WAS: '' */
  }
  if (isset($data['node-contact-field_contact_name'])) {
    $data['node-contact-field_contact_name']['display']['diff_standard'] = array(
      'label' => 'above',
      'module' => 'name',
      'settings' => array(
        'format' => 'default',
        'markup' => 0,
        'multiple' => 'default',
        'multiple_and' => 'text',
        'multiple_delimiter' => ', ',
        'multiple_delimiter_precedes_last' => 'never',
        'multiple_el_al_first' => 1,
        'multiple_el_al_min' => 3,
        'output' => 'default',
      ),
      'type' => 'name_formatter',
      'weight' => 0,
    ); /* WAS: '' */
  }
  if (isset($data['node-population-field_pop_age_max'])) {
    $data['node-population-field_pop_age_max']['display']['diff_standard'] = array(
      'label' => 'above',
      'module' => 'number',
      'type' => 'number_integer',
      'weight' => 0,
    ); /* WAS: '' */
  }
  if (isset($data['node-population-field_pop_age_min'])) {
    $data['node-population-field_pop_age_min']['display'] = array(); /* WAS: '' */
  }
  if (isset($data['node-population-field_pop_country'])) {
    $data['node-population-field_pop_country']['display'] = array(); /* WAS: '' */
  }
  if (isset($data['node-population-field_pop_dce'])) {
    $data['node-population-field_pop_dce']['display']['diff_standard'] = array(
      'label' => 'above',
      'module' => 'node_reference',
      'settings' => array(
        'node_reference_view_mode' => 'full',
      ),
      'type' => 'node_reference_node',
      'weight' => 0,
    ); /* WAS: '' */
  }
  if (isset($data['node-population-field_pop_health_status'])) {
    $data['node-population-field_pop_health_status']['display'] = array(); /* WAS: '' */
  }
  if (isset($data['node-study-body'])) {
    $data['node-study-body']['required'] = 0; /* WAS: 1 */
    $data['node-study-body']['settings'] = array(
      'description_display' => 'after',
      'display_summary' => 1,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ); /* WAS: '' */
  }
  if (isset($data['node-study-field_access_biosamples'])) {
    $data['node-study-field_access_biosamples']['display']['diff_standard'] = array(
      'label' => 'above',
      'module' => 'list',
      'settings' => array(),
      'type' => 'list_default',
      'weight' => 28,
    ); /* WAS: '' */
  }
  if (isset($data['node-study-field_access_data'])) {
    $data['node-study-field_access_data']['display']['diff_standard'] = array(
      'label' => 'above',
      'module' => 'list',
      'settings' => array(),
      'type' => 'list_default',
      'weight' => 26,
    ); /* WAS: '' */
  }
  if (isset($data['node-study-field_access_other'])) {
    $data['node-study-field_access_other']['display']['diff_standard'] = array(
      'label' => 'above',
      'module' => 'list',
      'settings' => array(),
      'type' => 'list_default',
      'weight' => 29,
    ); /* WAS: '' */
  }
  if (isset($data['node-study-field_access_other_sp'])) {
    $data['node-study-field_access_other_sp']['display']['diff_standard'] = array(
      'label' => 'above',
      'module' => 'text',
      'settings' => array(),
      'type' => 'text_default',
      'weight' => 30,
    ); /* WAS: '' */
  }
  if (isset($data['node-study-field_acroym'])) {
    $data['node-study-field_acroym']['display']['diff_standard'] = array(
      'label' => 'inline',
      'module' => 'text',
      'settings' => array(),
      'type' => 'text_default',
      'weight' => 32,
    ); /* WAS: '' */
  }
  if (isset($data['node-study-field_authorising_date_m'])) {
    $data['node-study-field_authorising_date_m']['display']['diff_standard'] = array(
      'label' => 'above',
      'module' => 'date',
      'type' => 'date_default',
      'weight' => 11,
    ); /* WAS: '' */
  }
  if (isset($data['node-study-field_authorising_person_name'])) {
    $data['node-study-field_authorising_person_name']['display']['diff_standard'] = array(
      'label' => 'above',
      'module' => 'text',
      'settings' => array(),
      'type' => 'text_default',
      'weight' => 7,
    ); /* WAS: '' */
  }
  if (isset($data['node-study-field_authorising_person_name_m'])) {
    $data['node-study-field_authorising_person_name_m']['display']['diff_standard'] = array(
      'label' => 'above',
      'module' => 'text',
      'settings' => array(),
      'type' => 'text_default',
      'weight' => 10,
    ); /* WAS: '' */
  }
  if (isset($data['node-study-field_authorization_maelstrom'])) {
    $data['node-study-field_authorization_maelstrom']['display']['diff_standard'] = array(
      'label' => 'above',
      'module' => 'list',
      'settings' => array(),
      'type' => 'list_default',
      'weight' => 9,
    ); /* WAS: '' */
  }
  if (isset($data['node-study-field_authorization_specific'])) {
    $data['node-study-field_authorization_specific']['display']['diff_standard'] = array(
      'label' => 'above',
      'module' => 'list',
      'settings' => array(),
      'type' => 'list_default',
      'weight' => 36,
    ); /* WAS: '' */
  }
  if (isset($data['node-study-field_contacts_ref'])) {
    $data['node-study-field_contacts_ref']['display']['diff_standard'] = array(
      'label' => 'above',
      'module' => 'node_reference',
      'type' => 'node_reference_node',
      'weight' => 34,
    ); /* WAS: '' */
  }
  if (isset($data['node-study-field_design'])) {
    $data['node-study-field_design']['display']['diff_standard'] = array(
      'label' => 'above',
      'module' => 'list',
      'settings' => array(),
      'type' => 'list_default',
      'weight' => 12,
    ); /* WAS: '' */
  }
  if (isset($data['node-study-field_design_other_sp'])) {
    $data['node-study-field_design_other_sp']['display']['diff_standard'] = array(
      'label' => 'above',
      'module' => 'text',
      'settings' => array(),
      'type' => 'text_default',
      'weight' => 13,
    ); /* WAS: '' */
  }
  if (isset($data['node-study-field_documents'])) {
    $data['node-study-field_documents']['display']['diff_standard'] = array(
      'label' => 'above',
      'module' => 'file',
      'settings' => array(),
      'type' => 'file_url_plain',
      'weight' => 25,
    ); /* WAS: '' */
  }
  if (isset($data['node-study-field_info_design_follow_up'])) {
    $data['node-study-field_info_design_follow_up']['display']['diff_standard'] = array(
      'label' => 'above',
      'module' => 'text',
      'settings' => array(),
      'type' => 'text_default',
      'weight' => 23,
    ); /* WAS: '' */
  }
  if (isset($data['node-study-field_investigators'])) {
    $data['node-study-field_investigators']['display']['diff_standard'] = array(
      'label' => 'above',
      'module' => 'node_reference',
      'type' => 'node_reference_node',
      'weight' => 33,
    ); /* WAS: '' */
  }
  if (isset($data['node-study-field_marker_paper'])) {
    $data['node-study-field_marker_paper']['display']['diff_standard'] = array(
      'label' => 'above',
      'module' => 'text',
      'settings' => array(),
      'type' => 'text_default',
      'weight' => 4,
    ); /* WAS: '' */
  }
  if (isset($data['node-study-field_no_limits_participants'])) {
    $data['node-study-field_no_limits_participants']['display']['diff_standard'] = array(
      'label' => 'above',
      'module' => 'list',
      'settings' => array(),
      'type' => 'list_default',
      'weight' => 18,
    ); /* WAS: '' */
  }
  if (isset($data['node-study-field_no_limits_samples'])) {
    $data['node-study-field_no_limits_samples']['display']['diff_standard'] = array(
      'label' => 'above',
      'module' => 'list',
      'settings' => array(),
      'type' => 'list_default',
      'weight' => 21,
    ); /* WAS: '' */
  }
  if (isset($data['node-study-field_pubmedid'])) {
    $data['node-study-field_pubmedid']['display']['diff_standard'] = array(
      'label' => 'above',
      'module' => 'text',
      'settings' => array(),
      'type' => 'text_default',
      'weight' => 24,
    ); /* WAS: '' */
  }
  if (isset($data['node-study-field_recruitment_other_sp'])) {
    $data['node-study-field_recruitment_other_sp']['display']['diff_standard'] = array(
      'label' => 'above',
      'module' => 'text',
      'settings' => array(),
      'type' => 'text_default',
      'weight' => 15,
    ); /* WAS: '' */
  }
  if (isset($data['node-study-field_recruitment_supp_info'])) {
    $data['node-study-field_recruitment_supp_info']['display']['diff_standard'] = array(
      'label' => 'above',
      'module' => 'text',
      'settings' => array(),
      'type' => 'text_default',
      'weight' => 16,
    ); /* WAS: '' */
  }
  if (isset($data['node-study-field_study_end_year'])) {
    $data['node-study-field_study_end_year']['display']['diff_standard'] = array(
      'label' => 'above',
      'module' => 'number',
      'type' => 'number_integer',
      'weight' => 3,
    ); /* WAS: '' */
  }
  if (isset($data['node-study-field_study_populations'])) {
    $data['node-study-field_study_populations']['display']['diff_standard'] = array(
      'label' => 'above',
      'module' => 'node_reference',
      'type' => 'node_reference_node',
      'weight' => 22,
    ); /* WAS: '' */
  }
  if (isset($data['node-study-field_study_study_variable_att'])) {
    $data['node-study-field_study_study_variable_att']['display']['diff_standard'] = array(
      'label' => 'hidden',
      'module' => 'mica_core',
      'settings' => array(),
      'type' => 'node_reference_url_or_plain',
      'weight' => 39,
    ); /* WAS: '' */
  }
  if (isset($data['node-study-field_supp_infos'])) {
    $data['node-study-field_supp_infos']['display']['diff_standard'] = array(
      'label' => 'hidden',
      'module' => 'text',
      'settings' => array(),
      'type' => 'text_default',
      'weight' => 31,
    ); /* WAS: '' */
  }
  if (isset($data['node-study-field_target_nb_supp_info'])) {
    $data['node-study-field_target_nb_supp_info']['display']['diff_standard'] = array(
      'label' => 'hidden',
      'module' => 'text',
      'settings' => array(),
      'type' => 'text_default',
      'weight' => 20,
    ); /* WAS: '' */
  }
  if (isset($data['node-study-field_target_number_biosamples'])) {
    $data['node-study-field_target_number_biosamples']['display']['diff_standard'] = array(
      'label' => 'above',
      'module' => 'number',
      'type' => 'number_integer',
      'weight' => 19,
    ); /* WAS: '' */
  }
  if (isset($data['node-study-field_target_number_participants'])) {
    $data['node-study-field_target_number_participants']['display']['diff_standard'] = array(
      'label' => 'above',
      'module' => 'number',
      'type' => 'number_integer',
      'weight' => 17,
    ); /* WAS: '' */
  }
  if (isset($data['node-study-field_website'])) {
    $data['node-study-field_website']['display']['diff_standard'] = array(
      'label' => 'above',
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_default',
      'weight' => 35,
    ); /* WAS: '' */
    $data['node-study-field_website']['settings']['attributes']['target'] = 'default'; /* WAS: '_blank' */
    $data['node-study-field_website']['settings']['description_display'] = 'before'; /* WAS: '' */
    $data['node-study-field_website']['settings']['enable_tokens'] = 1; /* WAS: 0 */
    $data['node-study-field_website']['settings']['text_processing'] = 0; /* WAS: '' */
    $data['node-study-field_website']['settings']['title'] = 'optional'; /* WAS: 'none' */
    unset($data['node-study-field_website']['settings']['attributes']['configurable_title']);
    unset($data['node-study-field_website']['settings']['attributes']['title']);
  }
  if (isset($data['node-study-title_field'])) {
    $data['node-study-title_field']['display']['diff_standard'] = array(
      'label' => 'above',
      'module' => 'text',
      'settings' => array(),
      'type' => 'text_default',
      'weight' => 27,
    ); /* WAS: '' */
  }
}
