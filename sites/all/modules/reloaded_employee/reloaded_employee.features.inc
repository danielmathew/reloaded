<?php
/**
 * @file
 * reloaded_employee.features.inc
 */

/**
 * Implements hook_views_api().
 */
function reloaded_employee_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}

/**
 * Implements hook_node_info().
 */
function reloaded_employee_node_info() {
  $items = array(
    'employee' => array(
      'name' => t('employee'),
      'base' => 'node_content',
      'description' => t('The different employees at Reload!'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
