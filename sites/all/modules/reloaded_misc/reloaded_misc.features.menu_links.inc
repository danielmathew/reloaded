<?php
/**
 * @file
 * reloaded_misc.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function reloaded_misc_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:frontpage
  $menu_links['main-menu:frontpage'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'frontpage',
    'router_path' => 'frontpage',
    'link_title' => 'Forside',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
  );
  // Exported menu link: main-menu:kontakt-os
  $menu_links['main-menu:kontakt-os'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'kontakt-os',
    'router_path' => 'kontakt-os',
    'link_title' => 'Kontakt Os',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: main-menu:node/17
  $menu_links['main-menu:node/17'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/17',
    'router_path' => 'node/%',
    'link_title' => 'ding.ting',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: main-menu:om-reload
  $menu_links['main-menu:om-reload'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'om-reload',
    'router_path' => 'om-reload',
    'link_title' => 'Om reload',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
  );
  // Exported menu link: main-menu:referencer
  $menu_links['main-menu:referencer'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'referencer',
    'router_path' => 'referencer',
    'link_title' => 'Referencer',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
  );
  // Exported menu link: menu-foot-menu:frontpage
  $menu_links['menu-foot-menu:frontpage'] = array(
    'menu_name' => 'menu-foot-menu',
    'link_path' => 'frontpage',
    'router_path' => 'frontpage',
    'link_title' => 'Jobs I Reload',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '-50',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Forside');
  t('Jobs I Reload');
  t('Kontakt Os');
  t('Om reload');
  t('Referencer');
  t('ding.ting');


  return $menu_links;
}
