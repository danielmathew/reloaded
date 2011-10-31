<?php
/**
 * @file
 * reloaded_misc.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function reloaded_misc_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'nodequeue_1';
  $view->description = 'Display a list of all nodes in queue \'Referencer forside\'';
  $view->tag = 'nodequeue';
  $view->base_table = 'node';
  $view->human_name = '';
  $view->core = 0;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Queue \'Referencer forside\'';
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = 1;
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = TRUE;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'referencer_forside' => 'referencer_forside',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: small img 206x181 */
  $handler->display->display_options['fields']['field_small_img']['id'] = 'field_small_img';
  $handler->display->display_options['fields']['field_small_img']['table'] = 'field_data_field_small_img';
  $handler->display->display_options['fields']['field_small_img']['field'] = 'field_small_img';
  /* Sort criterion: Nodequeue: Position */
  $handler->display->display_options['sorts']['position']['id'] = 'position';
  $handler->display->display_options['sorts']['position']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['sorts']['position']['field'] = 'position';
  $handler->display->display_options['sorts']['position']['relationship'] = 'nodequeue_rel';
  /* Filter criterion: Content: Published or admin */
  $handler->display->display_options['filters']['status_extra']['id'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['table'] = 'node';
  $handler->display->display_options['filters']['status_extra']['field'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['group'] = 0;
  $handler->display->display_options['filters']['status_extra']['expose']['operator'] = FALSE;

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'front-ref-list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: small img 206x181 */
  $handler->display->display_options['fields']['field_small_img']['id'] = 'field_small_img';
  $handler->display->display_options['fields']['field_small_img']['table'] = 'field_data_field_small_img';
  $handler->display->display_options['fields']['field_small_img']['field'] = 'field_small_img';
  $handler->display->display_options['fields']['field_small_img']['label'] = '';
  $handler->display->display_options['fields']['field_small_img']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_small_img']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_small_img']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_small_img']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_small_img']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_small_img']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_small_img']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_small_img']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_small_img']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_small_img']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_small_img']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_small_img']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_small_img']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_small_img']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_small_img']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_small_img']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_small_img']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_small_img']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_small_img']['settings'] = array(
    'image_style' => '206x181',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_small_img']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $export['nodequeue_1'] = $view;

  return $export;
}
