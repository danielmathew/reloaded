<?php
/**
 * @file
 * reloaded_misc.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function reloaded_misc_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: main-menu
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Main menu',
    'description' => 'The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.',
  );
  // Exported menu: menu-foot-menu
  $menus['menu-foot-menu'] = array(
    'menu_name' => 'menu-foot-menu',
    'title' => 'foot menu',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Main menu');
  t('The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.');
  t('foot menu');


  return $menus;
}
