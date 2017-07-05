<?php
/**
 * @file
 * ctt_structure.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ctt_structure_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "facetapi" && $api == "facetapi_defaults") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "panels" && $api == "layouts") {
    return array("version" => "1");
  }
  if ($module == "panels_mini" && $api == "panels_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function ctt_structure_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function ctt_structure_node_info() {
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

/**
 * Implements hook_default_search_api_index().
 */
function ctt_structure_default_search_api_index() {
  $items = array();
  $items['book_page'] = entity_import('search_api_index', '{
    "name" : "Book \\u0026 Page",
    "machine_name" : "book_page",
    "description" : null,
    "server" : "default",
    "item_type" : "node",
    "options" : {
      "datasource" : { "bundles" : [ "book_info", "page_info" ] },
      "index_directly" : 1,
      "cron_limit" : "50",
      "fields" : {
        "body:value" : { "type" : "text" },
        "field_book_author" : { "type" : "text" },
        "field_book_copyright" : { "type" : "list\\u003Cinteger\\u003E" },
        "field_book_edition" : { "type" : "text" },
        "field_book_publisher" : { "type" : "text" },
        "field_book_style" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_book_volume" : { "type" : "text" },
        "field_copyright" : { "type" : "list\\u003Cdate\\u003E" },
        "field_page" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "node" },
        "field_page:body:value" : { "type" : "list\\u003Ctext\\u003E" },
        "field_page:field_book_author" : { "type" : "list\\u003Ctext\\u003E" },
        "field_page:field_image:file" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "file" },
        "field_page_title" : { "type" : "text" },
        "field_page_type" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "search_api_language" : { "type" : "string" },
        "title" : { "type" : "text" },
        "type" : { "type" : "string" }
      },
      "data_alter_callbacks" : {
        "search_api_alter_bundle_filter" : {
          "status" : 0,
          "weight" : "-10",
          "settings" : { "default" : "1", "bundles" : [] }
        },
        "search_api_alter_node_access" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_node_status" : { "status" : 1, "weight" : "0", "settings" : [] },
        "search_api_alter_add_hierarchy" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "0", "settings" : { "mode" : "full" } },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_aggregation" : { "status" : 0, "weight" : "0", "settings" : [] }
      },
      "processors" : {
        "search_api_case_ignore" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : {
              "title" : true,
              "field_page_title" : true,
              "field_book_author" : true,
              "field_book_volume" : true,
              "field_book_edition" : true,
              "field_book_publisher" : true
            }
          }
        },
        "search_api_html_filter" : {
          "status" : 0,
          "weight" : "10",
          "settings" : {
            "fields" : {
              "title" : true,
              "field_page_title" : true,
              "field_book_author" : true,
              "field_book_volume" : true,
              "field_book_edition" : true,
              "field_book_publisher" : true
            },
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_tokenizer" : {
          "status" : 0,
          "weight" : "20",
          "settings" : {
            "fields" : {
              "title" : true,
              "field_page_title" : true,
              "field_book_author" : true,
              "field_book_volume" : true,
              "field_book_edition" : true,
              "field_book_publisher" : true
            },
            "spaces" : "[^[:alnum:]]",
            "ignorable" : "[\\u0027]"
          }
        },
        "search_api_stopwords" : {
          "status" : 0,
          "weight" : "30",
          "settings" : {
            "fields" : {
              "title" : true,
              "field_page_title" : true,
              "field_book_author" : true,
              "field_book_volume" : true,
              "field_book_edition" : true,
              "field_book_publisher" : true
            },
            "file" : "",
            "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc"
          }
        },
        "search_api_highlighting" : {
          "status" : 1,
          "weight" : "35",
          "settings" : {
            "prefix" : "\\u003Cstrong\\u003E",
            "suffix" : "\\u003C\\/strong\\u003E",
            "excerpt" : 1,
            "excerpt_length" : "256",
            "exclude_fields" : [],
            "highlight" : "always",
            "highlight_partial" : 0
          }
        },
        "search_api_porter_stemmer" : {
          "status" : 0,
          "weight" : "35",
          "settings" : {
            "fields" : {
              "title" : true,
              "field_page_title" : true,
              "field_book_author" : true,
              "field_book_year" : true,
              "field_book_volume" : true,
              "field_book_edition" : true,
              "field_book_publisher" : true,
              "field_page:body:value" : true
            },
            "exceptions" : "texan=texa"
          }
        }
      }
    },
    "enabled" : "1",
    "read_only" : "0",
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_default_search_api_server().
 */
function ctt_structure_default_search_api_server() {
  $items = array();
  $items['default'] = entity_import('search_api_server', '{
    "name" : "Default",
    "machine_name" : "default",
    "description" : "",
    "class" : "search_api_db_service",
    "options" : {
      "database" : "default:default",
      "min_chars" : "2",
      "partial_matches" : 1,
      "indexes" : { "book_page" : {
          "title" : {
            "table" : "search_api_db_book_page_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_page_title" : {
            "table" : "search_api_db_book_page_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_page_type" : {
            "table" : "search_api_db_book_page",
            "column" : "field_page_type",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_book_author" : {
            "table" : "search_api_db_book_page_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_book_volume" : {
            "table" : "search_api_db_book_page_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_book_edition" : {
            "table" : "search_api_db_book_page_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_book_publisher" : {
            "table" : "search_api_db_book_page_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_book_style" : {
            "table" : "search_api_db_book_page",
            "column" : "field_book_style",
            "type" : "integer",
            "boost" : "1.0"
          },
          "search_api_language" : {
            "table" : "search_api_db_book_page",
            "column" : "search_api_language",
            "type" : "string",
            "boost" : "1.0"
          },
          "field_page" : {
            "table" : "search_api_db_book_page_field_page",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_page:body:value" : {
            "table" : "search_api_db_book_page_text",
            "type" : "list\\u003Ctext\\u003E",
            "boost" : "1.0"
          },
          "field_page:field_image:file" : {
            "table" : "search_api_db_book_page_field_page_field_image_file",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "type" : {
            "table" : "search_api_db_book_page",
            "column" : "type",
            "type" : "string",
            "boost" : "1.0"
          },
          "field_copyright" : {
            "table" : "search_api_db_book_page_field_copyright",
            "column" : "value",
            "type" : "list\\u003Cdate\\u003E",
            "boost" : "1.0"
          },
          "field_book_copyright" : {
            "table" : "search_api_db_book_page_field_book_copyright",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "body:value" : {
            "table" : "search_api_db_book_page_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_page:field_book_author" : {
            "table" : "search_api_db_book_page_text",
            "type" : "list\\u003Ctext\\u003E",
            "boost" : "1.0"
          }
        }
      }
    },
    "enabled" : "1",
    "rdf_mapping" : []
  }');
  return $items;
}
