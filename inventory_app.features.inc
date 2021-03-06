<?php
/**
 * @file
 * inventory_app.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function inventory_app_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  if ($module == "feeds_tamper" && $api == "feeds_tamper_default") {
    return array("version" => "2");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function inventory_app_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function inventory_app_node_info() {
  $items = array(
    'inventory_page' => array(
      'name' => t('Inventory Page'),
      'base' => 'node_content',
      'description' => t('Inventory data for a web page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
