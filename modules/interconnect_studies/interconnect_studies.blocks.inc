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
    'subject' => t('General Information for my study') . '<a name="general-info"> </a>',
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
 $content[] = field_view_field('node', $study, 'field_recruit_end_ic', array('label' => 'inline', 'weight' => ++$weight));
 $content[] = _interconnect_studies_block_study_methods_family($wrapper, ++$weight);
 $content[] = _interconnect_studies_block_study_general_design_field_nb_participants($wrapper, ++$weight); 
 $content[] = field_view_field('node', $study, 'field_number_of_participants_ic', array('label' => 'inline', 'weight' => ++$weight));
 $content[] = field_view_field('node', $study, 'field_participants_date_ic', array('label' => 'inline', 'weight' => ++$weight));
  

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
	field_view_field('node', $study, 'field_eth_his_lat_ic', array('label' => 'inline', 'weight' => ++$weight)),
	field_view_field('node', $study, 'field_race_african_ic', array('label' => 'inline', 'weight' => ++$weight)),
	field_view_field('node', $study, 'field_race_e_asian_ic', array('label' => 'inline', 'weight' => ++$weight)),
	field_view_field('node', $study, 'field_race_s_asian_ic', array('label' => 'inline', 'weight' => ++$weight)),
	field_view_field('node', $study, 'field_race_euro_ic', array('label' => 'inline', 'weight' => ++$weight)),
	field_view_field('node', $study, 'field_race_indig_am_ic', array('label' => 'inline', 'weight' => ++$weight)),
	field_view_field('node', $study, 'field_race_indig_aus_ic', array('label' => 'inline', 'weight' => ++$weight)),
	field_view_field('node', $study, 'field_race_indig_pac_ic', array('label' => 'inline', 'weight' => ++$weight)),
	field_view_field('node', $study, 'field_race_mid_e_ic', array('label' => 'inline', 'weight' => ++$weight)),
	//field_view_field('node', $study, 'field_race_other_ic', array('label' => 'inline', 'weight' => ++$weight)),
	//field_view_field('node', $study, 'field_race_other_text_ic', array('label' => 'inline', 'weight' => ++$weight)),
  );
  $content[] = _interconnect_studies_block_ethnicity_field_other($wrapper, ++$weight);  
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
    'subject' => t('General Design') . '<a name="general-design"> </a>',
    'content' => array_filter($content),
  );
}

function _interconnect_studies_block_study_populations($study, $show_draft) {
  $content = array();
  global $language;

    $weight = 0;
  $content = array(
  field_view_field('node', $study, 'field_study_populations', array('label' => 'inline', 'weight' => ++$weight)),
  );
  
  // Load the populations that are attached to PUBLISHED version of study
  // if ($show_draft) {
    // $study = node_load($study->nid);
  // }

  // foreach (_mica_studies_sort_populations($study) as $index_pop => $population_nid) {
    // $pop = node_load($population_nid);
    // if (node_access('view', $pop)) {

      // if ($show_draft) {
        // $latest = key(node_revision_list($pop));
        // $pop = node_load($population_nid, $latest);

        // if (!isset($pop->workbench_moderation['published']) || $pop->vid !== $pop->workbench_moderation['published']->vid) {
          // $content[$index_pop]['body']['#markup'] = "<div class='node-unpublished'>";
          // $content[$index_pop] = node_view($pop, 'full', $language->language);
          // $content[$index_pop]['body']['#markup'] = "</div>";
        // }
        // else {
          // $content[$index_pop] = node_view($pop, 'full');
        // }
      // }
      // else if ($show_draft || (isset($pop->workbench_moderation['published']) && $pop->vid == $pop->workbench_moderation['published']->vid)) {
        // $content[$index_pop] = node_view($pop, 'full');
      // }
    // }
  // }
  // debug(array(
    // 'subject' => t('Populations from which the sample(s) is drawn') . '<a name="populations"> </a>',
    // 'content' => array_filter($content),
  // ));
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

  return $field_view;
}

function _interconnect_studies_block_study_general_design_field_nb_participants($study_wrapper, $weight) {
  $field = array(
    '#theme' => 'field',
    '#weight' => $weight,
    '#title' => t('Target number of participants'),
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

  // $other_group = $study_wrapper->field_race_other_text_ic->value();
  // if ($other_group) {
    // $field['#items'][] = '('.$other_group.') ';
    // $field[]['#markup'] = '('.$other_group.')';
  // }

  return empty($field['#items']) ? NULL : $field;
}