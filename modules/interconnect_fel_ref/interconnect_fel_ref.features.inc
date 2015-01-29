<?php
/**
 * @file
 * interconnect_fel_ref.features.inc
 */

/**
 * Implements hook_field_default_field_instances_alter().
 */
function interconnect_fel_ref_field_default_field_instances_alter(&$data) {
	
	if (isset($data['node-population-field_pop_country'])) {
		$data['node-population-field_pop_country']['settings'] = array(
		   'description_display' => 'before',
		   'user_register_form' => FALSE,
		 ); /* WAS: '' */
	}
	
	if (isset($data['node-population-field_pop_health_status'])) {
		$data['node-population-field_pop_health_status']['settings'] = array(
		  'description_display' => 'before',
		  'text_processing' => 0,
		  'user_register_form' => FALSE,
		); /* WAS: '' */
	}
	
	if (isset($data['node-population-field_pop_selection_others_sp'])) {
		$data['node-population-field_pop_selection_others_sp']['settings'] = array(
		  'description_display' => 'before',
		  'text_processing' => 1,
		  'user_register_form' => FALSE,
		); /* WAS: '' */
	}
	
	if (isset($data['node-population-field_pop_src_recruit'])) {
		$data['node-study-field_pop_src_recruit']['settings'] = array(
		  'description_display' => 'before',
		  'user_register_form' => FALSE,
		);/* WAS: '' */
	}

	if (isset($data['node-study-field_acroym'])) {	
		$data['node-study-field_acroym']['settings'] = array(
		'description_display' => 'before',
		'text_processing' => 0,
		'user_register_form' => FALSE,
    ); /* WAS: '' */
	}

	if (isset($data['node-study-field_marker_paper'])) {
		$data['node-study-field_marker_paper']['settings'] = array(
		  'description_display' => 'before',
		  'text_processing' => 0,
		  'user_register_form' => FALSE,
		);/* WAS: '' */
	}

	if (isset($data['node-study-field_pubmedid'])) {	
			$data['node-study-field_pubmedid']['settings'] = array(
		  'description_display' => 'before',
		  'text_processing' => 0,
		  'user_register_form' => FALSE,
		);/* WAS: '' */
	}

	if (isset($data['node-study-title_field'])) {	
	    $data['node-study-title_field']['settings'] = array(
		  'description_display' => 'before',
		  'text_processing' => 0,
		  'user_register_form' => FALSE,
		); /* WAS: '' */
	}
	
	if (isset($data['node-study-field_website'])) {	
	    $data['node-study-field_website']['settings'] = array(
		  'description_display' => 'before',
		  'text_processing' => 0,
		  'user_register_form' => FALSE,
		); /* WAS: '' */
	}
	
  if (isset($data['node-study-field_contacts_ref'])) {
	$data['node-study-field_contacts_ref']['settings'] = array(
      'description_display' => 'before',
      'user_register_form' => FALSE,
	);/* WAS: '' */
    $data['node-study-field_contacts_ref']['widget']['module'] = 'node_reference'; /* WAS: 'noderefcreate' */
    $data['node-study-field_contacts_ref']['widget']['settings'] = array(
      'autocomplete_match' => 'contains',
      'autocomplete_path' => 'node_reference/autocomplete',
      'references_dialog_add' => 1,
      'references_dialog_edit' => 1,
      'references_dialog_search' => 0,
      'references_dialog_search_view' => '',
      'size' => 60,
    ); /* WAS: '' */
    $data['node-study-field_contacts_ref']['widget']['type'] = 'node_reference_autocomplete'; /* WAS: 'noderefcreate_autocomplete' */
  }
  if (isset($data['node-study-field_study_populations'])) {
    $data['node-study-field_study_populations']['widget']['module'] = 'node_reference'; /* WAS: 'noderefcreate' */
	$data['node-study-field_study_populations']['widget']['settings'] = array(
      'autocomplete_match' => 'contains',
      'autocomplete_path' => 'node_reference/autocomplete',
      'references_dialog_add' => 1,
      'references_dialog_edit' => 1,
      'references_dialog_search' => 0,
      'references_dialog_search_view' => '',
      'size' => 60,
    ); /* WAS: '' */
	$data['node-study-field_study_populations']['widget']['type'] = 'node_reference_autocomplete'; /* WAS: 'noderefcreate_autocomplete' */
  }

}