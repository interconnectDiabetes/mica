

<?php
/**
 * Diff field callback for parsing phone field comparative values.
 */
	
	
function interconnect_studies_entity_diff($old_entity, $new_entity, $context) {
	
	function multi_implode($array, $glue) {
    $ret = '';

    foreach ($array as $item) {
        if (is_array($item)) {
            $ret .= multi_implode($item, $glue) . $glue;
        } else {
            $ret .= $item . $glue;
        }
    }

    $ret = substr($ret, 0, 0-strlen($glue));

    return $ret;
}
	
	$nid = $new_entity -> nid;

  if ($context['entity_type'] == 'node') {
	
	$lang = $new_entity -> language;

	foreach ($new_entity as $key => $value){
		
		$new = NULL;
		$old = NULL;
		$title = NULL;
		$new_field = NULL;
		$old_field = NULL;
		
		$new = field_view_field('node',$new_entity,$key);
		$old = field_view_field('node',$old_entity,$key);
		
		$new_field = $new_entity ->$key;
		$old_field = $old_entity ->$key;
		
		$new_test = !empty($new_field)&&is_array($new_field);
		$old_test = !empty($old_field)&&is_array($old_field);		
		
		
		//need to deal with populations, plots, contacts etc that don't have value
		//need to deal with fields that have multiple values
		
		 if (($new_test||$old_test)&&($key!='path'&&$key!='workbench_moderation'&&$key!='rdf_mapping'
			&&$new['#field_type']!='file'&&$new['#field_type']!='node_reference'))
		{
			
			if ($new_test) {
				
				$title = $new['#title'];
				$new_val = $new_field[$lang]['0'];
				
				$test_new = multi_implode($new_field[$lang],", ");

				
			}
			else {
				
				$new_val = NULL;
			}
			
			if ($old_test) {
				$title = $old['#title'];				
				$old_val = $old_field[$lang]['0'];
				
				$test_old = multi_implode($old_field[$lang],", ");
				
			}
			else {
				
				$old_val = NULL;
			}
		
			$result[$key] = array(
			'#name' => $title, 
			// '#old' => array($old_val['value']), 
			// '#new' => array($new_val['value']),
			'#old' => array($test_new), 
			'#new' => array($test_old),			
			'#weight' => -5, 
			'#settings' => array(
			'show_header' => TRUE,
				),
			);

		}
		
	}

  }

  return $result;
}


?>