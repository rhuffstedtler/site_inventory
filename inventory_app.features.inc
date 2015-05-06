<?php
/**
 * @file
 * inventory_app.features.inc
 */

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
      'name' => t('Page'),
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
