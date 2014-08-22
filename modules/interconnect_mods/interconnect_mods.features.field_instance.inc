<?php
/**
 * @file
 * interconnect_mods.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function interconnect_mods_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-study-field_cohort_study_sp'
  $field_instances['node-study-field_cohort_study_sp'] = array(
    'bundle' => 'study',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Please enter some more information here about whether this was a nested case-control study, case-cohort study, or something else',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 41,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'display_label' => '',
    'entity_type' => 'node',
    'field_name' => 'field_cohort_study_sp',
    'label' => 'Cohort study design',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-study-field_study_design_ic'
  $field_instances['node-study-field_study_design_ic'] = array(
    'bundle' => 'study',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 40,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_study_design_ic',
    'label' => 'Study design',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 8,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Cohort study design');
  t('Please enter some more information here about whether this was a nested case-control study, case-cohort study, or something else');
  t('Study design');

  return $field_instances;
}
