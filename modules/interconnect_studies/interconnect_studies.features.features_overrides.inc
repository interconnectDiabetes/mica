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

  // Exported overrides for: field_group
  $overrides["field_group.group_general_info|node|study|form.data|children|4"] = 'group_marker_paper';
  $overrides["field_group.group_marker_paper|node|study|form.data|format_settings"]["DELETED"] = TRUE;
  $overrides["field_group.group_marker_paper|node|study|form.data|format_type"] = 'fieldset';
  $overrides["field_group.group_marker_paper|node|study|form.data|label"] = 'Study Reference Paper';
  $overrides["field_group.group_marker_paper|node|study|form.data|weight"] = 4;
  $overrides["field_group.group_marker_paper|node|study|form.parent_name"] = 'group_general_info';
  $overrides["field_group.group_methods|node|study|form.data|children"] = array(
    0 => 'group_general_design',
    1 => 'group_nb_participants',
  );
  $overrides["field_group.group_nb_participants|node|study|form.data|children|3"] = 'group_actual_particip_ic';
  $overrides["field_group.group_nb_participants|node|study|form.data|weight"] = 67;
  $overrides["field_group.group_study_design|node|study|form.data|children|10"] = 'field_interv_type_ic';
  $overrides["field_group.group_study_design|node|study|form.data|children|11"] = 'field_other_case_ic';
  $overrides["field_group.group_study_design|node|study|form.data|children|12"] = 'field_trial_number_ic';
  $overrides["field_group.group_study_design|node|study|form.data|children|6"] = 'field_case_definition_ic';
  $overrides["field_group.group_study_design|node|study|form.data|children|7"] = 'field_design_ic';
  $overrides["field_group.group_study_design|node|study|form.data|children|8"] = 'field_design_other_ic';
  $overrides["field_group.group_study_design|node|study|form.data|children|9"] = 'field_interv_other_ic';
  $overrides["field_group.group_study_design|node|study|form.data|weight"] = 67;
  $overrides["field_group.group_study_design|node|study|form.parent_name"] = 'group_general_design';
  $overrides["field_group.group_study_timeline|node|study|form.data|children|2"] = 'field_recruit_end_ic';
  $overrides["field_group.group_study_timeline|node|study|form.data|children|3"] = 'field_recruit_start_ic';
  $overrides["field_group.group_study_timeline|node|study|form.data|weight"] = 68;
  $overrides["field_group.group_study_timeline|node|study|form.parent_name"] = 'group_general_design';

  // Exported overrides for: field_instance
  $overrides["field_instance.node-population-field_pop_country.description"] = 'Select the countries of residence of the study
      		participants from the list, selecting all that apply.';
  $overrides["field_instance.node-population-field_pop_country.label"] = 'Country of residence at time of recruitment';
  $overrides["field_instance.node-population-field_pop_country.settings"] = array(
    'description_display' => 'before',
    'user_register_form' => FALSE,
  );
  $overrides["field_instance.node-study-body.required"] = 0;
  $overrides["field_instance.node-study-body.widget|weight"] = 5;
  $overrides["field_instance.node-study-field_acroym.description"] = 'If available, enter the study acronym';
  $overrides["field_instance.node-study-field_acroym.settings"] = array(
    'description_display' => 'before',
    'text_processing' => 0,
    'user_register_form' => FALSE,
  );
  $overrides["field_instance.node-study-field_contacts_ref.description"] = 'Enter the contact details of the person(s) that could provide additional information about the study. More contacts can be added with the "Add another item" button. You will be able to edit these Contacts after saving the Study.';
  $overrides["field_instance.node-study-field_contacts_ref.label"] = 'Contact person(s)';
  $overrides["field_instance.node-study-field_marker_paper.description"] = 'If available, enter a bibliographic citation (i.e. published sources such as journal article, web site, or report) which describes the study design';
  $overrides["field_instance.node-study-field_marker_paper.label"] = 'Study reference paper';
  $overrides["field_instance.node-study-field_pubmedid.If available, enter the paperâ€™s Pubmed ID"] = '';
  $overrides["field_instance.node-study-field_website.description"] = 'If available, enter the study website URL';
  $overrides["field_instance.node-study-field_website.settings|description_display"] = 'before';
  $overrides["field_instance.node-study-field_website.widget|weight"] = 6;
  $overrides["field_instance.node-study-title_field.description"] = 'Enter the official study name';
  $overrides["field_instance.node-study-title_field.label"] = 'Name of the study';

 return $overrides;
}
