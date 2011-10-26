<?php
/**
 * @file
 * reloaded_employee.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function reloaded_employee_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: navigation:om-reload
  $menu_links['navigation:om-reload'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'om-reload',
    'router_path' => 'om-reload',
    'link_title' => 'Om reload',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Om reload');


  return $menu_links;
}
