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
    'label' => 'Actual Number of Participants',
    'weight' => '9',
    'children' => array(
      0 => 'field_number_of_participants_ic',
      1 => 'field_participants_date_ic',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Actual Number of Participants',
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
    'weight' => '12',
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
    'label' => 'Ethnic and racial groups recruited',
    'weight' => '10',
    'children' => array(
      0 => 'group_his_lat_ic',
      1 => 'group_race_ic',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Ethnic and racial groups recruited',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => '',
        'description' => 'Please answer the questions below to give an indication of the broad categories of ethnic and racial groups that have been recruited to the study. The information requested is simply an approximation about the study as a whole using the broad categories below, not a detailed analysis based on specific responses to questionnaires from participants within the study.',
      ),
      'formatter' => 'closed',
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
  $field_group->parent_name = 'group_tabs';
  $field_group->data = array(
    'label' => 'Genotypes and imputation',
    'weight' => '11',
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
      'label' => 'Genotyping Arrays',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-genotyping-arrays-ic field-group-fieldset',
        'description' => 'Report the proportion of individuals of your total population that have been genotyped for the array indicated.',
      ),
      'formatter' => 'collapsible',
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
        'classes' => 'group-health-info-ic field-group-fieldset group-main-ic',
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
        'classes' => 'group-key-exposures-ic field-group-fieldset group-main-ic',
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
      10 => 'field_genotype_african_ic',
      11 => 'field_genotype_east_asian_ic',
      12 => 'field_genotype_south_asian_ic',
      13 => 'field_genotype_euro_ic',
      14 => 'field_genotype_indig_am_ic',
      15 => 'field_genotype_indig_aus_ic',
      16 => 'field_genotype_indig_pac_ic',
      17 => 'field_genotype_mid_e_ic',
      18 => 'field_genotype_other_ic',
      19 => 'field_african_mds_plots_ic',
      20 => 'field_e_asian_mds_plots_ic',
      21 => 'field_s_asian_mds_plots_ic',
      22 => 'field_euro_mds_plots_ic',
      23 => 'field_indig_am_mds_plots_ic',
      24 => 'field_indig_aus_mds_plots_ic',
      25 => 'field_indig_pac_mds_plots_ic',
      26 => 'field_mid_e_mds_plots_ic',
      27 => 'field_other_mds_plots_ic',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Participant characteristics',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-race-ic field-group-fieldset',
        'description' => 'Please indicate the main groups represented in the study, giving the approximate number of participants in each group.',
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
      0 => 'field_1000_genomes_ref_pan_ic',
      1 => 'field_custom_ref_panels_ic',
      2 => 'field_hapmap_ref_panel_ic',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Reference Panels',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-reference-panels-ic field-group-fieldset',
        'description' => 'Report the proportion of individuals of your total population that have imputed genotype for the reference panel indicated. ',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_reference_panels_ic|node|study|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sample_pop_ic|node|study|form';
  $field_group->group_name = 'group_sample_pop_ic';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'study';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tabs';
  $field_group->data = array(
    'label' => 'Populations from which the sample(s) is drawn',
    'weight' => '16',
    'children' => array(
      0 => 'field_study_populations',
      1 => 'field_dummy_ic',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Populations from which the sample(s) is drawn',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-sample-pop-ic field-group-htab',
        'description' => 'All studies represent a sample from a larger population. Some studies will have multiple samples. Please add sampling frames below by clicking the Create Population button. You can add more sampling frames if needed. Existing sampling frames can be changed by clicking the Edit button.',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_sample_pop_ic|node|study|form'] = $field_group;

  return $export;
}
