<?php
/**
 * @file
 * ctt_test.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ctt_test_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function ctt_test_node_info() {
  $items = array(
    'book_info' => array(
      'name' => t('Book'),
      'base' => 'node_content',
      'description' => t('Information related to a book'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'page' => array(
      'name' => t('Basic page'),
      'base' => 'node_content',
      'description' => t('Use <em>basic pages</em> for your static content, such as an \'About us\' page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'page_info' => array(
      'name' => t('Page Info'),
      'base' => 'node_content',
      'description' => t('import from old website (page.txt)'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
