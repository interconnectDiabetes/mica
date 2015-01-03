<?php


/**
 * Implements hook_bootstrap_based_theme().
 */
function mica_subtheme_tom_bootstrap_based_theme() {
  return array('mica_subtheme_tom' => TRUE);
}


/**
 * Implements theme_menu_link().
 * This is to customise what appears in the menu bar.
 */

 // function mica_subtheme_tom_menu_link(array $variables) {


  // $element = $variables['element'];
  
  // $sub_menu = '';

  // $element['#attributes']['class'][] = 'menu-' . $element['#original_link']['mlid'];

 
  
  // if ($element['#below']) {
    // $sub_menu = drupal_render($element['#below']);
  // }
  // $output = l($element['#title'], $element['#href'], $element['#localized_options']);

		// return '<li' . drupal_attributes($element['#attributes']) . '>' . $output . $sub_menu . "</li>\n";

// }

