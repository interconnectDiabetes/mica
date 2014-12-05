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
      'label' => 'Actual number of participants',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-actual-particip-ic field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
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
      0 => 'group_health_info_ic',
      1 => 'group_key_exposures_ic',
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
      0 => 'group_genotype_imputation_ic',
      1 => 'group_his_lat_ic',
      2 => 'group_race_ic',
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
  $field_group->identifier = 'group_genotype_imputation_ic|node|study|form';
  $field_group->group_name = 'group_genotype_imputation_ic';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'study';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ethnic_race_ic';
  $field_group->data = array(
    'label' => 'Genotypes and imputation',
    'weight' => '17',
    'children' => array(
      0 => 'group_genotyping_arrays_ic',
      1 => 'group_reference_panels_ic',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-genotype-imputation-ic field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_genotype_imputation_ic|node|study|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_genotyping_arrays_ic|node|study|form';
  $field_group->group_name = 'group_genotyping_arrays_ic';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'study';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_genotype_imputation_ic';
  $field_group->data = array(
    'label' => 'Genotyping Arrays',
    'weight' => '173',
    'children' => array(
      0 => 'field_genotyping_arrays_ic',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-genotyping-arrays-ic field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_genotyping_arrays_ic|node|study|form'] = $field_group;

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
      'label' => 'Health Information',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-health-info-ic field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
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
      'label' => 'Hispanic or Latino participants',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-his-lat-ic field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
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
      'label' => 'Key exposures',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-key-exposures-ic field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_key_exposures_ic|node|study|form'] = $field_group;

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
      'label' => 'Participant characteristics',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-race-ic field-group-fieldset',
        'description' => 'Please indicate the main groups represented in the study, giving the approximate percentage of participants in each group.',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_race_ic|node|study|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_reference_panels_ic|node|study|form';
  $field_group->group_name = 'group_reference_panels_ic';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'study';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_genotype_imputation_ic';
  $field_group->data = array(
    'label' => 'Reference Panels',
    'weight' => '174',
    'children' => array(
      0 => 'field_hapmap_ref_panel_ic',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-reference-panels-ic field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_reference_panels_ic|node|study|form'] = $field_group;

  return $export;
}
