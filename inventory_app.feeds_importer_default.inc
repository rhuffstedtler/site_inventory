<?php
/**
 * @file
 * inventory_app.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function inventory_app_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'page_inventory';
  $feeds_importer->config = array(
    'name' => 'Inventory importer',
    'description' => 'Imports a CSV file of page inventory data',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'direct' => FALSE,
        'allowed_extensions' => 'txt csv tsv xml opml',
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'bundle' => 'inventory_page',
        'update_existing' => '1',
        'expire' => '-1',
        'mappings' => array(
          0 => array(
            'source' => 'row_num',
            'target' => 'guid',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'row_num',
            'target' => 'field_row_number',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'other_title',
            'target' => 'title',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'current_id',
            'target' => 'field_current_id',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'current_url',
            'target' => 'field_current_url',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'Title',
            'target' => 'field_site_map_label',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'future_id',
            'target' => 'field_future_id',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'future_url',
            'target' => 'field_future_url',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'body',
            'target' => 'body',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'published',
            'target' => 'created',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'topic',
            'target' => 'field_topic',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          11 => array(
            'source' => 'disposition',
            'target' => 'field_disposition',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          12 => array(
            'source' => 'app_or_content',
            'target' => 'field_app_or_content',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          13 => array(
            'source' => 'future_template',
            'target' => 'field_future_template',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          14 => array(
            'source' => 'notes',
            'target' => 'field_notes',
            'unique' => FALSE,
          ),
          15 => array(
            'source' => 'locales',
            'target' => 'field_locales',
            'unique' => FALSE,
          ),
          16 => array(
            'source' => 'level',
            'target' => 'field_level',
            'unique' => FALSE,
          ),
        ),
        'input_format' => 'plain_text',
        'author' => 0,
        'authorize' => 1,
        'skip_hash_check' => 0,
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['page_inventory'] = $feeds_importer;

  return $export;
}
