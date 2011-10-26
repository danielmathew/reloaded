<?php
/**
 * @file
 * reloaded_reference.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function reloaded_reference_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: navigation:referencer
  $menu_links['navigation:referencer'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'referencer',
    'router_path' => 'referencer',
    'link_title' => 'referencer',
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
  t('referencer');


  return $menu_links;
}
