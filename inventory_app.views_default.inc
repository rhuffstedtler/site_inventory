<?php
/**
 * @file
 * inventory_app.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function inventory_app_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'all_pages';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'All Pages';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'All Pages';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'secondary_label' => NULL,
    'collapsible_label' => NULL,
    'combine_rewrite' => NULL,
    'reset_label' => NULL,
    'bef_filter_description' => NULL,
    'any_label' => NULL,
    'filter_rewrite_values' => NULL,
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'filtered_html';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'footable';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_current_id' => 'field_current_id',
    'title' => 'title',
    'field_current_url' => 'field_current_url',
    'field_future_id' => 'field_future_id',
    'field_future_template' => 'field_future_template',
    'field_future_url' => 'field_future_url',
    'nid' => 'nid',
    'field_site_map_label' => 'field_site_map_label',
    'field_locales' => 'field_locales',
    'field_topic' => 'field_topic',
  );
  $handler->display->display_options['style_options']['default'] = 'field_current_id';
  $handler->display->display_options['style_options']['info'] = array(
    'field_current_id' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_current_url' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_future_id' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_future_template' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_future_url' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_site_map_label' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_locales' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_topic' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  $handler->display->display_options['style_options']['footable'] = array(
    'expand' => 'field_current_id',
    'icon' => '',
    'icon_size' => '',
    'hide' => array(
      'field_current_id' => array(
        'phone' => 0,
        'tablet' => 0,
      ),
      'title' => array(
        'phone' => 0,
        'tablet' => 0,
      ),
      'field_current_url' => array(
        'phone' => 0,
        'tablet' => 0,
      ),
      'field_future_id' => array(
        'phone' => 0,
        'tablet' => 0,
      ),
      'field_future_template' => array(
        'phone' => 'phone',
        'tablet' => 0,
      ),
      'field_future_url' => array(
        'phone' => 0,
        'tablet' => 0,
      ),
      'nid' => array(
        'phone' => 0,
        'tablet' => 0,
      ),
      'field_site_map_label' => array(
        'phone' => 'phone',
        'tablet' => 'tablet',
      ),
      'field_locales' => array(
        'phone' => 'phone',
        'tablet' => 'tablet',
      ),
      'field_topic' => array(
        'phone' => 'phone',
        'tablet' => 0,
      ),
    ),
  );
  /* Field: Content: Current ID */
  $handler->display->display_options['fields']['field_current_id']['id'] = 'field_current_id';
  $handler->display->display_options['fields']['field_current_id']['table'] = 'field_data_field_current_id';
  $handler->display->display_options['fields']['field_current_id']['field'] = 'field_current_id';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Current URL */
  $handler->display->display_options['fields']['field_current_url']['id'] = 'field_current_url';
  $handler->display->display_options['fields']['field_current_url']['table'] = 'field_data_field_current_url';
  $handler->display->display_options['fields']['field_current_url']['field'] = 'field_current_url';
  /* Field: Content: Future ID */
  $handler->display->display_options['fields']['field_future_id']['id'] = 'field_future_id';
  $handler->display->display_options['fields']['field_future_id']['table'] = 'field_data_field_future_id';
  $handler->display->display_options['fields']['field_future_id']['field'] = 'field_future_id';
  /* Field: Content: Future Template */
  $handler->display->display_options['fields']['field_future_template']['id'] = 'field_future_template';
  $handler->display->display_options['fields']['field_future_template']['table'] = 'field_data_field_future_template';
  $handler->display->display_options['fields']['field_future_template']['field'] = 'field_future_template';
  /* Field: Content: Future URL */
  $handler->display->display_options['fields']['field_future_url']['id'] = 'field_future_url';
  $handler->display->display_options['fields']['field_future_url']['table'] = 'field_data_field_future_url';
  $handler->display->display_options['fields']['field_future_url']['field'] = 'field_future_url';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Field: Content: Site Map Label */
  $handler->display->display_options['fields']['field_site_map_label']['id'] = 'field_site_map_label';
  $handler->display->display_options['fields']['field_site_map_label']['table'] = 'field_data_field_site_map_label';
  $handler->display->display_options['fields']['field_site_map_label']['field'] = 'field_site_map_label';
  /* Field: COUNT(DISTINCT Content: Locales) */
  $handler->display->display_options['fields']['field_locales']['id'] = 'field_locales';
  $handler->display->display_options['fields']['field_locales']['table'] = 'field_data_field_locales';
  $handler->display->display_options['fields']['field_locales']['field'] = 'field_locales';
  $handler->display->display_options['fields']['field_locales']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['field_locales']['separator'] = ', ';
  /* Field: Content: Topic */
  $handler->display->display_options['fields']['field_topic']['id'] = 'field_topic';
  $handler->display->display_options['fields']['field_topic']['table'] = 'field_data_field_topic';
  $handler->display->display_options['fields']['field_topic']['field'] = 'field_topic';
  /* Sort criterion: Content: Current ID (field_current_id) */
  $handler->display->display_options['sorts']['field_current_id_value']['id'] = 'field_current_id_value';
  $handler->display->display_options['sorts']['field_current_id_value']['table'] = 'field_data_field_current_id';
  $handler->display->display_options['sorts']['field_current_id_value']['field'] = 'field_current_id_value';
  /* Contextual filter: Content: Locales (field_locales) */
  $handler->display->display_options['arguments']['field_locales_tid']['id'] = 'field_locales_tid';
  $handler->display->display_options['arguments']['field_locales_tid']['table'] = 'field_data_field_locales';
  $handler->display->display_options['arguments']['field_locales_tid']['field'] = 'field_locales_tid';
  $handler->display->display_options['arguments']['field_locales_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_locales_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_locales_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_locales_tid']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Content: Topic (field_topic) */
  $handler->display->display_options['arguments']['field_topic_tid']['id'] = 'field_topic_tid';
  $handler->display->display_options['arguments']['field_topic_tid']['table'] = 'field_data_field_topic';
  $handler->display->display_options['arguments']['field_topic_tid']['field'] = 'field_topic_tid';
  $handler->display->display_options['arguments']['field_topic_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_topic_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_topic_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_topic_tid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'inventory_page' => 'inventory_page',
  );
  /* Filter criterion: Content: Locales (field_locales) */
  $handler->display->display_options['filters']['field_locales_tid']['id'] = 'field_locales_tid';
  $handler->display->display_options['filters']['field_locales_tid']['table'] = 'field_data_field_locales';
  $handler->display->display_options['filters']['field_locales_tid']['field'] = 'field_locales_tid';
  $handler->display->display_options['filters']['field_locales_tid']['value'] = array(
    16 => '16',
    17 => '17',
    18 => '18',
    19 => '19',
    20 => '20',
    21 => '21',
    22 => '22',
  );
  $handler->display->display_options['filters']['field_locales_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_locales_tid']['expose']['operator_id'] = 'field_locales_tid_op';
  $handler->display->display_options['filters']['field_locales_tid']['expose']['label'] = 'Locales (field_locales)';
  $handler->display->display_options['filters']['field_locales_tid']['expose']['operator'] = 'field_locales_tid_op';
  $handler->display->display_options['filters']['field_locales_tid']['expose']['identifier'] = 'field_locales_tid';
  $handler->display->display_options['filters']['field_locales_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_locales_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_locales_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_locales_tid']['vocabulary'] = 'locale';
  $handler->display->display_options['filters']['field_locales_tid']['hierarchy'] = 1;
  /* Filter criterion: Content: Topic (field_topic) */
  $handler->display->display_options['filters']['field_topic_tid']['id'] = 'field_topic_tid';
  $handler->display->display_options['filters']['field_topic_tid']['table'] = 'field_data_field_topic';
  $handler->display->display_options['filters']['field_topic_tid']['field'] = 'field_topic_tid';
  $handler->display->display_options['filters']['field_topic_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_topic_tid']['expose']['operator_id'] = 'field_topic_tid_op';
  $handler->display->display_options['filters']['field_topic_tid']['expose']['label'] = 'Topic (field_topic)';
  $handler->display->display_options['filters']['field_topic_tid']['expose']['operator'] = 'field_topic_tid_op';
  $handler->display->display_options['filters']['field_topic_tid']['expose']['identifier'] = 'field_topic_tid';
  $handler->display->display_options['filters']['field_topic_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_topic_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_topic_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_topic_tid']['vocabulary'] = 'topic';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['path'] = 'all-pages';
  $export['all_pages'] = $view;

  return $export;
}
