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
  $overrides["field_instance.node-population-field_pop_age_max.display|default|weight"] = 5;
  $overrides["field_instance.node-population-field_pop_age_max.label"] = 'Maximum age at recruitment';
  $overrides["field_instance.node-population-field_pop_age_max.settings|suffix"] = ' years';
  $overrides["field_instance.node-population-field_pop_age_min.label"] = 'Minimum age at recruitment';
  $overrides["field_instance.node-population-field_pop_age_min.settings"] = array(
    'max' => 110,
    'min' => 0,
    'prefix' => '',
    'suffix' => '',
    'user_register_form' => FALSE,
  );
  $overrides["field_instance.node-population-field_pop_country.description"] = 'Select the countries of residence of the study participants from the list, selecting all that apply   ';
  $overrides["field_instance.node-population-field_pop_country.display"] = array(
    'default' => array(
      'label' => 'inline',
      'module' => 'list',
      'settings' => array(),
      'type' => 'list_default',
      'weight' => 6,
    ),
  );
  $overrides["field_instance.node-population-field_pop_country.label"] = 'Country of residence at time of recruitment';
  $overrides["field_instance.node-population-field_pop_country.widget|active"] = 1;
  $overrides["field_instance.node-population-field_pop_ethnic_origin.display|default|weight"] = 12;
  $overrides["field_instance.node-population-field_pop_ethnic_origin.widget|weight"] = 15;
  $overrides["field_instance.node-population-field_pop_exist_study_part.display|default|weight"] = 18;
  $overrides["field_instance.node-population-field_pop_exist_study_part.widget"] = array(
    'active' => 1,
    'module' => 'text',
    'type' => 'text_textfield',
    'weight' => 51,
  );
  $overrides["field_instance.node-population-field_pop_general_pop_recruit.display|default|weight"] = 17;
  $overrides["field_instance.node-population-field_pop_general_pop_recruit.widget|weight"] = 50;
  $overrides["field_instance.node-population-field_pop_health_status.description"] = 'Please specify';
  $overrides["field_instance.node-population-field_pop_health_status.display"] = array(
    'default' => array(
      'label' => 'inline',
      'module' => 'text',
      'settings' => array(),
      'type' => 'text_default',
      'weight' => 13,
    ),
  );
  $overrides["field_instance.node-population-field_pop_health_status.label"] = 'Selection on the basis of a specific pre-existing health condition ';
  $overrides["field_instance.node-population-field_pop_health_status.widget|weight"] = 12;
  $overrides["field_instance.node-population-field_pop_partcipant_sel_supp_in.display|default|label"] = 'inline';
  $overrides["field_instance.node-population-field_pop_partcipant_sel_supp_in.display|default|weight"] = 15;
  $overrides["field_instance.node-population-field_pop_partcipant_sel_supp_in.widget|weight"] = 16;
  $overrides["field_instance.node-population-field_pop_recruit_supp_info.display|default|label"] = 'above';
  $overrides["field_instance.node-population-field_pop_recruit_supp_info.display|default|weight"] = 32;
  $overrides["field_instance.node-population-field_pop_recruit_supp_info.widget|weight"] = 52;
  $overrides["field_instance.node-population-field_pop_recruitment_other.display|default|weight"] = 21;
  $overrides["field_instance.node-population-field_pop_recruitment_other.widget|weight"] = 54;
  $overrides["field_instance.node-population-field_pop_select_criteria.display|default|label"] = 'inline';
  $overrides["field_instance.node-population-field_pop_select_criteria.widget|weight"] = 13;
  $overrides["field_instance.node-population-field_pop_specific_pop.display|default|label"] = 'above';
  $overrides["field_instance.node-population-field_pop_specific_pop.display|default|weight"] = 33;
  $overrides["field_instance.node-population-field_pop_specific_pop.widget|weight"] = 55;
  $overrides["field_instance.node-population-field_pop_specific_pop_other_sp.display|default|weight"] = 20;
  $overrides["field_instance.node-population-field_pop_specific_pop_other_sp.label"] = 'Other Specific Population';
  $overrides["field_instance.node-population-field_pop_specific_pop_other_sp.widget|weight"] = 56;
  $overrides["field_instance.node-population-field_pop_src_recruit.description"] = 'Specify the sources of recruitment';
  $overrides["field_instance.node-population-field_pop_src_recruit.display|default|label"] = 'inline';
  $overrides["field_instance.node-population-field_pop_src_recruit.display|default|weight"] = 16;
  $overrides["field_instance.node-population-field_pop_src_recruit.widget|weight"] = 53;
  $overrides["field_instance.node-population-title_field.default_value|0"] = array(
    'value' => 'Population',
  );
  $overrides["field_instance.node-population-title_field.display_label"] = '';
  $overrides["field_instance.node-population-title_field.display|default|weight"] = 31;
  $overrides["field_instance.node-population-title_field.required"] = 1;
  $overrides["field_instance.node-population-title_field.widget"] = array(
    'active' => 1,
    'module' => 'text',
    'type' => 'text_textfield',
    'weight' => 0,
  );
  $overrides["field_instance.node-study-body.display|default|module"]["DELETED"] = TRUE;
  $overrides["field_instance.node-study-body.display|default|type"] = 'hidden';
  $overrides["field_instance.node-study-body.required"] = 0;
  $overrides["field_instance.node-study-body.widget|weight"] = 176;
  $overrides["field_instance.node-study-field_acroym.description"] = 'If applicable, enter study acronym';
  $overrides["field_instance.node-study-field_acroym.widget|weight"] = -4;
  $overrides["field_instance.node-study-field_contacts_ref.description"] = 'Enter the details of the person(s) who could provide additional information about the study by clicking the Create Contact button. Edit an existing contact by clicking the Edit button.';
  $overrides["field_instance.node-study-field_contacts_ref.widget|weight"] = 174;
  $overrides["field_instance.node-study-field_logo.display|default|module"]["DELETED"] = TRUE;
  $overrides["field_instance.node-study-field_logo.display|default|settings|image_link"]["DELETED"] = TRUE;
  $overrides["field_instance.node-study-field_logo.display|default|settings|image_style"]["DELETED"] = TRUE;
  $overrides["field_instance.node-study-field_logo.display|default|type"] = 'hidden';
  $overrides["field_instance.node-study-field_marker_paper.label"] = 'Study Reference Paper';
  $overrides["field_instance.node-study-field_pubmedid.description"] = 'If available, enter marker paper’s Pubmed ID.  ';
  $overrides["field_instance.node-study-field_study_populations.label"] = 'Sampling Frames';
  $overrides["field_instance.node-study-field_target_number_participants.description"] = 'Number of participants planned to be recruited.';
  $overrides["field_instance.node-study-field_target_number_participants.settings"] = array(
    'description_display' => 'after',
    'max' => '',
    'min' => 0,
    'prefix' => '',
    'suffix' => ' participants',
    'user_register_form' => FALSE,
  );
  $overrides["field_instance.node-study-field_website.description"] = 'Enter study website URL';
  $overrides["field_instance.node-study-field_website.widget|weight"] = 177;

  // Exported overrides for: node

 return $overrides;
}
