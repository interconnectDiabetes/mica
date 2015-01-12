<?php
/**
 * @file
 * interconnect_studies.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function interconnect_studies_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'field_collection_item-field_1000_genomes_ref_pan_ic-field_1000genomes_prop_inds_ic'
  $field_instances['field_collection_item-field_1000_genomes_ref_pan_ic-field_1000genomes_prop_inds_ic'] = array(
    'bundle' => 'field_1000_genomes_ref_pan_ic',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_integer',
        'weight' => 0,
      ),
    ),
    'display_label' => '',
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_1000genomes_prop_inds_ic',
    'label' => 'Proportion of individuals',
    'required' => 0,
    'settings' => array(
      'max' => 100,
      'min' => 0,
      'prefix' => '',
      'suffix' => '%',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_1000_genomes_ref_pan_ic-field_1000genomes_ref_panels_ic'
  $field_instances['field_collection_item-field_1000_genomes_ref_pan_ic-field_1000genomes_ref_panels_ic'] = array(
    'bundle' => 'field_1000_genomes_ref_pan_ic',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Please select each 1000 genomes reference panel that has been used for genotyping your population. To add more reference panels, click the Add Another Item button below',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 1,
      ),
    ),
    'display_label' => '',
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_1000genomes_ref_panels_ic',
    'label' => '1000 genomes Reference Panel',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'content_taxonomy_opt_groups' => FALSE,
      ),
      'type' => 'options_select',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_1000_genomes_ref_pan_ic-field_1000genomes_release_date_i'
  $field_instances['field_collection_item-field_1000_genomes_ref_pan_ic-field_1000genomes_release_date_i'] = array(
    'bundle' => 'field_1000_genomes_ref_pan_ic',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'short',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 3,
      ),
    ),
    'display_label' => '',
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_1000genomes_release_date_i',
    'label' => 'Release date',
    'required' => 0,
    'settings' => array(
      'default_value' => 'blank',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'm/d/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'text_parts' => array(),
        'year_range' => '-10:+2',
      ),
      'type' => 'date_select',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_1000_genomes_ref_pan_ic-field_other_1000genomes_pan_ic'
  $field_instances['field_collection_item-field_1000_genomes_ref_pan_ic-field_other_1000genomes_pan_ic'] = array(
    'bundle' => 'field_1000_genomes_ref_pan_ic',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Please specify the other 1000 Genomes reference panel',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
    ),
    'display_label' => '',
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_other_1000genomes_pan_ic',
    'label' => 'Other 1000 genomes reference panel',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_custom_ref_panels_ic-field_custom_ref_panel_ic'
  $field_instances['field_collection_item-field_custom_ref_panels_ic-field_custom_ref_panel_ic'] = array(
    'bundle' => 'field_custom_ref_panels_ic',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'display_label' => '',
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_custom_ref_panel_ic',
    'label' => 'Custom reference panel',
    'required' => 0,
    'settings' => array(
      'description_display' => 'after',
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_custom_ref_panels_ic-field_custom_ref_prop_ic'
  $field_instances['field_collection_item-field_custom_ref_panels_ic-field_custom_ref_prop_ic'] = array(
    'bundle' => 'field_custom_ref_panels_ic',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_integer',
        'weight' => 0,
      ),
    ),
    'display_label' => '',
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_custom_ref_prop_ic',
    'label' => 'Proportion of individuals',
    'required' => 0,
    'settings' => array(
      'description_display' => 'after',
      'max' => 100,
      'min' => 0,
      'prefix' => '',
      'suffix' => '%',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_genotyping_arrays_ic-field_list_of_arrays_ic'
  $field_instances['field_collection_item-field_genotyping_arrays_ic-field_list_of_arrays_ic'] = array(
    'bundle' => 'field_genotyping_arrays_ic',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 0,
      ),
    ),
    'display_label' => '',
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_list_of_arrays_ic',
    'label' => 'List of arrays',
    'required' => 0,
    'settings' => array(
      'description_display' => 'before',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'content_taxonomy_opt_groups' => FALSE,
      ),
      'type' => 'options_select',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_genotyping_arrays_ic-field_other_arrays_ic'
  $field_instances['field_collection_item-field_genotyping_arrays_ic-field_other_arrays_ic'] = array(
    'bundle' => 'field_genotyping_arrays_ic',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_other_arrays_ic',
    'label' => 'Other arrays',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_genotyping_arrays_ic-field_proportion_of_individ_ic'
  $field_instances['field_collection_item-field_genotyping_arrays_ic-field_proportion_of_individ_ic'] = array(
    'bundle' => 'field_genotyping_arrays_ic',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_integer',
        'weight' => 1,
      ),
    ),
    'display_label' => '',
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_proportion_of_individ_ic',
    'label' => 'Proportion of individuals',
    'required' => 0,
    'settings' => array(
      'max' => 100,
      'min' => 0,
      'prefix' => '',
      'suffix' => '%',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_hapmap_ref_panel_ic-field_hapmap_prop_inds_ic'
  $field_instances['field_collection_item-field_hapmap_ref_panel_ic-field_hapmap_prop_inds_ic'] = array(
    'bundle' => 'field_hapmap_ref_panel_ic',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_integer',
        'weight' => 1,
      ),
    ),
    'display_label' => '',
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_hapmap_prop_inds_ic',
    'label' => 'Proportion of individuals',
    'required' => 0,
    'settings' => array(
      'max' => 100,
      'min' => 0,
      'prefix' => '',
      'suffix' => '%',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_hapmap_ref_panel_ic-field_hapmap_ref_panels_ic'
  $field_instances['field_collection_item-field_hapmap_ref_panel_ic-field_hapmap_ref_panels_ic'] = array(
    'bundle' => 'field_hapmap_ref_panel_ic',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 0,
      ),
    ),
    'display_label' => '',
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_hapmap_ref_panels_ic',
    'label' => 'Reference Panels',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'content_taxonomy_opt_groups' => FALSE,
      ),
      'type' => 'options_select',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_hapmap_ref_panel_ic-field_hapmap_release_date_ic'
  $field_instances['field_collection_item-field_hapmap_ref_panel_ic-field_hapmap_release_date_ic'] = array(
    'bundle' => 'field_hapmap_ref_panel_ic',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(),
        'type' => 'date_plain',
        'weight' => 3,
      ),
    ),
    'display_label' => '',
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_hapmap_release_date_ic',
    'label' => 'Release Date',
    'required' => 0,
    'settings' => array(
      'default_value' => 'blank',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'm/d/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'text_parts' => array(),
        'year_range' => '-10:+2',
      ),
      'type' => 'date_select',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_hapmap_ref_panel_ic-field_other_hapmap_ref_pan_ic'
  $field_instances['field_collection_item-field_hapmap_ref_panel_ic-field_other_hapmap_ref_pan_ic'] = array(
    'bundle' => 'field_hapmap_ref_panel_ic',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_other_hapmap_ref_pan_ic',
    'label' => 'Other HapMap reference panel',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-population-field_pop_gender_ic'
  $field_instances['node-population-field_pop_gender_ic'] = array(
    'bundle' => 'population',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 28,
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
    'field_name' => 'field_pop_gender_ic',
    'label' => 'Gender',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-population-field_pop_locality_ic'
  $field_instances['node-population-field_pop_locality_ic'] = array(
    'bundle' => 'population',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 27,
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
    'field_name' => 'field_pop_locality_ic',
    'label' => 'Area of residence',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-population-field_pop_migration_ic'
  $field_instances['node-population-field_pop_migration_ic'] = array(
    'bundle' => 'population',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 31,
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
    'field_name' => 'field_pop_migration_ic',
    'label' => 'Migration status',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-population-field_pop_newborn_ic'
  $field_instances['node-population-field_pop_newborn_ic'] = array(
    'bundle' => 'population',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 30,
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
    'field_name' => 'field_pop_newborn_ic',
    'label' => 'Newborn',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-population-field_pop_pregnancy_ic'
  $field_instances['node-population-field_pop_pregnancy_ic'] = array(
    'bundle' => 'population',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 29,
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
    'field_name' => 'field_pop_pregnancy_ic',
    'label' => 'Pregnant women',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-study-field_1000_genomes_ref_pan_ic'
  $field_instances['node-study-field_1000_genomes_ref_pan_ic'] = array(
    'bundle' => 'study',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'field_collection',
        'settings' => array(
          'add' => 'Add',
          'delete' => 'Delete',
          'description' => TRUE,
          'edit' => 'Edit',
          'view_mode' => 'full',
        ),
        'type' => 'hidden',
        'weight' => 72,
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
    'field_name' => 'field_1000_genomes_ref_pan_ic',
    'label' => '1000 genomes reference panel',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => 173,
    ),
  );

  // Exported field_instance: 'node-study-field_case_definition_ic'
  $field_instances['node-study-field_case_definition_ic'] = array(
    'bundle' => 'study',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Please specify the case definition of the study',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 45,
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
    'field_name' => 'field_case_definition_ic',
    'label' => 'Case definition',
    'required' => 0,
    'settings' => array(
      'description_display' => 'before',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 132,
    ),
  );

  // Exported field_instance: 'node-study-field_custom_ref_panels_ic'
  $field_instances['node-study-field_custom_ref_panels_ic'] = array(
    'bundle' => 'study',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'field_collection',
        'settings' => array(
          'add' => 'Add',
          'delete' => 'Delete',
          'description' => TRUE,
          'edit' => 'Edit',
          'view_mode' => 'full',
        ),
        'type' => 'hidden',
        'weight' => 74,
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
    'field_name' => 'field_custom_ref_panels_ic',
    'label' => 'Custom reference panel',
    'required' => 0,
    'settings' => array(
      'description_display' => 'after',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => 174,
    ),
  );

  // Exported field_instance: 'node-study-field_design_ic'
  $field_instances['node-study-field_design_ic'] = array(
    'bundle' => 'study',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Select general study design. You may select only one design, which should be the design that defined recruitment.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 40,
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
    'field_name' => 'field_design_ic',
    'label' => 'Study Design',
    'required' => 1,
    'settings' => array(
      'description_display' => 'before',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 127,
    ),
  );

  // Exported field_instance: 'node-study-field_design_other_ic'
  $field_instances['node-study-field_design_other_ic'] = array(
    'bundle' => 'study',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Please specify the other study design',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'hidden',
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
    'field_name' => 'field_design_other_ic',
    'label' => 'Other study design',
    'required' => 0,
    'settings' => array(
      'description_display' => 'before',
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 128,
    ),
  );

  // Exported field_instance: 'node-study-field_dna_ic'
  $field_instances['node-study-field_dna_ic'] = array(
    'bundle' => 'study',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Does the study have DNA extracted or have a potential source of DNA?',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 68,
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
    'field_name' => 'field_dna_ic',
    'label' => 'DNA sources',
    'required' => 0,
    'settings' => array(
      'description_display' => 'before',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 155,
    ),
  );

  // Exported field_instance: 'node-study-field_dummy_ic'
  $field_instances['node-study-field_dummy_ic'] = array(
    'bundle' => 'study',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 73,
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
    'field_name' => 'field_dummy_ic',
    'label' => 'dummy_ic',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 174,
    ),
  );

  // Exported field_instance: 'node-study-field_eth_his_lat_ic'
  $field_instances['node-study-field_eth_his_lat_ic'] = array(
    'bundle' => 'study',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Please indicate the approximate percentage of participants that are of Hispanic or Latino origin',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'hidden',
        'weight' => 53,
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
    'field_name' => 'field_eth_his_lat_ic',
    'label' => 'Hispanic / Latino',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '%',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 140,
    ),
  );

  // Exported field_instance: 'node-study-field_family_ic'
  $field_instances['node-study-field_family_ic'] = array(
    'bundle' => 'study',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Select the type of people targeted by the study design.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 49,
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
    'field_name' => 'field_family_ic',
    'label' => 'Individual/family based study',
    'required' => 0,
    'settings' => array(
      'description_display' => 'before',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 69,
    ),
  );

  // Exported field_instance: 'node-study-field_family_other_ic'
  $field_instances['node-study-field_family_other_ic'] = array(
    'bundle' => 'study',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Please specify the other type of people targeted by the study design',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 50,
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
    'field_name' => 'field_family_other_ic',
    'label' => 'Other type of people',
    'required' => 0,
    'settings' => array(
      'description_display' => 'before',
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 70,
    ),
  );

  // Exported field_instance: 'node-study-field_genotyping_arrays_ic'
  $field_instances['node-study-field_genotyping_arrays_ic'] = array(
    'bundle' => 'study',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'field_collection',
        'settings' => array(
          'add' => 'Add',
          'delete' => 'Delete',
          'description' => TRUE,
          'edit' => 'Edit',
          'view_mode' => 'full',
        ),
        'type' => 'hidden',
        'weight' => 70,
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
    'field_name' => 'field_genotyping_arrays_ic',
    'label' => 'Genotyping Arrays',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => 171,
    ),
  );

  // Exported field_instance: 'node-study-field_hapmap_ref_panel_ic'
  $field_instances['node-study-field_hapmap_ref_panel_ic'] = array(
    'bundle' => 'study',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'field_collection',
        'settings' => array(
          'add' => 'Add',
          'delete' => 'Delete',
          'description' => TRUE,
          'edit' => 'Edit',
          'view_mode' => 'full',
        ),
        'type' => 'hidden',
        'weight' => 71,
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
    'field_name' => 'field_hapmap_ref_panel_ic',
    'label' => 'HapMap reference panel',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => 172,
    ),
  );

  // Exported field_instance: 'node-study-field_health_info_ic'
  $field_instances['node-study-field_health_info_ic'] = array(
    'bundle' => 'study',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 64,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_health_info_ic',
    'label' => 'Health Information',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 151,
    ),
  );

  // Exported field_instance: 'node-study-field_hi_other_diabetes_ic'
  $field_instances['node-study-field_hi_other_diabetes_ic'] = array(
    'bundle' => 'study',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Please specify the other types of diabetes',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 65,
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
    'field_name' => 'field_hi_other_diabetes_ic',
    'label' => 'Other types of diabetes',
    'required' => 0,
    'settings' => array(
      'description_display' => 'before',
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 152,
    ),
  );

  // Exported field_instance: 'node-study-field_interv_other_ic'
  $field_instances['node-study-field_interv_other_ic'] = array(
    'bundle' => 'study',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Please specify the other intervention types',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 44,
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
    'field_name' => 'field_interv_other_ic',
    'label' => 'Other intervention type',
    'required' => 0,
    'settings' => array(
      'description_display' => 'before',
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 131,
    ),
  );

  // Exported field_instance: 'node-study-field_interv_type_ic'
  $field_instances['node-study-field_interv_type_ic'] = array(
    'bundle' => 'study',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'What type of intervention is being investigated?',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 43,
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
    'field_name' => 'field_interv_type_ic',
    'label' => 'Intervention type',
    'required' => 0,
    'settings' => array(
      'description_display' => 'before',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 130,
    ),
  );

  // Exported field_instance: 'node-study-field_measure_diet_ic'
  $field_instances['node-study-field_measure_diet_ic'] = array(
    'bundle' => 'study',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Does the study have any measures of diet?',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 66,
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
    'field_name' => 'field_measure_diet_ic',
    'label' => 'Dietary measures',
    'required' => 0,
    'settings' => array(
      'description_display' => 'before',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 153,
    ),
  );

  // Exported field_instance: 'node-study-field_measure_pa_ic'
  $field_instances['node-study-field_measure_pa_ic'] = array(
    'bundle' => 'study',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Does the study have any measures of physical activity?',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 67,
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
    'field_name' => 'field_measure_pa_ic',
    'label' => 'Physical activity measures',
    'required' => 0,
    'settings' => array(
      'description_display' => 'before',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 154,
    ),
  );

  // Exported field_instance: 'node-study-field_number_of_participants_ic'
  $field_instances['node-study-field_number_of_participants_ic'] = array(
    'bundle' => 'study',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'If the study is not completed, what is the total number of participants who have been recruited to the study?',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'hidden',
        'weight' => 51,
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
    'field_name' => 'field_number_of_participants_ic',
    'label' => 'Actual number of participants recruited to the study',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => 'participants',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 138,
    ),
  );

  // Exported field_instance: 'node-study-field_other_case_ic'
  $field_instances['node-study-field_other_case_ic'] = array(
    'bundle' => 'study',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Please specify the other case definition',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 46,
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
    'field_name' => 'field_other_case_ic',
    'label' => 'Other case definition',
    'required' => 0,
    'settings' => array(
      'description_display' => 'before',
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 133,
    ),
  );

  // Exported field_instance: 'node-study-field_participants_date_ic'
  $field_instances['node-study-field_participants_date_ic'] = array(
    'bundle' => 'study',
    'deleted' => 0,
    'description' => 'At what date was this number recorded?',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'hidden',
        'weight' => 52,
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
    'field_name' => 'field_participants_date_ic',
    'label' => 'Date number of participants was recorded',
    'required' => 0,
    'settings' => array(
      'default_value' => 'blank',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'm/d/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'text_parts' => array(),
        'year_range' => '-50:+0',
      ),
      'type' => 'date_select',
      'weight' => 170,
    ),
  );

  // Exported field_instance: 'node-study-field_race_african_ic'
  $field_instances['node-study-field_race_african_ic'] = array(
    'bundle' => 'study',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'hidden',
        'weight' => 54,
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
    'field_name' => 'field_race_african_ic',
    'label' => 'African / African-American / Black',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '%',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 141,
    ),
  );

  // Exported field_instance: 'node-study-field_race_e_asian_ic'
  $field_instances['node-study-field_race_e_asian_ic'] = array(
    'bundle' => 'study',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'hidden',
        'weight' => 55,
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
    'field_name' => 'field_race_e_asian_ic',
    'label' => 'East or South East Asian',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '%',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 142,
    ),
  );

  // Exported field_instance: 'node-study-field_race_euro_ic'
  $field_instances['node-study-field_race_euro_ic'] = array(
    'bundle' => 'study',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'hidden',
        'weight' => 57,
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
    'field_name' => 'field_race_euro_ic',
    'label' => 'European / White',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '%',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 144,
    ),
  );

  // Exported field_instance: 'node-study-field_race_indig_am_ic'
  $field_instances['node-study-field_race_indig_am_ic'] = array(
    'bundle' => 'study',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'hidden',
        'weight' => 58,
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
    'field_name' => 'field_race_indig_am_ic',
    'label' => 'Indigenous American / American Indian / Native American / Alaskan Native',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '%',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 145,
    ),
  );

  // Exported field_instance: 'node-study-field_race_indig_aus_ic'
  $field_instances['node-study-field_race_indig_aus_ic'] = array(
    'bundle' => 'study',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'hidden',
        'weight' => 59,
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
    'field_name' => 'field_race_indig_aus_ic',
    'label' => 'Indigenous Australian / Aboriginal Australian',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '%',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 146,
    ),
  );

  // Exported field_instance: 'node-study-field_race_indig_pac_ic'
  $field_instances['node-study-field_race_indig_pac_ic'] = array(
    'bundle' => 'study',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'hidden',
        'weight' => 60,
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
    'field_name' => 'field_race_indig_pac_ic',
    'label' => 'Native Hawaiian or Other Pacific Islander',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '%',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 147,
    ),
  );

  // Exported field_instance: 'node-study-field_race_mid_e_ic'
  $field_instances['node-study-field_race_mid_e_ic'] = array(
    'bundle' => 'study',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'hidden',
        'weight' => 61,
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
    'field_name' => 'field_race_mid_e_ic',
    'label' => 'Middle Eastern',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '%',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 148,
    ),
  );

  // Exported field_instance: 'node-study-field_race_other_ic'
  $field_instances['node-study-field_race_other_ic'] = array(
    'bundle' => 'study',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'hidden',
        'weight' => 62,
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
    'field_name' => 'field_race_other_ic',
    'label' => 'Other group',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '%',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 149,
    ),
  );

  // Exported field_instance: 'node-study-field_race_other_text_ic'
  $field_instances['node-study-field_race_other_text_ic'] = array(
    'bundle' => 'study',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Please specify the other groups here',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 63,
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
    'field_name' => 'field_race_other_text_ic',
    'label' => 'Other group',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 150,
    ),
  );

  // Exported field_instance: 'node-study-field_race_s_asian_ic'
  $field_instances['node-study-field_race_s_asian_ic'] = array(
    'bundle' => 'study',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'hidden',
        'weight' => 56,
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
    'field_name' => 'field_race_s_asian_ic',
    'label' => 'South Asian / Indian Subcontinent',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '%',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 143,
    ),
  );

  // Exported field_instance: 'node-study-field_recruit_cont_ic'
  $field_instances['node-study-field_recruit_cont_ic'] = array(
    'bundle' => 'study',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 69,
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
    'field_name' => 'field_recruit_cont_ic',
    'label' => 'Is recruitment continuing?',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 126,
    ),
  );

  // Exported field_instance: 'node-study-field_recruit_end_ic'
  $field_instances['node-study-field_recruit_end_ic'] = array(
    'bundle' => 'study',
    'deleted' => 0,
    'description' => 'If recruitment has finished, when did it end?',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'hidden',
        'weight' => 48,
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
    'field_name' => 'field_recruit_end_ic',
    'label' => 'Recruitment end date',
    'required' => 0,
    'settings' => array(
      'default_value' => 'blank',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'description_display' => 'before',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'm/d/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'text_parts' => array(),
        'year_range' => '-50:+0',
      ),
      'type' => 'date_select',
      'weight' => 127,
    ),
  );

  // Exported field_instance: 'node-study-field_recruit_start_ic'
  $field_instances['node-study-field_recruit_start_ic'] = array(
    'bundle' => 'study',
    'deleted' => 0,
    'description' => 'When did recruitment start?',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'hidden',
        'weight' => 47,
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
    'field_name' => 'field_recruit_start_ic',
    'label' => 'Recruitment start date',
    'required' => 0,
    'settings' => array(
      'default_value' => 'blank',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'description_display' => 'before',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'm/d/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'text_parts' => array(),
        'year_range' => '-50:+0',
      ),
      'type' => 'date_select',
      'weight' => 125,
    ),
  );

  // Exported field_instance: 'node-study-field_trial_number_ic'
  $field_instances['node-study-field_trial_number_ic'] = array(
    'bundle' => 'study',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'If available, please provide the trial registration number',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 42,
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
    'field_name' => 'field_trial_number_ic',
    'label' => 'Trial registration number',
    'required' => 0,
    'settings' => array(
      'description_display' => 'before',
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 129,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('1000 genomes Reference Panel');
  t('1000 genomes reference panel');
  t('Actual number of participants recruited to the study');
  t('African / African-American / Black');
  t('Area of residence');
  t('At what date was this number recorded?');
  t('Case definition');
  t('Custom reference panel');
  t('DNA sources');
  t('Date number of participants was recorded');
  t('Dietary measures');
  t('Does the study have DNA extracted or have a potential source of DNA?');
  t('Does the study have any measures of diet?');
  t('Does the study have any measures of physical activity?');
  t('East or South East Asian');
  t('European / White');
  t('Gender');
  t('Genotyping Arrays');
  t('HapMap reference panel');
  t('Health Information');
  t('Hispanic / Latino');
  t('If available, please provide the trial registration number');
  t('If recruitment has finished, when did it end?');
  t('If the study is not completed, what is the total number of participants who have been recruited to the study?');
  t('Indigenous American / American Indian / Native American / Alaskan Native');
  t('Indigenous Australian / Aboriginal Australian');
  t('Individual/family based study');
  t('Intervention type');
  t('Is recruitment continuing?');
  t('List of arrays');
  t('Middle Eastern');
  t('Migration status');
  t('Native Hawaiian or Other Pacific Islander');
  t('Newborn');
  t('Other 1000 genomes reference panel');
  t('Other HapMap reference panel');
  t('Other arrays');
  t('Other case definition');
  t('Other group');
  t('Other intervention type');
  t('Other study design');
  t('Other type of people');
  t('Other types of diabetes');
  t('Physical activity measures');
  t('Please indicate the approximate percentage of participants that are of Hispanic or Latino origin');
  t('Please select each 1000 genomes reference panel that has been used for genotyping your population. To add more reference panels, click the Add Another Item button below');
  t('Please specify the case definition of the study');
  t('Please specify the other 1000 Genomes reference panel');
  t('Please specify the other case definition');
  t('Please specify the other groups here');
  t('Please specify the other intervention types');
  t('Please specify the other study design');
  t('Please specify the other type of people targeted by the study design');
  t('Please specify the other types of diabetes');
  t('Pregnant women');
  t('Proportion of individuals');
  t('Recruitment end date');
  t('Recruitment start date');
  t('Reference Panels');
  t('Release Date');
  t('Release date');
  t('Select general study design. You may select only one design, which should be the design that defined recruitment.');
  t('Select the type of people targeted by the study design.');
  t('South Asian / Indian Subcontinent');
  t('Study Design');
  t('Trial registration number');
  t('What type of intervention is being investigated?');
  t('When did recruitment start?');
  t('dummy_ic');

  return $field_instances;
}
