<?php
/**
 * @file
 * ethnic_group.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function interconnect_studies_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ethnic_race_ic|node|study|form';
  $field_group->group_name = 'group_ethnic_race_ic';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'study';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Broad categories of ethnic and racial groups recruited',
    'weight' => '18',
    'children' => array(
      0 => 'group_pop_his_lat_ic',
      1 => 'group_pop_race_ic',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => 'Please answer the questions below to give an indication of the broad categories of ethnic and racial groups that have been recruited to the study. The information requested is simply an approximation about the study as a whole using the broad categories below, not a detailed analysis based on specific responses to questionnaires from participants within the study.',
        'classes' => 'group-ethnic-race-ic field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_ethnic_race_ic|node|study|form'] = $field_group;
  
  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pop_his_lat_ic|node|study|form';
  $field_group->group_name = 'group_pop_his_lat_ic';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'study';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Hispanic or Latino participants',
    'weight' => '15',
    'children' => array(
      0 => 'field_eth_his_lat_ic',
      1 => 'field_eth_non_his_lat_ic',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => 'Please indicate the approximate percentage of participants that are of:',
        'classes' => 'group-pop-his-lat-ic field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_pop_his_lat_ic|node|study|form'] = $field_group;  
  
  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pop_race_ic|node|study|form';
  $field_group->group_name = 'group_pop_race_ic';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'study';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
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
        'classes' => 'group-pop-race-ic field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_pop_race_ic|node|study|form'] = $field_group;
  

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pop_recruitment_target_ic|node|population|form';
  $field_group->group_name = 'group_pop_recruitment_target_ic';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'population';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Recruitment target intrinsic to the design of the study',
    'weight' => '10',
    'children' => array(
      0 => 'field_pop_rec_target_ic',
      1 => 'field_pop_rec_target_other_ic',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-pop-recruitment-target-ic field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_pop_recruitment_target_ic|node|population|form'] = $field_group;  
  
  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pop_particip_char_ic|node|population|form';
  $field_group->group_name = 'group_pop_particip_char_ic';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'population';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Participants\' characteristics',
    'weight' => '15',
    'children' => array(
      0 => 'group_pop_rec_age_ic',
	  1 => 'field_pop_country',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => 'Please specify the characteristics of the study participants',
        'classes' => 'group-pop-particip-char-ic field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_pop_particip_char_ic|node|population|form'] = $field_group;
  
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
	  0 => 'title_field',
	  1 => 'group_pop_recruitment_procedures',
      2 => 'group_pop_recruitment_target_ic',
      3 => 'group_pop_particip_char_ic',
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
  
  return $export;
}
