<?php
/**
 * @file
 * interconnect_studies.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function interconnect_studies_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create field_1000_genomes_ref_pan_ic'.
  $permissions['create field_1000_genomes_ref_pan_ic'] = array(
    'name' => 'create field_1000_genomes_ref_pan_ic',
    'roles' => array(
      'administrator' => 'administrator',
      'consortium administrator' => 'consortium administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_custom_ref_panels_ic'.
  $permissions['create field_custom_ref_panels_ic'] = array(
    'name' => 'create field_custom_ref_panels_ic',
    'roles' => array(
      'administrator' => 'administrator',
      'consortium administrator' => 'consortium administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_genotyping_arrays_ic'.
  $permissions['create field_genotyping_arrays_ic'] = array(
    'name' => 'create field_genotyping_arrays_ic',
    'roles' => array(
      'administrator' => 'administrator',
      'consortium administrator' => 'consortium administrator',
      'study reviewer' => 'study reviewer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_hapmap_ref_panel_ic'.
  $permissions['create field_hapmap_ref_panel_ic'] = array(
    'name' => 'create field_hapmap_ref_panel_ic',
    'roles' => array(
      'administrator' => 'administrator',
      'consortium administrator' => 'consortium administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_1000_genomes_ref_pan_ic'.
  $permissions['edit field_1000_genomes_ref_pan_ic'] = array(
    'name' => 'edit field_1000_genomes_ref_pan_ic',
    'roles' => array(
      'administrator' => 'administrator',
      'consortium administrator' => 'consortium administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_custom_ref_panels_ic'.
  $permissions['edit field_custom_ref_panels_ic'] = array(
    'name' => 'edit field_custom_ref_panels_ic',
    'roles' => array(
      'administrator' => 'administrator',
      'consortium administrator' => 'consortium administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_genotyping_arrays_ic'.
  $permissions['edit field_genotyping_arrays_ic'] = array(
    'name' => 'edit field_genotyping_arrays_ic',
    'roles' => array(
      'administrator' => 'administrator',
      'consortium administrator' => 'consortium administrator',
      'study reviewer' => 'study reviewer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_hapmap_ref_panel_ic'.
  $permissions['edit field_hapmap_ref_panel_ic'] = array(
    'name' => 'edit field_hapmap_ref_panel_ic',
    'roles' => array(
      'administrator' => 'administrator',
      'consortium administrator' => 'consortium administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_1000_genomes_ref_pan_ic'.
  $permissions['edit own field_1000_genomes_ref_pan_ic'] = array(
    'name' => 'edit own field_1000_genomes_ref_pan_ic',
    'roles' => array(
      'administrator' => 'administrator',
      'consortium administrator' => 'consortium administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_custom_ref_panels_ic'.
  $permissions['edit own field_custom_ref_panels_ic'] = array(
    'name' => 'edit own field_custom_ref_panels_ic',
    'roles' => array(
      'administrator' => 'administrator',
      'consortium administrator' => 'consortium administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_genotyping_arrays_ic'.
  $permissions['edit own field_genotyping_arrays_ic'] = array(
    'name' => 'edit own field_genotyping_arrays_ic',
    'roles' => array(
      'administrator' => 'administrator',
      'consortium administrator' => 'consortium administrator',
      'study reviewer' => 'study reviewer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_hapmap_ref_panel_ic'.
  $permissions['edit own field_hapmap_ref_panel_ic'] = array(
    'name' => 'edit own field_hapmap_ref_panel_ic',
    'roles' => array(
      'administrator' => 'administrator',
      'consortium administrator' => 'consortium administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_1000_genomes_ref_pan_ic'.
  $permissions['view field_1000_genomes_ref_pan_ic'] = array(
    'name' => 'view field_1000_genomes_ref_pan_ic',
    'roles' => array(
      'administrator' => 'administrator',
      'consortium administrator' => 'consortium administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_custom_ref_panels_ic'.
  $permissions['view field_custom_ref_panels_ic'] = array(
    'name' => 'view field_custom_ref_panels_ic',
    'roles' => array(
      'administrator' => 'administrator',
      'consortium administrator' => 'consortium administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_genotyping_arrays_ic'.
  $permissions['view field_genotyping_arrays_ic'] = array(
    'name' => 'view field_genotyping_arrays_ic',
    'roles' => array(
      'administrator' => 'administrator',
      'consortium administrator' => 'consortium administrator',
      'study reviewer' => 'study reviewer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_hapmap_ref_panel_ic'.
  $permissions['view field_hapmap_ref_panel_ic'] = array(
    'name' => 'view field_hapmap_ref_panel_ic',
    'roles' => array(
      'administrator' => 'administrator',
      'consortium administrator' => 'consortium administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_1000_genomes_ref_pan_ic'.
  $permissions['view own field_1000_genomes_ref_pan_ic'] = array(
    'name' => 'view own field_1000_genomes_ref_pan_ic',
    'roles' => array(
      'administrator' => 'administrator',
      'consortium administrator' => 'consortium administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_custom_ref_panels_ic'.
  $permissions['view own field_custom_ref_panels_ic'] = array(
    'name' => 'view own field_custom_ref_panels_ic',
    'roles' => array(
      'administrator' => 'administrator',
      'consortium administrator' => 'consortium administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_genotyping_arrays_ic'.
  $permissions['view own field_genotyping_arrays_ic'] = array(
    'name' => 'view own field_genotyping_arrays_ic',
    'roles' => array(
      'administrator' => 'administrator',
      'consortium administrator' => 'consortium administrator',
      'study reviewer' => 'study reviewer',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_hapmap_ref_panel_ic'.
  $permissions['view own field_hapmap_ref_panel_ic'] = array(
    'name' => 'view own field_hapmap_ref_panel_ic',
    'roles' => array(
      'administrator' => 'administrator',
      'consortium administrator' => 'consortium administrator',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
