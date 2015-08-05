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
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
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
    'field_locales_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => 1,
        'bef_select_all_none_nested' => 0,
        'bef_collapsible' => 1,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
            'secondary_label' => NULL,
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
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'table_filter' => '_none',
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_topic_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
            'secondary_label' => NULL,
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
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'table_filter' => '_none',
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
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
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'editableviews_table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_row_number' => 'field_row_number',
    'title' => 'title',
    'field_current_id' => 'field_current_id',
    'field_future_id' => 'field_future_id',
    'field_current_url' => 'field_current_url',
    'field_future_url' => 'field_future_url',
    'field_future_template' => 'field_future_template',
    'field_locales' => 'field_locales',
    'field_topic' => 'field_topic',
    'field_assignee' => 'field_assignee',
  );
  $handler->display->display_options['style_options']['default'] = 'field_row_number';
  $handler->display->display_options['style_options']['info'] = array(
    'field_row_number' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_current_id' => array(
      'sortable' => 0,
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
    'field_current_url' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_future_url' => array(
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
    'field_locales' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_topic' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_assignee' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Row Number */
  $handler->display->display_options['fields']['field_row_number']['id'] = 'field_row_number';
  $handler->display->display_options['fields']['field_row_number']['table'] = 'field_data_field_row_number';
  $handler->display->display_options['fields']['field_row_number']['field'] = 'field_row_number';
  $handler->display->display_options['fields']['field_row_number']['label'] = 'Row';
  $handler->display->display_options['fields']['field_row_number']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_row_number']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_row_number']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Current ID */
  $handler->display->display_options['fields']['field_current_id']['id'] = 'field_current_id';
  $handler->display->display_options['fields']['field_current_id']['table'] = 'field_data_field_current_id';
  $handler->display->display_options['fields']['field_current_id']['field'] = 'field_current_id';
  /* Field: Content: Future ID */
  $handler->display->display_options['fields']['field_future_id']['id'] = 'field_future_id';
  $handler->display->display_options['fields']['field_future_id']['table'] = 'field_data_field_future_id';
  $handler->display->display_options['fields']['field_future_id']['field'] = 'field_future_id';
  /* Field: Content: Current URL */
  $handler->display->display_options['fields']['field_current_url']['id'] = 'field_current_url';
  $handler->display->display_options['fields']['field_current_url']['table'] = 'field_data_field_current_url';
  $handler->display->display_options['fields']['field_current_url']['field'] = 'field_current_url';
  /* Field: Content: Future URL */
  $handler->display->display_options['fields']['field_future_url']['id'] = 'field_future_url';
  $handler->display->display_options['fields']['field_future_url']['table'] = 'field_data_field_future_url';
  $handler->display->display_options['fields']['field_future_url']['field'] = 'field_future_url';
  /* Field: Content: Future Template */
  $handler->display->display_options['fields']['field_future_template']['id'] = 'field_future_template';
  $handler->display->display_options['fields']['field_future_template']['table'] = 'field_data_field_future_template';
  $handler->display->display_options['fields']['field_future_template']['field'] = 'field_future_template';
  /* Field: COUNT(DISTINCT Content: Locales) */
  $handler->display->display_options['fields']['field_locales']['id'] = 'field_locales';
  $handler->display->display_options['fields']['field_locales']['table'] = 'field_data_field_locales';
  $handler->display->display_options['fields']['field_locales']['field'] = 'field_locales';
  $handler->display->display_options['fields']['field_locales']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['field_locales']['label'] = 'Countries';
  $handler->display->display_options['fields']['field_locales']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_locales']['separator'] = ', ';
  /* Field: Content: Topic */
  $handler->display->display_options['fields']['field_topic']['id'] = 'field_topic';
  $handler->display->display_options['fields']['field_topic']['table'] = 'field_data_field_topic';
  $handler->display->display_options['fields']['field_topic']['field'] = 'field_topic';
  /* Field: Content: Assignee */
  $handler->display->display_options['fields']['field_assignee']['id'] = 'field_assignee';
  $handler->display->display_options['fields']['field_assignee']['table'] = 'field_data_field_assignee';
  $handler->display->display_options['fields']['field_assignee']['field'] = 'field_assignee';
  $handler->display->display_options['fields']['field_assignee']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Page Type */
  $handler->display->display_options['fields']['field_app_or_content']['id'] = 'field_app_or_content';
  $handler->display->display_options['fields']['field_app_or_content']['table'] = 'field_data_field_app_or_content';
  $handler->display->display_options['fields']['field_app_or_content']['field'] = 'field_app_or_content';
  $handler->display->display_options['fields']['field_app_or_content']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Content: Level */
  $handler->display->display_options['fields']['field_level']['id'] = 'field_level';
  $handler->display->display_options['fields']['field_level']['table'] = 'field_data_field_level';
  $handler->display->display_options['fields']['field_level']['field'] = 'field_level';
  $handler->display->display_options['fields']['field_level']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_level']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
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
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Locales (field_locales) */
  $handler->display->display_options['filters']['field_locales_tid']['id'] = 'field_locales_tid';
  $handler->display->display_options['filters']['field_locales_tid']['table'] = 'field_data_field_locales';
  $handler->display->display_options['filters']['field_locales_tid']['field'] = 'field_locales_tid';
  $handler->display->display_options['filters']['field_locales_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_locales_tid']['expose']['operator_id'] = 'field_locales_tid_op';
  $handler->display->display_options['filters']['field_locales_tid']['expose']['label'] = 'Locales';
  $handler->display->display_options['filters']['field_locales_tid']['expose']['operator'] = 'field_locales_tid_op';
  $handler->display->display_options['filters']['field_locales_tid']['expose']['identifier'] = 'field_locales_tid';
  $handler->display->display_options['filters']['field_locales_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_locales_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_locales_tid']['vocabulary'] = 'locale';
  /* Filter criterion: Content: Topic (field_topic) */
  $handler->display->display_options['filters']['field_topic_tid']['id'] = 'field_topic_tid';
  $handler->display->display_options['filters']['field_topic_tid']['table'] = 'field_data_field_topic';
  $handler->display->display_options['filters']['field_topic_tid']['field'] = 'field_topic_tid';
  $handler->display->display_options['filters']['field_topic_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_topic_tid']['expose']['operator_id'] = 'field_topic_tid_op';
  $handler->display->display_options['filters']['field_topic_tid']['expose']['label'] = 'Topic';
  $handler->display->display_options['filters']['field_topic_tid']['expose']['operator'] = 'field_topic_tid_op';
  $handler->display->display_options['filters']['field_topic_tid']['expose']['identifier'] = 'field_topic_tid';
  $handler->display->display_options['filters']['field_topic_tid']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_topic_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_topic_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_topic_tid']['vocabulary'] = 'topic';
  $handler->display->display_options['filters']['field_topic_tid']['hierarchy'] = 1;
  /* Filter criterion: Content: Future Template (field_future_template) */
  $handler->display->display_options['filters']['field_future_template_tid']['id'] = 'field_future_template_tid';
  $handler->display->display_options['filters']['field_future_template_tid']['table'] = 'field_data_field_future_template';
  $handler->display->display_options['filters']['field_future_template_tid']['field'] = 'field_future_template_tid';
  $handler->display->display_options['filters']['field_future_template_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_future_template_tid']['expose']['operator_id'] = 'field_future_template_tid_op';
  $handler->display->display_options['filters']['field_future_template_tid']['expose']['label'] = 'Future Template';
  $handler->display->display_options['filters']['field_future_template_tid']['expose']['operator'] = 'field_future_template_tid_op';
  $handler->display->display_options['filters']['field_future_template_tid']['expose']['identifier'] = 'field_future_template_tid';
  $handler->display->display_options['filters']['field_future_template_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_future_template_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_future_template_tid']['vocabulary'] = 'template';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['path'] = 'all-pages';
  $export['all_pages'] = $view;

  $view = new view();
  $view->name = 'my_pages';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'My Pages';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'My Pages';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_status_editable' => 'field_status_editable',
    'field_assignee_editable' => 'field_assignee_editable',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_status_editable' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_assignee_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_status']['id'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['table'] = 'field_data_field_status';
  $handler->display->display_options['fields']['field_status']['field'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['type'] = 'editable';
  $handler->display->display_options['fields']['field_status']['settings'] = array(
    'click_to_edit' => 0,
    'empty_text' => '',
    'fallback_format' => 'taxonomy_term_reference_link',
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Content: Assignee */
  $handler->display->display_options['fields']['field_assignee']['id'] = 'field_assignee';
  $handler->display->display_options['fields']['field_assignee']['table'] = 'field_data_field_assignee';
  $handler->display->display_options['fields']['field_assignee']['field'] = 'field_assignee';
  $handler->display->display_options['fields']['field_assignee']['type'] = 'editable';
  $handler->display->display_options['fields']['field_assignee']['settings'] = array(
    'click_to_edit' => 1,
    'empty_text' => '',
    'fallback_format' => 'entityreference_label',
    'fallback_settings' => array(
      'link' => 0,
    ),
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Content: Project */
  $handler->display->display_options['fields']['field_project']['id'] = 'field_project';
  $handler->display->display_options['fields']['field_project']['table'] = 'field_data_field_project';
  $handler->display->display_options['fields']['field_project']['field'] = 'field_project';
  $handler->display->display_options['fields']['field_project']['type'] = 'editable';
  $handler->display->display_options['fields']['field_project']['settings'] = array(
    'click_to_edit' => 1,
    'empty_text' => '',
    'fallback_format' => 'taxonomy_term_reference_link',
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
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
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'my-pages';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'My Pages';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $export['my_pages'] = $view;

  $view = new view();
  $view->name = 'tagging_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Tagging List';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Tagging List';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
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
    'field_locales_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => 1,
        'bef_select_all_none_nested' => 0,
        'bef_collapsible' => 1,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
            'secondary_label' => NULL,
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
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'table_filter' => '_none',
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_topic_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
            'secondary_label' => NULL,
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
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'table_filter' => '_none',
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
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
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_row_number' => 'field_row_number',
    'title' => 'title',
    'field_current_url' => 'field_current_url',
    'field_topic' => 'field_topic',
    'field_assignee' => 'field_assignee',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_row_number' => array(
      'sortable' => 0,
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
    'field_assignee' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Current URL */
  $handler->display->display_options['fields']['field_current_url']['id'] = 'field_current_url';
  $handler->display->display_options['fields']['field_current_url']['table'] = 'field_data_field_current_url';
  $handler->display->display_options['fields']['field_current_url']['field'] = 'field_current_url';
  /* Field: Content: Topic */
  $handler->display->display_options['fields']['field_topic']['id'] = 'field_topic';
  $handler->display->display_options['fields']['field_topic']['table'] = 'field_data_field_topic';
  $handler->display->display_options['fields']['field_topic']['field'] = 'field_topic';
  $handler->display->display_options['fields']['field_topic']['type'] = 'editable';
  $handler->display->display_options['fields']['field_topic']['settings'] = array(
    'click_to_edit' => 1,
    'empty_text' => '',
    'fallback_format' => 'taxonomy_term_reference_link',
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Content: Industry */
  $handler->display->display_options['fields']['field_industry']['id'] = 'field_industry';
  $handler->display->display_options['fields']['field_industry']['table'] = 'field_data_field_industry';
  $handler->display->display_options['fields']['field_industry']['field'] = 'field_industry';
  $handler->display->display_options['fields']['field_industry']['type'] = 'editable';
  $handler->display->display_options['fields']['field_industry']['settings'] = array(
    'click_to_edit' => 1,
    'empty_text' => '',
    'fallback_format' => 'taxonomy_term_reference_link',
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Content: Customer Size */
  $handler->display->display_options['fields']['field_customer_size']['id'] = 'field_customer_size';
  $handler->display->display_options['fields']['field_customer_size']['table'] = 'field_data_field_customer_size';
  $handler->display->display_options['fields']['field_customer_size']['field'] = 'field_customer_size';
  $handler->display->display_options['fields']['field_customer_size']['type'] = 'editable';
  $handler->display->display_options['fields']['field_customer_size']['settings'] = array(
    'click_to_edit' => 1,
    'empty_text' => '',
    'fallback_format' => 'taxonomy_term_reference_link',
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  $handler->display->display_options['fields']['field_customer_size']['delta_offset'] = '0';
  /* Field: Content: Customer Lifecycle Stage */
  $handler->display->display_options['fields']['field_customer_lifecycle_stage']['id'] = 'field_customer_lifecycle_stage';
  $handler->display->display_options['fields']['field_customer_lifecycle_stage']['table'] = 'field_data_field_customer_lifecycle_stage';
  $handler->display->display_options['fields']['field_customer_lifecycle_stage']['field'] = 'field_customer_lifecycle_stage';
  $handler->display->display_options['fields']['field_customer_lifecycle_stage']['type'] = 'editable';
  $handler->display->display_options['fields']['field_customer_lifecycle_stage']['settings'] = array(
    'click_to_edit' => 1,
    'empty_text' => '',
    'fallback_format' => 'taxonomy_term_reference_link',
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
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
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Topic (field_topic) */
  $handler->display->display_options['filters']['field_topic_tid']['id'] = 'field_topic_tid';
  $handler->display->display_options['filters']['field_topic_tid']['table'] = 'field_data_field_topic';
  $handler->display->display_options['filters']['field_topic_tid']['field'] = 'field_topic_tid';
  $handler->display->display_options['filters']['field_topic_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_topic_tid']['expose']['operator_id'] = 'field_topic_tid_op';
  $handler->display->display_options['filters']['field_topic_tid']['expose']['label'] = 'Topic';
  $handler->display->display_options['filters']['field_topic_tid']['expose']['operator'] = 'field_topic_tid_op';
  $handler->display->display_options['filters']['field_topic_tid']['expose']['identifier'] = 'field_topic_tid';
  $handler->display->display_options['filters']['field_topic_tid']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_topic_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_topic_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_topic_tid']['vocabulary'] = 'topic';
  $handler->display->display_options['filters']['field_topic_tid']['hierarchy'] = 1;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['path'] = 'tagging-list';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Tagging List';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['tagging_list'] = $view;

  $view = new view();
  $view->name = 'translation_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Translation List';
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
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
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
    'field_locales_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => 1,
        'bef_select_all_none_nested' => 0,
        'bef_collapsible' => 1,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
            'secondary_label' => NULL,
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
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'table_filter' => '_none',
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_topic_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
            'secondary_label' => NULL,
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
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'table_filter' => '_none',
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
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
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'editableviews_table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_row_number' => 'field_row_number',
    'title' => 'title',
    'field_current_id' => 'field_current_id',
    'field_future_id' => 'field_future_id',
    'field_current_url' => 'field_current_url',
    'field_future_url' => 'field_future_url',
    'field_future_template' => 'field_future_template',
    'field_locales' => 'field_locales',
    'field_topic' => 'field_topic',
    'field_assignee' => 'field_assignee',
  );
  $handler->display->display_options['style_options']['default'] = 'field_row_number';
  $handler->display->display_options['style_options']['info'] = array(
    'field_row_number' => array(
      'sortable' => 0,
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
    'field_current_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_future_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_current_url' => array(
      'sortable' => 0,
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
    'field_future_template' => array(
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
    'field_assignee' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Row Number */
  $handler->display->display_options['fields']['field_row_number']['id'] = 'field_row_number';
  $handler->display->display_options['fields']['field_row_number']['table'] = 'field_data_field_row_number';
  $handler->display->display_options['fields']['field_row_number']['field'] = 'field_row_number';
  $handler->display->display_options['fields']['field_row_number']['label'] = 'Row';
  $handler->display->display_options['fields']['field_row_number']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_row_number']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Current URL */
  $handler->display->display_options['fields']['field_current_url']['id'] = 'field_current_url';
  $handler->display->display_options['fields']['field_current_url']['table'] = 'field_data_field_current_url';
  $handler->display->display_options['fields']['field_current_url']['field'] = 'field_current_url';
  /* Field: Content: Future URL */
  $handler->display->display_options['fields']['field_future_url']['id'] = 'field_future_url';
  $handler->display->display_options['fields']['field_future_url']['table'] = 'field_data_field_future_url';
  $handler->display->display_options['fields']['field_future_url']['field'] = 'field_future_url';
  /* Field: COUNT(DISTINCT Content: Locales) */
  $handler->display->display_options['fields']['field_locales']['id'] = 'field_locales';
  $handler->display->display_options['fields']['field_locales']['table'] = 'field_data_field_locales';
  $handler->display->display_options['fields']['field_locales']['field'] = 'field_locales';
  $handler->display->display_options['fields']['field_locales']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['field_locales']['label'] = 'Countries';
  $handler->display->display_options['fields']['field_locales']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_locales']['separator'] = ', ';
  /* Field: Content: Assignee */
  $handler->display->display_options['fields']['field_assignee']['id'] = 'field_assignee';
  $handler->display->display_options['fields']['field_assignee']['table'] = 'field_data_field_assignee';
  $handler->display->display_options['fields']['field_assignee']['field'] = 'field_assignee';
  $handler->display->display_options['fields']['field_assignee']['settings'] = array(
    'link' => 0,
  );
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
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Locales (field_locales) */
  $handler->display->display_options['filters']['field_locales_tid']['id'] = 'field_locales_tid';
  $handler->display->display_options['filters']['field_locales_tid']['table'] = 'field_data_field_locales';
  $handler->display->display_options['filters']['field_locales_tid']['field'] = 'field_locales_tid';
  $handler->display->display_options['filters']['field_locales_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_locales_tid']['expose']['operator_id'] = 'field_locales_tid_op';
  $handler->display->display_options['filters']['field_locales_tid']['expose']['label'] = 'Locales';
  $handler->display->display_options['filters']['field_locales_tid']['expose']['operator'] = 'field_locales_tid_op';
  $handler->display->display_options['filters']['field_locales_tid']['expose']['identifier'] = 'field_locales_tid';
  $handler->display->display_options['filters']['field_locales_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_locales_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_locales_tid']['vocabulary'] = 'locale';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['path'] = 'translation-list';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Translation List';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['translation_list'] = $view;

  return $export;
}
