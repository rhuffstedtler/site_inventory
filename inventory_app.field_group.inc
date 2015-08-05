<?php
/**
 * @file
 * inventory_app.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function inventory_app_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_core_fields|node|inventory_page|default';
  $field_group->group_name = 'group_core_fields';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'inventory_page';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Core Fields',
    'weight' => '0',
    'children' => array(
      0 => 'field_current_id',
      1 => 'field_current_url',
      2 => 'field_future_id',
      3 => 'field_site_map_label',
      4 => 'field_future_url',
      5 => 'field_future_template',
      6 => 'field_locales',
      7 => 'field_disposition',
      8 => 'field_app_or_content',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-core-fields field-group-fieldset',
      ),
    ),
  );
  $export['group_core_fields|node|inventory_page|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_core_fields|node|inventory_page|form';
  $field_group->group_name = 'group_core_fields';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'inventory_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Core Fields',
    'weight' => '0',
    'children' => array(
      0 => 'field_current_id',
      1 => 'field_current_url',
      2 => 'field_future_id',
      3 => 'field_site_map_label',
      4 => 'field_future_url',
      5 => 'field_future_template',
      6 => 'field_locales',
      7 => 'field_disposition',
      8 => 'field_app_or_content',
      9 => 'field_row_number',
      10 => 'field_level',
      11 => 'title',
      12 => 'path',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-core-fields field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_core_fields|node|inventory_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tagging_fields|node|inventory_page|default';
  $field_group->group_name = 'group_tagging_fields';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'inventory_page';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Tagging Fields',
    'weight' => '10',
    'children' => array(
      0 => 'field_topic',
      1 => 'field_industry',
      2 => 'field_customer_size',
      3 => 'field_customer_lifecycle_stage',
      4 => 'field_tool',
      5 => 'field_service',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-tagging-fields field-group-fieldset',
      ),
    ),
  );
  $export['group_tagging_fields|node|inventory_page|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tagging_fields|node|inventory_page|form';
  $field_group->group_name = 'group_tagging_fields';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'inventory_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Tagging Fields',
    'weight' => '1',
    'children' => array(
      0 => 'field_topic',
      1 => 'field_industry',
      2 => 'field_customer_size',
      3 => 'field_customer_lifecycle_stage',
      4 => 'field_tool',
      5 => 'field_service',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-tagging-fields field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_tagging_fields|node|inventory_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_workflow_fields|node|inventory_page|default';
  $field_group->group_name = 'group_workflow_fields';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'inventory_page';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Workflow Fields',
    'weight' => '11',
    'children' => array(
      0 => 'field_assignee',
      1 => 'field_status',
      2 => 'field_project',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-workflow-fields field-group-fieldset',
      ),
    ),
  );
  $export['group_workflow_fields|node|inventory_page|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_workflow_fields|node|inventory_page|form';
  $field_group->group_name = 'group_workflow_fields';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'inventory_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Workflow Fields',
    'weight' => '2',
    'children' => array(
      0 => 'field_assignee',
      1 => 'field_status',
      2 => 'field_project',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-workflow-fields field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_workflow_fields|node|inventory_page|form'] = $field_group;

  return $export;
}
