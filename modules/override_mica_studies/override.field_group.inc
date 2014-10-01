y<?php
/**
 * @file
 * override.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function override_field_group_info() {
   $export = array();
  
  $field_group = new stdClass();
  $field_group->disabled = FALSE; 
  $field_group->api_version = 1;
  $field_group->identifier = 'group_gen_info_ic|node|study|form';
  $field_group->group_name = 'group_gen_info_ic';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'study';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tabs';
  $field_group->data = array(
    'label' => 'General Information',
    'weight' => '1',
    'children' => array(
					0 => 'title_field_ic',
					1 => 'field_acronym_ic',
					2 => 'field_contacts_ref_ic',
					3 => 'field_refer_paper_ic',					
					4 => 'field_pubmedid_ic',
					5 => 'field_website_ic',
					6 => 'field_data_dict_ic',
					),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-gen-info-ic field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_gen_info_ic|node|study|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; 
  $field_group->api_version = 1;
  $field_group->identifier = 'group_study_des_ic|node|study|form';
  $field_group->group_name = 'group_study_des_ic';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'study';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tabs';
  $field_group->data = array(
    'label' => 'Overall main study design informing selection',
    'weight' => '1',
    'children' => array(
					0 => 'field_study_design_ic',
					),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-gen-info-ic field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_study_des_ic|node|study|form'] = $field_group;
  
  dpm($export);
  
  return $export;
}
