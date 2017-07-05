<?php
/**
 * @file
 * ctt_nodes.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ctt_nodes_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_book_info|node|book_info|form';
  $field_group->group_name = 'group_book_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'book_info';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_book';
  $field_group->data = array(
    'label' => 'Book Information',
    'weight' => '1',
    'children' => array(
      0 => 'field_book_id',
      1 => 'field_book_author',
      2 => 'field_book_year',
      3 => 'field_book_volume',
      4 => 'field_book_edition',
      5 => 'field_book_publisher',
      6 => 'field_book_style',
      7 => 'field_collection',
      8 => 'field_book_copyright',
      9 => 'field_copyright',
      10 => 'field_jounal_title',
      11 => 'title',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_book_info|node|book_info|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_book|node|book_info|form';
  $field_group->group_name = 'group_book';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'book_info';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Book',
    'weight' => '0',
    'children' => array(
      0 => 'group_book_info',
      1 => 'group_page_info',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_book|node|book_info|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_page_info|node|book_info|form';
  $field_group->group_name = 'group_page_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'book_info';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_book';
  $field_group->data = array(
    'label' => 'Pages',
    'weight' => '2',
    'children' => array(
      0 => 'field_page',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_page_info|node|book_info|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Book');
  t('Book Information');
  t('Pages');

  return $field_groups;
}
