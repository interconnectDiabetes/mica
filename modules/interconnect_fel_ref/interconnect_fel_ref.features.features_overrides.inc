<?php
/**
 * @file
 * interconnect_fel_ref.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function interconnect_fel_ref_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: field_instance

    $overrides["field_instance.node-population-field_pop_country.settings"] = array(
		'description_display' => 'before',
		'user_register_form' => FALSE,
	);
   
	$overrides["field_instance.node-population-field_pop_health_status.settings"] = array(
		'description_display' => 'before',
		'text_processing' => 0,
		'user_register_form' => FALSE,
	);
   
	$overrides["field_instance.node-population-field_pop_selection_others_sp.settings"] = array(
		'description_display' => 'before',
		'text_processing' => 1,
		'user_register_form' => FALSE,
	);

    $overrides["field_instance.node-population-field_pop_src_recruit.settings"] = array(
		'description_display' => 'before',
		'user_register_form' => FALSE,
	);

	$overrides["field_instance.node-study-field_acroym.settings"] = array(
		'description_display' => 'before',
		'text_processing' => 0,
		'user_register_form' => FALSE,
	);

	$overrides["field_instance.node-study-field_marker_paper.settings"] = array(
		'description_display' => 'before',
		'text_processing' => 0,
		'user_register_form' => FALSE,
	);

    $overrides["field_instance.node-study-field_pubmedid.settings"] = array(
		'description_display' => 'before',
		'text_processing' => 0,
		'user_register_form' => FALSE,
	);
   
	$overrides["field_instance.node-study-title_field.settings"] = array(
		'description_display' => 'before',
		'text_processing' => 0,
		'user_register_form' => FALSE,
	);
	
	$overrides["field_instance.node-study-field_website.settings"] = array(
		'description_display' => 'before',
		'text_processing' => 0,
		'user_register_form' => FALSE,
	);
  
	$overrides["field_instance.node-study-field_contacts_ref.settings"] = array(
		'description_display' => 'before',
		'user_register_form' => FALSE,
	);
  $overrides["field_instance.node-study-field_contacts_ref.widget|module"] = 'node_reference';
  $overrides["field_instance.node-study-field_contacts_ref.widget|settings"] = array(
    'autocomplete_match' => 'contains',
    'autocomplete_path' => 'node_reference/autocomplete',
    'references_dialog_add' => 1,
    'references_dialog_edit' => 1,
    'references_dialog_search' => 0,
    'references_dialog_search_view' => '',
    'size' => 60,
  );
  $overrides["field_instance.node-study-field_contacts_ref.widget|type"] = 'node_reference_autocomplete';
  $overrides["field_instance.node-study-field_study_populations.widget|module"] = 'node_reference';
  $overrides["field_instance.node-study-field_study_populations.widget|settings"] = array(
    'autocomplete_match' => 'contains',
    'autocomplete_path' => 'node_reference/autocomplete',
    'references_dialog_add' => 1,
    'references_dialog_edit' => 1,
    'references_dialog_search' => 0,
    'references_dialog_search_view' => '',
    'size' => 60,
  );
  $overrides["field_instance.node-study-field_study_populations.widget|type"] = 'node_reference_autocomplete';


 return $overrides;
}
