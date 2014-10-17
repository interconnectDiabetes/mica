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
      0 => 'field_eth_his_lat_ic',
      1 => 'field_eth_non_his_lat_ic',
      2 => 'field_race_african_ic',
      3 => 'field_race_e_asian_ic',
      4 => 'field_race_euro_ic',
      5 => 'field_race_indig_am_ic',
      6 => 'field_race_indig_aus_ic',
      7 => 'field_race_indig_pac_ic',
      8 => 'field_race_mid_e_ic',
      9 => 'field_race_other_ic',
      10 => 'field_race_other_text_ic',
      11 => 'field_race_s_asian_ic',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-ethnic-race-ic field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_ethnic_race_ic|node|study|form'] = $field_group;

  return $export;
}
