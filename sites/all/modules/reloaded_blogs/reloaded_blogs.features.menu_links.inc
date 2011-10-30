<?php
/**
 * @file
 * reloaded_blogs.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function reloaded_blogs_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: navigation:blog/%
  $menu_links['navigation:blog/%'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'blog/%',
    'router_path' => 'blog/%',
    'link_title' => 'My blog',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-44',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('My blog');


  return $menu_links;
}
