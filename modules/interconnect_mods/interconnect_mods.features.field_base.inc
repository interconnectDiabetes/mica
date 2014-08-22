<?php
/**
 * @file
 * interconnect_mods.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function interconnect_mods_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_cohort_study_sp'
  $field_bases['field_cohort_study_sp'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_cohort_study_sp',
    'field_permissions' => array(
      'type' => 0,
    ),
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'field_description_infos' => array(
        'field_description' => 0,
        'field_description_body' => '',
        'field_description_label' => '',
        'field_description_value_type' => 'text',
      ),
      'profile2_private' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_study_design_ic'
  $field_bases['field_study_design_ic'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_study_design_ic',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'case_control' => 'Case-control study',
        'case_only' => 'Case only study',
        'clinical_trial' => 'Clinical trial / intervention trial',
        'cohort_study' => 'Cohort study (including case-control and case-cohort studies)',
        'cross_sectional' => 'Cross-sectional study',
        'other' => 'Other',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  return $field_bases;
}
