<?php

function _interconnect_studies_block_study_general_info($study) {
  // $study can be the study nid
	if (is_numeric($study)) {
		$study = node_load($study);
	}
	$weight = 0;
	$content = array(
		field_view_field('node', $study, 'title_field', array('label' => 'inline', 'weight' => ++$weight)),
		field_view_field('node', $study, 'field_acroym', array('label' => 'inline', 'weight' => ++$weight)),
		field_view_field('node', $study, 'field_contacts_ref', array('label' => 'inline', 'weight' => ++$weight)),
		field_view_field('node', $study, 'field_marker_paper', array('label' => 'inline', 'weight' => ++$weight)),
		field_view_field('node', $study, 'field_pubmedid', array(
			'label' => 'inline',
			'type' => 'mica_pubmed_url',
			'weight' => ++$weight
		)
    ),
    field_view_field('node', $study, 'field_website', array('label' => 'inline', 'weight' => ++$weight)),
	);
	return array(
		'subject' => t('General Information') . '<a name="general-info"> </a>',
		'content' => array_filter($content),
	);
}

function _interconnect_studies_block_study_methods($study) {
  // $study can be the study nid
	if (is_numeric($study)) {
		$study = node_load($study);
	}
	$weight = 0;
	$wrapper = entity_metadata_wrapper('node', $study);
	$content = array();
	$content[] = _interconnect_studies_block_study_methods_field_design($wrapper, ++$weight);
	$content[] = field_view_field('node', $study, 'field_trial_number_ic', array('label' => 'inline', 'weight' => ++$weight));
	$content[] = _interconnect_studies_block_study_methods_intervention($wrapper, ++$weight);
	$content[] = _interconnect_studies_block_study_methods_case($wrapper, ++$weight);
	$content[] = field_view_field('node', $study, 'field_recruit_start_ic', array('label' => 'inline', 'weight' => ++$weight));
	$content[] = field_view_field('node', $study, 'field_recruit_cont_ic', array('label' => 'inline', 'weight' => ++$weight));
	$content[] = field_view_field('node', $study, 'field_recruit_end_ic', array('label' => 'inline', 'weight' => ++$weight));
	$content[] = _interconnect_studies_block_study_methods_family($wrapper, ++$weight);
	$content[] = _interconnect_studies_block_study_general_design_field_nb_participants($wrapper, ++$weight);
	$content[] = _interconnect_studies_block_study_general_design_field_act_participants($wrapper, ++$weight);

	return array(
		'subject' => t('Methods') . '<a name="methods"> </a>',
		'content' => array_filter($content),
	);
}

function _interconnect_studies_block_study_ethnicity($study) {
  // $study can be the study nid
  if (is_numeric($study)) {
    $study = node_load($study);
  }

  $weight = 0;
  $wrapper = entity_metadata_wrapper('node', $study);
  $content = array(
	_interconnect_studies_block_eth_his_lat($study, $weight),
	array('#markup' => 'Approximate percentage of participants in each main group represented in the study:',
	'#prefix' => '<br><b><u>',
	'#suffix' => '</u></b>',
	'#weight' => ++$weight),
	field_view_field('node', $study, 'field_race_african_ic', array('label' => 'inline', 'weight' => ++$weight)),
	field_view_field('node', $study, 'field_race_e_asian_ic', array('label' => 'inline', 'weight' => ++$weight)),
	field_view_field('node', $study, 'field_race_s_asian_ic', array('label' => 'inline', 'weight' => ++$weight)),
	field_view_field('node', $study, 'field_race_euro_ic', array('label' => 'inline', 'weight' => ++$weight)),
	field_view_field('node', $study, 'field_race_indig_am_ic', array('label' => 'inline', 'weight' => ++$weight)),
	field_view_field('node', $study, 'field_race_indig_aus_ic', array('label' => 'inline', 'weight' => ++$weight)),
	field_view_field('node', $study, 'field_race_indig_pac_ic', array('label' => 'inline', 'weight' => ++$weight)),
	field_view_field('node', $study, 'field_race_mid_e_ic', array('label' => 'inline', 'weight' => ++$weight)),	
  );
  $content[] = _interconnect_studies_block_ethnicity_field_other($wrapper, ++$weight);
  $content = array_merge($content, _interconnect_studies_block_genotype($study, ++$weight));
  
  return array(
    'subject' => t('Broad categories of ethnic and racial groups recruited') . '<a name="ethnicity-info"> </a>',
    'content' => array_filter($content),
  );
}

function _interconnect_studies_block_available_info($study) {
  // $study can be the study nid
  if (is_numeric($study)) {
    $study = node_load($study);
  }

  $weight = 0;

  $wrapper = entity_metadata_wrapper('node', $study);
  $content = array();
  $content[] = _interconnect_studies_block_study_available_info_field_health($wrapper, ++$weight);
  $content[] = field_view_field('node', $study, 'field_measure_diet_ic', array(
    'label' => 'inline',
    'weight' => ++$weight,
    'type' => module_exists('i18n') ? 'i18n_text' : 'text'
  ));
  $content[] = field_view_field('node', $study, 'field_measure_pa_ic', array(
    'label' => 'inline',
    'weight' => ++$weight,
    'type' => module_exists('i18n') ? 'i18n_text_log' : 'text_long',

  ));
  $content[] = field_view_field('node', $study, 'field_dna_ic', array(
    'label' => 'inline',
    'weight' => ++$weight,
    'type' => module_exists('i18n') ? 'i18n_text_log' : 'text_long',

  ));
  return array(
    'subject' => t('Available Information') . '<a name="available-information"> </a>',
    'content' => array_filter($content),
  );
}

function _interconnect_studies_block_study_populations($study, $show_draft) {
  $content = array();
  global $language;
    $weight = 0;
  // $content = array(
  // field_view_field('node', $study, 'field_study_populations', array('label' => 'inline', 'weight' => ++$weight)),
  // );
  // Load the populations that are attached to PUBLISHED version of study
  if ($show_draft) {
    $study = node_load($study->nid);
  }

  foreach (_mica_studies_sort_populations($study) as $index_pop => $population_nid) {
    $pop = node_load($population_nid);
    if (node_access('view', $pop)) {

      if ($show_draft) {
        $latest = key(node_revision_list($pop));
        $pop = node_load($population_nid, $latest);
        if (!isset($pop->workbench_moderation['published']) || $pop->vid !== $pop->workbench_moderation['published']->vid) {
          $content[$index_pop]['body']['#markup'] = "<div class='node-unpublished'>";
          $content[$index_pop] = node_view($pop, 'full',$language->language);
		  // By commenting out this line the population gets displayed on the study page, not sure why
          //$content[$index_pop]['body']['#markup'] = "</div>";
        }
        else {
          $content[$index_pop] = node_view($pop, 'full');
        }
      }
      else if ($show_draft || (isset($pop->workbench_moderation['published']) && $pop->vid == $pop->workbench_moderation['published']->vid)) {
        $content[$index_pop] = node_view($pop, 'full');
      }

		// hack because single value checkboxes don't format correctly in render array (new born, migration status etc.)
	  // if (isset($content[$index_pop]['field_pop_migration_ic'])) {
		  // if ($content[$index_pop]['field_pop_migration_ic']['#items'][0]['value'] = '1') {
			// $content[$index_pop]['field_pop_migration_ic'][0]['#markup'] = 'Yes';
		  // }
		  // else {
			// $content[$index_pop]['field_pop_migration_ic'][0]['#markup'] = 'No';			
		  // }
		// }
	  // if (isset($content[$index_pop]['field_pop_newborn_ic'])) {
		  // if ($content[$index_pop]['field_pop_newborn_ic']['#items'][0]['value'] = '1') {
			// $content[$index_pop]['field_pop_newborn_ic'][0]['#markup'] = 'Yes';
		  // }
		  // else {
			// $content[$index_pop]['field_pop_newborn_ic'][0]['#markup'] = 'No';			
		  // }
		// }		
	  // if (isset($content[$index_pop]['field_pop_pregnancy_ic'])) {
		  // if ($content[$index_pop]['field_pop_pregnancy_ic']['#items'][0]['value'] = '1') { 
		  // dpm($content[$index_pop]['field_pop_pregnancy_ic'][0]['#markup']);
			// $content[$index_pop]['field_pop_pregnancy_ic'][0]['#markup'] = 'Yes';
		  // }
		  // else {
			// $content[$index_pop]['field_pop_pregnancy_ic'][0]['#markup'] = 'No';			
		  // }
		// }
	}
  }
  return array(
    'subject' => t('Populations from which the sample(s) is drawn') . '<a name="populations"> </a>',
    'content' => array_filter($content),
  );
}

function _interconnect_studies_block_study_available_info_field_health($study_wrapper, $weight) {
  $field_view = field_view_field('node', $study_wrapper->value(), 'field_health_info_ic', array(
    'label' => 'inline',
    'weight' => $weight,
    'type' => module_exists('i18n') ? 'i18n_list_default' : 'list_default',
  ));
  $design = $study_wrapper->field_health_info_ic->value();
  $other_sp = $study_wrapper->field_hi_other_diabetes_ic->value();
  if (in_array('OD_p', $design) && !empty($other_sp)) {
    $design_other_sp_view = field_view_field('node', $study_wrapper->value(), 'field_hi_other_diabetes_ic');
    $label = '<span class="other-sub-title">' . $field_view[count($design) - 2]['#markup'] . ': </span>';
    $field_view[count($design) - 2]['#markup'] = $label . '<span class="other-sub-value">' . $design_other_sp_view[0]['#markup'] . '</span>';
  }
  if (in_array('OD_i', $design) && !empty($other_sp)) {
    $design_other_sp_view = field_view_field('node', $study_wrapper->value(), 'field_hi_other_diabetes_ic');
    $label = '<span class="other-sub-title">' . $field_view[count($design) - 1]['#markup'] . ': </span>';
    $field_view[count($design) - 1]['#markup'] = $label . '<span class="other-sub-value">' . $design_other_sp_view[0]['#markup'] . '</span>';
  }
  return $field_view;
}


function _interconnect_studies_block_study_methods_field_design($study_wrapper, $weight) {
  $field_view = field_view_field('node', $study_wrapper->value(), 'field_design_ic', array(
    'label' => 'inline',
    'weight' => $weight,
    'type' => module_exists('i18n') ? 'i18n_list_default' : 'list_default',
  ));
  $design = $study_wrapper->field_design_ic->value();
  $other_sp = $study_wrapper->field_design_other_ic->value();
  if ($design =='other' && !empty($other_sp)) {
    $design_other_sp_view = field_view_field('node', $study_wrapper->value(), 'field_design_other_ic');
    $label = '<span class="other-sub-title">' . $field_view[count($design) - 1]['#markup'] . ': </span>';
    $field_view[count($design) - 1]['#markup'] = $label . '<span class="other-sub-value">' . $design_other_sp_view[0]['#markup'] . '</span>';
  }

  return $field_view;
}

function _interconnect_studies_block_study_methods_intervention($study_wrapper, $weight) {
  $field_view = field_view_field('node', $study_wrapper->value(), 'field_interv_type_ic', array(
    'label' => 'inline',
    'weight' => $weight,
    'type' => module_exists('i18n') ? 'i18n_list_default' : 'list_default',
  ));
  $design = $study_wrapper->field_interv_type_ic->value();
  $other_sp = $study_wrapper->field_interv_other_ic->value();
  if ($design =='other' && !empty($other_sp)) {
    $design_other_sp_view = field_view_field('node', $study_wrapper->value(), 'field_interv_other_ic');
    $label = '<span class="other-sub-title">' . $field_view[count($design) - 1]['#markup'] . ': </span>';
    $field_view[count($design) - 1]['#markup'] = $label . '<span class="other-sub-value">' . $design_other_sp_view[0]['#markup'] . '</span>';
  }

  return $field_view;
}

function _interconnect_studies_block_study_methods_case($study_wrapper, $weight) {
  $field_view = field_view_field('node', $study_wrapper->value(), 'field_case_definition_ic', array(
    'label' => 'inline',
    'weight' => $weight,
    'type' => module_exists('i18n') ? 'i18n_list_default' : 'list_default',
  ));
  $design = $study_wrapper->field_case_definition_ic->value();
  $other_sp = $study_wrapper->field_other_case_ic->value();
  if ($design =='other' && !empty($other_sp)) {
    $design_other_sp_view = field_view_field('node', $study_wrapper->value(), 'field_other_case_ic');
    $label = '<span class="other-sub-title">' . $field_view[count($design) - 1]['#markup'] . ': </span>';
    $field_view[count($design) - 1]['#markup'] = $label . '<span class="other-sub-value">' . $design_other_sp_view[0]['#markup'] . '</span>';
  }

  return $field_view;
}

function _interconnect_studies_block_study_methods_family($study_wrapper, $weight) {
  $field_view = field_view_field('node', $study_wrapper->value(), 'field_family_ic', array(
    'label' => 'inline',
    'weight' => $weight,
    'type' => module_exists('i18n') ? 'i18n_list_default' : 'list_default',
  ));
  $design = $study_wrapper->field_family_ic->value();
  $other_sp = $study_wrapper->field_family_other_ic->value();
  if ($design =='other' && !empty($other_sp)) {
    $design_other_sp_view = field_view_field('node', $study_wrapper->value(), 'field_family_other_ic');
    $label = '<span class="other-sub-title">' . $field_view[count($design) - 1]['#markup'] . ': </span>';
    $field_view[count($design) - 1]['#markup'] = $label . '<span class="other-sub-value">' . $design_other_sp_view[0]['#markup'] . '</span>';
  }
  $field_view['#title'] = 'Type of people targeted by the study design';
  return $field_view;
}

function _interconnect_studies_block_study_general_design_field_nb_participants($study_wrapper, $weight) {
  $field = array(
    '#theme' => 'field',
    '#weight' => $weight,
    '#title' => t('Target number of participants to be recruited to the study'),
    '#label_display' => 'inline',
    '#field_type' => 'text',
    '#formatter' => 'text_default',
    '#field_name' => 'field_target_number_participants',
    '#bundle' => 'study',
    '#entity_type' => 'node',
    '#items' => array(),
  );

  $target_number = $study_wrapper->field_target_number_participants->value();
  if (!empty($target_number)) {
    $field['#items'][] = number_format($target_number, 0, '.', ' ');
    $field[]['#markup'] = number_format($target_number, 0, '.', ' ');
  }

  $no_limits = $study_wrapper->field_no_limits_participants->value();
  if ($no_limits) {
    $field['#items'][] = t('No limit');
    $field[]['#markup'] = t('No limit');
  }

  return empty($field['#items']) ? NULL : $field;
}

function _interconnect_studies_block_study_general_design_field_act_participants($study_wrapper, $weight) {
  $field = array(
    '#theme' => 'field',
    '#weight' => $weight,
    '#title' => t('Actual number of participants recruited to the study'),
    '#label_display' => 'inline',
    '#field_type' => 'text',
    '#formatter' => 'text_default',
    '#field_name' => 'field_number_of_participants_ic',
    '#bundle' => 'study',
    '#entity_type' => 'node',
    '#items' => array(),
  );

  $actual_number = $study_wrapper->field_number_of_participants_ic->value();
  if (!empty($actual_number)) {
    $field['#items'][] = number_format($actual_number, 0, '.', ' ');
    $field[]['#markup'] = number_format($actual_number, 0, '.', ' ');
  }

  $date = $study_wrapper->field_participants_date_ic->value();
  
  if ($date) {
    $field['#items'][] = t(' recorded on ') . format_date($date,'custom','M Y');
    $field[]['#markup'] = t(' recorded on ') . format_date($date,'custom','M Y');
  }

  return empty($field['#items']) ? NULL : $field;
}

function _interconnect_studies_block_ethnicity_field_other($study_wrapper, $weight) {
  $field = array(
    '#theme' => 'field',
    '#weight' => $weight,
    '#title' => t('Other group'),
    '#label_display' => 'inline',
    '#field_type' => 'text',
    '#formatter' => 'text_default',
    '#field_name' => 'field_race_other_ic',
    '#bundle' => 'study',
    '#entity_type' => 'node',
    '#items' => array(),
  );

  $other_group = $study_wrapper->field_race_other_text_ic->value();
  $other_number = $study_wrapper->field_race_other_ic->value();
  if (!empty($other_number)) {
    $field['#items'][] = (!empty($other_group)?'('.$other_group.') ':'').number_format($other_number, 0, '.', ' ');
    $field[]['#markup'] = (!empty($other_group)?'('.$other_group.') ':'').number_format($other_number, 0, '.', ' ');
  }

  return empty($field['#items']) ? NULL : $field;
}

function _interconnect_studies_block_europe(){
  $block = array();
      $block['subject'] = NULL;
      $block['content'] = 
	'<div class="span10">
	<p style="float: left;">
		<img style="margin-top: -15px;margin-left: -20px;margin-right: 10px" alt="EU" src="/sites/all/themes/mica_subtheme_tom/img/EU.jpg" height="65" width="95">
	</p>
	<p> This project is funded by the European Union’s Seventh Framework Programme for research, technological development and demonstration under grant agreement no 602068.</p></div>
				'
	   ;
      return $block;
}

function _interconnect_studies_block_eth_his_lat($study, $weight){
	$field = field_view_field('node', $study, 'field_eth_his_lat_ic', array('label' => 'inline', 'weight' => $weight));
	$field['#title'] = 'Approximate percentage of participants that are of Hispanic or Latino origin';
	return empty($field['#items']) ? NULL : $field;
}

function _interconnect_studies_block_genotype($study, $weight){

	$content = array();
	$content[$weight] = array('#markup' => 'Genotyping information:',
	'#prefix' => '<br><b><u>',
	'#suffix' => '</u></b>',
	'#weight' => $weight);
	$field = field_view_field('node', $study, 'field_genotyping_arrays_ic', array('label' => 'inline', 'weight' => ++$weight));
	empty($field['#items']) ? $content[$weight] = NULL : $content[$weight] = $field;
	$field = field_view_field('node', $study, 'field_hapmap_ref_panel_ic', array('label' => 'inline', 'weight' => ++$weight));
	empty($field['#items']) ? $content[$weight] = NULL : $content[$weight] = $field;
	$field = field_view_field('node', $study, 'field_1000_genomes_ref_pan_ic', array('label' => 'inline', 'weight' => ++$weight));
	empty($field['#items']) ? $content[$weight] = NULL : $content[$weight] = $field;
	$field = field_view_field('node', $study, 'field_custom_ref_panels_ic', array('label' => 'inline', 'weight' => ++$weight));
	empty($field['#items']) ? $content[$weight] = NULL : $content[$weight] = $field;
	return sizeof($content) < 6 ? array() : $content;
}