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
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_study_ref_paper|node|study|form';
  $field_group->group_name = 'group_study_ref_paper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'study';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Study Reference Paper',
    'weight' => '25',
    'children' => array(),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-study-ref-paper field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_study_ref_paper|node|study|form'] = $field_group;

  return $export;
}
