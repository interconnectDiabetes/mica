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
  $overrides["field_base.field_target_number_participants.settings|field_description_infos|field_description_body"] = 'Number of participants planned to be recruited.';
  $overrides["field_base.field_target_number_participants.settings|profile2_private"] = FALSE;

  // Exported overrides for: field_group
  $overrides["field_group.group_general_design|node|study|form.data|children|0"] = 'field_family_ic';
  $overrides["field_group.group_general_design|node|study|form.data|children|1"] = 'field_family_other_ic';
  $overrides["field_group.group_general_design|node|study|form.data|children|2"] = 'group_study_design';
  $overrides["field_group.group_general_design|node|study|form.data|children|3"] = 'group_study_timeline';
  $overrides["field_group.group_general_design|node|study|form.data|format_settings|instance_settings"] = array(
    'required_fields' => 1,
    'classes' => 'group-main-ic',
    'description' => '',
  );
  $overrides["field_group.group_general_design|node|study|form.data|format_settings|label"] = 'General Design';
  $overrides["field_group.group_general_info|node|study|form.data|children|4"] = 'field_study_info_public';
  $overrides["field_group.group_general_info|node|study|form.data|children|5"] = 'group_marker_paper';
  $overrides["field_group.group_general_info|node|study|form.data|children|6"] = 'group_study_name';
  $overrides["field_group.group_marker_paper|node|study|form.data|format_settings|formatter"] = 'open';
  $overrides["field_group.group_marker_paper|node|study|form.data|format_settings|label"] = 'Study Reference Paper';
  $overrides["field_group.group_marker_paper|node|study|form.data|format_type"] = 'fieldset';
  $overrides["field_group.group_marker_paper|node|study|form.data|label"] = 'Study Reference Paper';
  $overrides["field_group.group_marker_paper|node|study|form.data|weight"] = 175;
  $overrides["field_group.group_marker_paper|node|study|form.parent_name"] = 'group_general_info';
  $overrides["field_group.group_methods|node|study|form.data|children"] = array(
    0 => 'group_general_design',
    1 => 'group_nb_participants',
  );
  $overrides["field_group.group_nb_participants|node|study|form.data|children|1"] = 'group_actual_particip_ic';
  $overrides["field_group.group_nb_participants|node|study|form.data|children|2"] = 'group_target_nb_participants';
  $overrides["field_group.group_nb_participants|node|study|form.data|children|3"] = 'group_target_nb_samples';
  $overrides["field_group.group_nb_participants|node|study|form.data|format_settings"] = array(
    'label' => 'Number of participants',
    'formatter' => 'open',
  );
  $overrides["field_group.group_nb_participants|node|study|form.data|weight"] = 67;
  $overrides["field_group.group_pop_age|node|population|form.data|weight"] = 7;
  $overrides["field_group.group_pop_countries|node|population|form.data|children|2"] = 'field_pop_locality_ic';
  $overrides["field_group.group_pop_countries|node|population|form.data|weight"] = 8;
  $overrides["field_group.group_pop_participants_number|node|population|form.data|weight"] = 4;
  $overrides["field_group.group_pop_recruitment_procedures|node|population|form.data|children|0"] = 'field_pop_recruitment_other';
  $overrides["field_group.group_pop_recruitment_procedures|node|population|form.data|children|1"] = 'field_pop_specific_pop';
  $overrides["field_group.group_pop_recruitment_procedures|node|population|form.data|children|2"] = 'field_pop_specific_pop_other_sp';
  $overrides["field_group.group_pop_recruitment_procedures|node|population|form.data|children|3"] = 'field_pop_src_recruit';
  $overrides["field_group.group_pop_recruitment_procedures|node|population|form.data|children|4"]["DELETED"] = TRUE;
  $overrides["field_group.group_pop_recruitment_procedures|node|population|form.data|children|5"]["DELETED"] = TRUE;
  $overrides["field_group.group_pop_recruitment_procedures|node|population|form.data|children|6"]["DELETED"] = TRUE;
  $overrides["field_group.group_pop_recruitment_procedures|node|population|form.data|format_settings|formatter"] = 'open';
  $overrides["field_group.group_pop_recruitment_procedures|node|population|form.data|weight"] = 3;
  $overrides["field_group.group_pop_selection_criteria|node|population|form.data|children|10"] = 'group_pop_age';
  $overrides["field_group.group_pop_selection_criteria|node|population|form.data|children|11"] = 'group_pop_countries';
  $overrides["field_group.group_pop_selection_criteria|node|population|form.data|children|6"] = 'field_pop_gender_ic';
  $overrides["field_group.group_pop_selection_criteria|node|population|form.data|children|7"] = 'field_pop_migration_ic';
  $overrides["field_group.group_pop_selection_criteria|node|population|form.data|children|8"] = 'field_pop_newborn_ic';
  $overrides["field_group.group_pop_selection_criteria|node|population|form.data|children|9"] = 'field_pop_pregnancy_ic';
  $overrides["field_group.group_pop_selection_criteria|node|population|form.data|format_settings|formatter"] = 'open';
  $overrides["field_group.group_pop_selection_criteria|node|population|form.data|format_settings|instance_settings"] = array(
    'required_fields' => 1,
    'classes' => 'group-main-ic',
    'description' => 'Specify the criteria that were used to select participants (i.e. the selection criteria used to inform recruitment, not the characteristics  of the participants actually recruited)
                                                                                                                                                                                                                                                                                                                                                    <br>
                                                                                                                                                                                                                                                                                                                                                    <br>',
  );
  $overrides["field_group.group_pop_selection_criteria|node|population|form.data|format_settings|label"] = 'Participant selection criteria';
  $overrides["field_group.group_pop_selection_criteria|node|population|form.data|label"] = 'Participant selection criteria';
  $overrides["field_group.group_study_design|node|study|form.data|children|10"] = 'field_interv_type_ic';
  $overrides["field_group.group_study_design|node|study|form.data|children|11"] = 'field_other_case_ic';
  $overrides["field_group.group_study_design|node|study|form.data|children|12"] = 'field_trial_number_ic';
  $overrides["field_group.group_study_design|node|study|form.data|children|6"] = 'field_case_definition_ic';
  $overrides["field_group.group_study_design|node|study|form.data|children|7"] = 'field_design_ic';
  $overrides["field_group.group_study_design|node|study|form.data|children|8"] = 'field_design_other_ic';
  $overrides["field_group.group_study_design|node|study|form.data|children|9"] = 'field_interv_other_ic';
  $overrides["field_group.group_study_design|node|study|form.data|format_settings|formatter"] = 'open';
  $overrides["field_group.group_study_design|node|study|form.data|weight"] = 67;
  $overrides["field_group.group_study_design|node|study|form.parent_name"] = 'group_general_design';
  $overrides["field_group.group_study_timeline|node|study|form.data|children|2"] = 'field_recruit_cont_ic';
  $overrides["field_group.group_study_timeline|node|study|form.data|children|3"] = 'field_recruit_end_ic';
  $overrides["field_group.group_study_timeline|node|study|form.data|children|4"] = 'field_recruit_start_ic';
  $overrides["field_group.group_study_timeline|node|study|form.data|format_settings"] = array(
    'label' => 'Study Timeline',
    'formatter' => 'open',
  );
  $overrides["field_group.group_study_timeline|node|study|form.data|weight"] = 68;
  $overrides["field_group.group_study_timeline|node|study|form.parent_name"] = 'group_general_design';
  $overrides["field_group.group_tabs|node|study|form.data|children|1"] = 'group_available_info_ic';
  $overrides["field_group.group_tabs|node|study|form.data|children|2"] = 'group_ethnic_race_ic';
  $overrides["field_group.group_tabs|node|study|form.data|children|3"] = 'group_sample_pop_ic';
  $overrides["field_group.group_tabs|node|study|form.data|children|4"] = 'group_access';
  $overrides["field_group.group_tabs|node|study|form.data|children|5"] = 'group_authorization';
  $overrides["field_group.group_tabs|node|study|form.data|children|6"] = 'group_documents';
  $overrides["field_group.group_tabs|node|study|form.data|children|7"] = 'group_general_info';
  $overrides["field_group.group_tabs|node|study|form.data|children|8"] = 'group_methods';
  $overrides["field_group.group_tabs|node|study|form.data|children|9"] = 'group_supp_info';
  $overrides["field_group.group_target_nb_participants|node|study|form.data|weight"] = 10;
  $overrides["field_group.group_target_nb_samples|node|study|form.data|weight"] = 11;

  // Exported overrides for: field_instance
  $overrides["field_instance.node-contact-field_contact_country.display|diff_standard"] = array(
    'label' => 'above',
    'module' => 'list',
    'settings' => array(),
    'type' => 'list_default',
    'weight' => 0,
  );
  $overrides["field_instance.node-contact-field_contact_email.display|diff_standard"] = array(
    'label' => 'above',
    'module' => 'email',
    'settings' => array(),
    'type' => 'email_default',
    'weight' => 0,
  );
  $overrides["field_instance.node-contact-field_contact_name.display|diff_standard"] = array(
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
  );
  $overrides["field_instance.node-population-field_pop_age_max.display|diff_standard"] = array(
    'label' => 'above',
    'module' => 'number',
    'type' => 'number_integer',
    'weight' => 0,
  );
  $overrides["field_instance.node-population-field_pop_age_min.display"] = array();
  $overrides["field_instance.node-population-field_pop_age_min.settings"] = array(
    'description_display' => 'after',
    'max' => 110,
    'min' => 0,
    'prefix' => '',
    'suffix' => 'years',
    'user_register_form' => FALSE,
  );
  $overrides["field_instance.node-population-field_pop_country.display"] = array();
  $overrides["field_instance.node-population-field_pop_dce.display|diff_standard"] = array(
    'label' => 'above',
    'module' => 'node_reference',
    'settings' => array(
      'node_reference_view_mode' => 'full',
    ),
    'type' => 'node_reference_node',
    'weight' => 0,
  );
  $overrides["field_instance.node-population-field_pop_health_status.display"] = array();
  $overrides["field_instance.node-study-body.required"] = 0;
  $overrides["field_instance.node-study-body.settings"] = array(
    'description_display' => 'after',
    'display_summary' => 1,
    'text_processing' => 1,
    'user_register_form' => FALSE,
  );
  $overrides["field_instance.node-study-field_access_biosamples.display|diff_standard"] = array(
    'label' => 'above',
    'module' => 'list',
    'settings' => array(),
    'type' => 'list_default',
    'weight' => 28,
  );
  $overrides["field_instance.node-study-field_access_data.display|diff_standard"] = array(
    'label' => 'above',
    'module' => 'list',
    'settings' => array(),
    'type' => 'list_default',
    'weight' => 26,
  );
  $overrides["field_instance.node-study-field_access_other.display|diff_standard"] = array(
    'label' => 'above',
    'module' => 'list',
    'settings' => array(),
    'type' => 'list_default',
    'weight' => 29,
  );
  $overrides["field_instance.node-study-field_access_other_sp.display|diff_standard"] = array(
    'label' => 'above',
    'module' => 'text',
    'settings' => array(),
    'type' => 'text_default',
    'weight' => 30,
  );
  $overrides["field_instance.node-study-field_acroym.display|diff_standard"] = array(
    'label' => 'inline',
    'module' => 'text',
    'settings' => array(),
    'type' => 'text_default',
    'weight' => 32,
  );
  $overrides["field_instance.node-study-field_authorising_date_m.display|diff_standard"] = array(
    'label' => 'above',
    'module' => 'date',
    'type' => 'date_default',
    'weight' => 11,
  );
  $overrides["field_instance.node-study-field_authorising_person_name.display|diff_standard"] = array(
    'label' => 'above',
    'module' => 'text',
    'settings' => array(),
    'type' => 'text_default',
    'weight' => 7,
  );
  $overrides["field_instance.node-study-field_authorising_person_name_m.display|diff_standard"] = array(
    'label' => 'above',
    'module' => 'text',
    'settings' => array(),
    'type' => 'text_default',
    'weight' => 10,
  );
  $overrides["field_instance.node-study-field_authorization_maelstrom.display|diff_standard"] = array(
    'label' => 'above',
    'module' => 'list',
    'settings' => array(),
    'type' => 'list_default',
    'weight' => 9,
  );
  $overrides["field_instance.node-study-field_authorization_specific.display|diff_standard"] = array(
    'label' => 'above',
    'module' => 'list',
    'settings' => array(),
    'type' => 'list_default',
    'weight' => 36,
  );
  $overrides["field_instance.node-study-field_contacts_ref.display|diff_standard"] = array(
    'label' => 'above',
    'module' => 'node_reference',
    'type' => 'node_reference_node',
    'weight' => 34,
  );
  $overrides["field_instance.node-study-field_design.display|diff_standard"] = array(
    'label' => 'above',
    'module' => 'list',
    'settings' => array(),
    'type' => 'list_default',
    'weight' => 12,
  );
  $overrides["field_instance.node-study-field_design_other_sp.display|diff_standard"] = array(
    'label' => 'above',
    'module' => 'text',
    'settings' => array(),
    'type' => 'text_default',
    'weight' => 13,
  );
  $overrides["field_instance.node-study-field_documents.display|diff_standard"] = array(
    'label' => 'above',
    'module' => 'file',
    'settings' => array(),
    'type' => 'file_url_plain',
    'weight' => 25,
  );
  $overrides["field_instance.node-study-field_info_design_follow_up.display|diff_standard"] = array(
    'label' => 'above',
    'module' => 'text',
    'settings' => array(),
    'type' => 'text_default',
    'weight' => 23,
  );
  $overrides["field_instance.node-study-field_investigators.display|diff_standard"] = array(
    'label' => 'above',
    'module' => 'node_reference',
    'type' => 'node_reference_node',
    'weight' => 33,
  );
  $overrides["field_instance.node-study-field_marker_paper.display|diff_standard"] = array(
    'label' => 'above',
    'module' => 'text',
    'settings' => array(),
    'type' => 'text_default',
    'weight' => 4,
  );
  $overrides["field_instance.node-study-field_no_limits_participants.display|diff_standard"] = array(
    'label' => 'above',
    'module' => 'list',
    'settings' => array(),
    'type' => 'list_default',
    'weight' => 18,
  );
  $overrides["field_instance.node-study-field_no_limits_samples.display|diff_standard"] = array(
    'label' => 'above',
    'module' => 'list',
    'settings' => array(),
    'type' => 'list_default',
    'weight' => 21,
  );
  $overrides["field_instance.node-study-field_pubmedid.display|diff_standard"] = array(
    'label' => 'above',
    'module' => 'text',
    'settings' => array(),
    'type' => 'text_default',
    'weight' => 24,
  );
  $overrides["field_instance.node-study-field_recruitment_other_sp.display|diff_standard"] = array(
    'label' => 'above',
    'module' => 'text',
    'settings' => array(),
    'type' => 'text_default',
    'weight' => 15,
  );
  $overrides["field_instance.node-study-field_recruitment_supp_info.display|diff_standard"] = array(
    'label' => 'above',
    'module' => 'text',
    'settings' => array(),
    'type' => 'text_default',
    'weight' => 16,
  );
  $overrides["field_instance.node-study-field_study_end_year.display|diff_standard"] = array(
    'label' => 'above',
    'module' => 'number',
    'type' => 'number_integer',
    'weight' => 3,
  );
  $overrides["field_instance.node-study-field_study_populations.display|diff_standard"] = array(
    'label' => 'above',
    'module' => 'node_reference',
    'type' => 'node_reference_node',
    'weight' => 22,
  );
  $overrides["field_instance.node-study-field_study_study_variable_att.display|diff_standard"] = array(
    'label' => 'hidden',
    'module' => 'mica_core',
    'settings' => array(),
    'type' => 'node_reference_url_or_plain',
    'weight' => 39,
  );
  $overrides["field_instance.node-study-field_supp_infos.display|diff_standard"] = array(
    'label' => 'hidden',
    'module' => 'text',
    'settings' => array(),
    'type' => 'text_default',
    'weight' => 31,
  );
  $overrides["field_instance.node-study-field_target_nb_supp_info.display|diff_standard"] = array(
    'label' => 'hidden',
    'module' => 'text',
    'settings' => array(),
    'type' => 'text_default',
    'weight' => 20,
  );
  $overrides["field_instance.node-study-field_target_number_biosamples.display|diff_standard"] = array(
    'label' => 'above',
    'module' => 'number',
    'type' => 'number_integer',
    'weight' => 19,
  );
  $overrides["field_instance.node-study-field_target_number_participants.display|diff_standard"] = array(
    'label' => 'above',
    'module' => 'number',
    'type' => 'number_integer',
    'weight' => 17,
  );
  $overrides["field_instance.node-study-field_website.display|diff_standard"] = array(
    'label' => 'above',
    'module' => 'link',
    'settings' => array(),
    'type' => 'link_default',
    'weight' => 35,
  );
  $overrides["field_instance.node-study-field_website.settings|attributes|configurable_title"]["DELETED"] = TRUE;
  $overrides["field_instance.node-study-field_website.settings|attributes|target"] = 'default';
  $overrides["field_instance.node-study-field_website.settings|attributes|title"]["DELETED"] = TRUE;
  $overrides["field_instance.node-study-field_website.settings|description_display"] = 'before';
  $overrides["field_instance.node-study-field_website.settings|enable_tokens"] = 1;
  $overrides["field_instance.node-study-field_website.settings|text_processing"] = 0;
  $overrides["field_instance.node-study-field_website.settings|title"] = 'optional';
  $overrides["field_instance.node-study-title_field.display|diff_standard"] = array(
    'label' => 'above',
    'module' => 'text',
    'settings' => array(),
    'type' => 'text_default',
    'weight' => 27,
  );

  // Exported overrides for: node

 return $overrides;
}
