<?php
/**
 * @file
 * reloaded_reference.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function reloaded_reference_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'reference';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'reference';
  $view->core = 7;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: small img 206x181 */
  $handler->display->display_options['fields']['field_small_img']['id'] = 'field_small_img';
  $handler->display->display_options['fields']['field_small_img']['table'] = 'field_data_field_small_img';
  $handler->display->display_options['fields']['field_small_img']['field'] = 'field_small_img';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'reference' => 'reference',
  );
  /* Filter criterion: Content: Promoted to front page */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';

  /* Display: Udvalgt reference */
  $handler = $view->new_display('panel_pane', 'Udvalgt reference', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Udvalgt case';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Sub title */
  $handler->display->display_options['fields']['field_sub_title']['id'] = 'field_sub_title';
  $handler->display->display_options['fields']['field_sub_title']['table'] = 'field_data_field_sub_title';
  $handler->display->display_options['fields']['field_sub_title']['field'] = 'field_sub_title';
  $handler->display->display_options['fields']['field_sub_title']['label'] = '';
  $handler->display->display_options['fields']['field_sub_title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_sub_title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_sub_title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_sub_title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_sub_title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_sub_title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_sub_title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_sub_title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_sub_title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_sub_title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_sub_title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_sub_title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_sub_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sub_title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_sub_title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_sub_title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_sub_title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_sub_title']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_sub_title']['field_api_classes'] = 0;
  /* Field: Content: Top image 710x270 */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_image']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'large',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_image']['field_api_classes'] = 0;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Field: Content: client */
  $handler->display->display_options['fields']['field_client']['id'] = 'field_client';
  $handler->display->display_options['fields']['field_client']['table'] = 'field_data_field_client';
  $handler->display->display_options['fields']['field_client']['field'] = 'field_client';
  $handler->display->display_options['fields']['field_client']['label'] = 'Kunde';
  $handler->display->display_options['fields']['field_client']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_client']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_client']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_client']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_client']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_client']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_client']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_client']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_client']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_client']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_client']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_client']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_client']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_client']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_client']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_client']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_client']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_client']['field_api_classes'] = 0;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['external'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['view_node']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['view_node']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['html'] = 0;
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['view_node']['hide_empty'] = 0;
  $handler->display->display_options['fields']['view_node']['empty_zero'] = 0;
  $handler->display->display_options['fields']['view_node']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['view_node']['text'] = 'Læs mere om projektet';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'reference' => 'reference',
  );
  /* Filter criterion: Content: Promoted to front page */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';

  /* Display: Reference liste */
  $handler = $view->new_display('panel_pane', 'Reference liste', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Seneste Referencer';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '1';
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
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_small_img']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;

  /* Display: Forside reference */
  $handler = $view->new_display('panel_pane', 'Forside reference', 'panel_pane_3');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: short text */
  $handler->display->display_options['fields']['field_short_txt']['id'] = 'field_short_txt';
  $handler->display->display_options['fields']['field_short_txt']['table'] = 'field_data_field_short_txt';
  $handler->display->display_options['fields']['field_short_txt']['field'] = 'field_short_txt';
  $handler->display->display_options['fields']['field_short_txt']['label'] = '';
  $handler->display->display_options['fields']['field_short_txt']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_short_txt']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_short_txt']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_short_txt']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_short_txt']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_short_txt']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_short_txt']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_short_txt']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_short_txt']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_short_txt']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_short_txt']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_short_txt']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_short_txt']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_short_txt']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_short_txt']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_short_txt']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_short_txt']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_short_txt']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_short_txt']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_short_txt']['field_api_classes'] = 0;
  /* Field: Content: Front img 400x330 */
  $handler->display->display_options['fields']['field_front_img']['id'] = 'field_front_img';
  $handler->display->display_options['fields']['field_front_img']['table'] = 'field_data_field_front_img';
  $handler->display->display_options['fields']['field_front_img']['field'] = 'field_front_img';
  $handler->display->display_options['fields']['field_front_img']['label'] = '';
  $handler->display->display_options['fields']['field_front_img']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_front_img']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_front_img']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_front_img']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_front_img']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_front_img']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_front_img']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_front_img']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_front_img']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_front_img']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_front_img']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_front_img']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_front_img']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_front_img']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_front_img']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_front_img']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_front_img']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_front_img']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_front_img']['settings'] = array(
    'image_style' => '400x330',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_front_img']['field_api_classes'] = 0;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['external'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['view_node']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['view_node']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['html'] = 0;
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['view_node']['hide_empty'] = 0;
  $handler->display->display_options['fields']['view_node']['empty_zero'] = 0;
  $handler->display->display_options['fields']['view_node']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['view_node']['text'] = 'Læs mere';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'reference' => 'reference',
  );
  /* Filter criterion: Content: Promoted to front page */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';

  /* Display: Seneste */
  $handler = $view->new_display('panel_pane', 'Seneste', 'panel_pane_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Seneste Referencer';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '';
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
    'image_style' => '',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_small_img']['field_api_classes'] = 0;

  /* Display: Forside liste */
  $handler = $view->new_display('panel_pane', 'Forside liste', 'panel_pane_5');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '';
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
    'image_style' => '',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_small_img']['field_api_classes'] = 0;
  $export['reference'] = $view;

  return $export;
}
