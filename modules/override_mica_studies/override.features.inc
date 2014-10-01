<?php
/**
 * @file
 * override.features.inc
 */



/**
 * Implements hook_ctools_plugin_api().
 */
function override_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
  dpm("I got called");
    return array("version" => "1");
  }
}

 
function override_field_default_field_instances_alter(&$data) {
  if (isset($data['node-study-body'])) {
    $data['node-study-body']['required'] = 0; /* WAS: 1 */
  }
}



