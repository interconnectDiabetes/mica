<?php
/**
 * @file
 * interconnect_studies.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function interconnect_studies_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_actual_particip_ic|node|study|form';
  $field_group->group_name = 'group_actual_particip_ic';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'study';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_nb_participants';
  $field_group->data = array(
    'label' => 'Actual number of participants',
    'weight' => '9',
    'children' => array(
      0 => 'field_number_of_participants_ic',
      1 => 'field_participants_date_ic',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-actual-particip-ic field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_actual_particip_ic|node|study|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_available_info_ic|node|study|form';
  $field_group->group_name = 'group_available_info_ic';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'study';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tabs';
  $field_group->data = array(
    'label' => 'Available Information',
    'weight' => '14',
    'children' => array(
      0 => 'group_key_exposures_ic',
      1 => 'group_health_info_ic',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-available-info-ic field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_available_info_ic|node|study|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ethnic_race_ic|node|study|form';
  $field_group->group_name = 'group_ethnic_race_ic';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'study';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tabs';
  $field_group->data = array(
    'label' => 'Broad categories of ethnic and racial groups recruited',
    'weight' => '13',
    'children' => array(
      0 => 'group_his_lat_ic',
      1 => 'group_race_ic',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => 'Please answer the questions below to give an indication of the broad categories of ethnic and racial groups that have been recruited to the study. The information requested is simply an approximation about the study as a whole using the broad categories below, not a detailed analysis based on specific responses to questionnaires from participants within the study.',
        'classes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_ethnic_race_ic|node|study|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_health_info_ic|node|study|form';
  $field_group->group_name = 'group_health_info_ic';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'study';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_available_info_ic';
  $field_group->data = array(
    'label' => 'Health Information',
    'weight' => '174',
    'children' => array(
      0 => 'field_health_info_ic',
      1 => 'field_hi_other_diabetes_ic',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-health-info-ic field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_health_info_ic|node|study|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_his_lat_ic|node|study|form';
  $field_group->group_name = 'group_his_lat_ic';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'study';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ethnic_race_ic';
  $field_group->data = array(
    'label' => 'Hispanic or Latino participants',
    'weight' => '15',
    'children' => array(
      0 => 'field_eth_his_lat_ic',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => 'Please indicate the approximate percentage of participants that are of:',
        'classes' => 'group-his-lat-ic field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_his_lat_ic|node|study|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_key_exposures_ic|node|study|form';
  $field_group->group_name = 'group_key_exposures_ic';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'study';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_available_info_ic';
  $field_group->data = array(
    'label' => 'Key exposures',
    'weight' => '177',
    'children' => array(
      0 => 'field_dna_ic',
      1 => 'field_measure_diet_ic',
      2 => 'field_measure_pa_ic',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-key-exposures-ic field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_key_exposures_ic|node|study|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pop_rec_age_ic|node|population|form';
  $field_group->group_name = 'group_pop_rec_age_ic';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'population';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Age at recruitment',
    'weight' => '10',
    'children' => array(
      0 => 'field_pop_age_min',
      1 => 'field_pop_age_max',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_pop_rec_age_ic|node|population|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pop_recruitment_procedures_ic|node|population|form';
  $field_group->group_name = 'group_pop_recruitment_procedures_ic';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'population';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Participants selection criteria',
    'weight' => '10',
    'children' => array(
      0 => 'field_pop_src_recruit',
      1 => 'field_pop_specific_pop',
      2 => 'field_pop_specific_pop_other_sp',
      3 => 'field_pop_recruitment_other',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => 'Specify the criteria that were used to select participants 
		(i.e. the selection criteria used to inform recruitment, not the characteristics
		of the participants actually recruited)',
        'classes' => 'group-pop-recruitment-procedures-ic field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_pop_recruitment_procedures_ic|node|population|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pop_residence_ic|node|population|form';
  $field_group->group_name = 'group_pop_residence_ic';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'population';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Age at recruitment',
    'weight' => '10',
    'children' => array(
      0 => 'field_pop_country',
      1 => 'field_pop_locality_ic',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_pop_residence_ic|node|population|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pop_sampling_frame_ic|node|population|form';
  $field_group->group_name = 'group_pop_sampling_frame_ic';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'population';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Population from which the sample is drawn',
    'weight' => '15',
    'children' => array(
      0 => 'group_pop_selection_criteria_ic',
      1 => 'group_pop_recruitment_procedures_ic',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => 'All studies represent samples from a within a larger population and the term 
		 sampling frame defines those within the population who were sampled. Some studies will have multiple
		 sampling frames. Please complete the next questions for each separate sampling frame.',
        'classes' => 'group-pop-sampling-frame-ic field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_pop_sampling_frame_ic|node|population|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pop_selection_criteria_ic|node|population|form';
  $field_group->group_name = 'group_pop_selection_criteria_ic';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'population';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Participants selection criteria',
    'weight' => '10',
    'children' => array(
      0 => 'field_gender_ic',
      1 => 'group_pop_rec_age_ic',
      2 => 'group_pop_residence_ic',
      3 => 'field_pop_pregnancy_ic',
      4 => 'field_pop_newborn_ic',
      5 => 'field_pop_migration_ic',
      6 => 'field_pop_health_status',
      7 => 'field_pop_selection_others_sp',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => 'Specify the criteria that were used to select participants 
		(i.e. the selection criteria used to inform recruitment, not the characteristics
		of the participants actually recruited)',
        'classes' => 'group-pop-selection-criteria-ic field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_pop_selection_criteria_ic|node|population|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_race_ic|node|study|form';
  $field_group->group_name = 'group_race_ic';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'study';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ethnic_race_ic';
  $field_group->data = array(
    'label' => 'Participant characteristics',
    'weight' => '16',
    'children' => array(
      0 => 'field_race_african_ic',
      1 => 'field_race_e_asian_ic',
      2 => 'field_race_euro_ic',
      3 => 'field_race_indig_am_ic',
      4 => 'field_race_indig_aus_ic',
      5 => 'field_race_indig_pac_ic',
      6 => 'field_race_mid_e_ic',
      7 => 'field_race_other_ic',
      8 => 'field_race_other_text_ic',
      9 => 'field_race_s_asian_ic',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => 'Please indicate the main groups represented in the study, giving the approximate percentage of participants in each group.',
        'classes' => 'group-race-ic field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_race_ic|node|study|form'] = $field_group;

  return $export;
}
