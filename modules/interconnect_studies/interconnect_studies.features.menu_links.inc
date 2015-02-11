<?php
/**
 * @file
 * interconnect_studies.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function interconnect_studies_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_news:news
  $menu_links['main-menu_news:news'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'news',
    'router_path' => 'news',
    'link_title' => 'News',
    'options' => array(
      'identifier' => 'main-menu_news:news',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 10,
    'customized' => 1,
    'parent_identifier' => 'main-menu_community:node/5',
  );
  // Exported menu link: main-menu_return-to-project-site:http://www.interconnect-diabetes.eu/
  $menu_links['main-menu_return-to-project-site:http://www.interconnect-diabetes.eu/'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://www.interconnect-diabetes.eu/',
    'router_path' => '',
    'link_title' => 'Return to project site',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_return-to-project-site:http://www.interconnect-diabetes.eu/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('News');
  t('Return to project site');


  return $menu_links;
}
