<?php
/**
 * @file
 * ctt_structure.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function ctt_structure_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_00467d8a-9b16-42e2-a8e9-ede6d7d96a1b';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -1;
  $handler->conf = array(
    'title' => 'Book',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'book_info' => 'book_info',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'bootstrap_twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => array(
        'column_type' => 'col-sm',
        'column_size' => '2',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'right' => array(
        'column_type' => 'col-sm',
        'column_size' => '10',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'bottom' => array(
        'column_type' => 'col-sm',
        'column_size' => '12',
        'offset_type' => 'col-sm-offset',
        'offset_size' => '0',
      ),
      'middle' => NULL,
    ),
    'left' => array(
      'style' => 'bootstrap_region',
    ),
    'bottom' => array(
      'style' => 'bootstrap_region',
    ),
    'right' => array(
      'style' => 'bootstrap_region',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '860ba607-d926-4fd9-ad05-09b917b069ed';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__panel_context_00467d8a-9b16-42e2-a8e9-ede6d7d96a1b';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-82ed4000-b9c6-4b05-9a8e-a41659d9070b';
  $pane->panel = 'bottom';
  $pane->type = 'views_panes';
  $pane->subtype = 'pages_related_to_page-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'link_to_view' => 0,
    'path' => '',
    'fields_override' => array(
      'title' => 1,
      'field_image' => 0,
    ),
    'override_title' => 0,
    'override_title_text' => '%title',
    'override_title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '82ed4000-b9c6-4b05-9a8e-a41659d9070b';
  $display->content['new-82ed4000-b9c6-4b05-9a8e-a41659d9070b'] = $pane;
  $display->panels['bottom'][0] = 'new-82ed4000-b9c6-4b05-9a8e-a41659d9070b';
  $pane = new stdClass();
  $pane->pid = 'new-dd76fcbf-6f83-42fe-9347-ce41a1f037a4';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'search-form';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'dd76fcbf-6f83-42fe-9347-ce41a1f037a4';
  $display->content['new-dd76fcbf-6f83-42fe-9347-ce41a1f037a4'] = $pane;
  $display->panels['left'][0] = 'new-dd76fcbf-6f83-42fe-9347-ce41a1f037a4';
  $pane = new stdClass();
  $pane->pid = 'new-4aca489c-77bc-4249-8f9d-09a68dd32b71';
  $pane->panel = 'left';
  $pane->type = 'views_panes';
  $pane->subtype = 'nid-panel_pane_2';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '4aca489c-77bc-4249-8f9d-09a68dd32b71';
  $display->content['new-4aca489c-77bc-4249-8f9d-09a68dd32b71'] = $pane;
  $display->panels['left'][1] = 'new-4aca489c-77bc-4249-8f9d-09a68dd32b71';
  $pane = new stdClass();
  $pane->pid = 'new-0dc21849-aaa1-498b-9c4f-0f7afc2bff97';
  $pane->panel = 'top';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_book_id';
  $pane->shown = FALSE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 2,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'number_integer',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'thousand_separator' => '',
      'prefix_suffix' => 1,
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'alert alert-info',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '0dc21849-aaa1-498b-9c4f-0f7afc2bff97';
  $display->content['new-0dc21849-aaa1-498b-9c4f-0f7afc2bff97'] = $pane;
  $display->panels['top'][0] = 'new-0dc21849-aaa1-498b-9c4f-0f7afc2bff97';
  $pane = new stdClass();
  $pane->pid = 'new-ce262fe4-d42b-49a6-a842-55c3c6c48edb';
  $pane->panel = 'top';
  $pane->type = 'page_title';
  $pane->subtype = 'page_title';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'markup' => 'h2',
    'class' => '',
    'id' => '',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'ce262fe4-d42b-49a6-a842-55c3c6c48edb';
  $display->content['new-ce262fe4-d42b-49a6-a842-55c3c6c48edb'] = $pane;
  $display->panels['top'][1] = 'new-ce262fe4-d42b-49a6-a842-55c3c6c48edb';
  $pane = new stdClass();
  $pane->pid = 'new-b5c46597-df9a-406e-b513-10a1cbad5f90';
  $pane->panel = 'top';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_book_author';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'span',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'b5c46597-df9a-406e-b513-10a1cbad5f90';
  $display->content['new-b5c46597-df9a-406e-b513-10a1cbad5f90'] = $pane;
  $display->panels['top'][2] = 'new-b5c46597-df9a-406e-b513-10a1cbad5f90';
  $pane = new stdClass();
  $pane->pid = 'new-bf98a42c-37b6-4d52-8006-bf13fee28aa5';
  $pane->panel = 'top';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_jounal_title';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'bf98a42c-37b6-4d52-8006-bf13fee28aa5';
  $display->content['new-bf98a42c-37b6-4d52-8006-bf13fee28aa5'] = $pane;
  $display->panels['top'][3] = 'new-bf98a42c-37b6-4d52-8006-bf13fee28aa5';
  $pane = new stdClass();
  $pane->pid = 'new-bd2740d0-d193-4fad-af00-2b5443c8aed2';
  $pane->panel = 'top';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_book_edition';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = 'bd2740d0-d193-4fad-af00-2b5443c8aed2';
  $display->content['new-bd2740d0-d193-4fad-af00-2b5443c8aed2'] = $pane;
  $display->panels['top'][4] = 'new-bd2740d0-d193-4fad-af00-2b5443c8aed2';
  $pane = new stdClass();
  $pane->pid = 'new-7e1a7b95-b813-4bcd-ac72-48764ef3a4b0';
  $pane->panel = 'top';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_book_publisher';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => 'Publisher',
    'override_title_heading' => 'span',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '7e1a7b95-b813-4bcd-ac72-48764ef3a4b0';
  $display->content['new-7e1a7b95-b813-4bcd-ac72-48764ef3a4b0'] = $pane;
  $display->panels['top'][5] = 'new-7e1a7b95-b813-4bcd-ac72-48764ef3a4b0';
  $pane = new stdClass();
  $pane->pid = 'new-dea41d88-f711-4172-89ae-a5df1060994b';
  $pane->panel = 'top';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_book_copyright';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'number_integer',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'thousand_separator' => '',
      'prefix_suffix' => 1,
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = 'dea41d88-f711-4172-89ae-a5df1060994b';
  $display->content['new-dea41d88-f711-4172-89ae-a5df1060994b'] = $pane;
  $display->panels['top'][6] = 'new-dea41d88-f711-4172-89ae-a5df1060994b';
  $pane = new stdClass();
  $pane->pid = 'new-cc4713d9-5779-4c1d-80df-1a614b242a3d';
  $pane->panel = 'top';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_book_style';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'taxonomy_term_reference_plain',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 7;
  $pane->locks = array();
  $pane->uuid = 'cc4713d9-5779-4c1d-80df-1a614b242a3d';
  $display->content['new-cc4713d9-5779-4c1d-80df-1a614b242a3d'] = $pane;
  $display->panels['top'][7] = 'new-cc4713d9-5779-4c1d-80df-1a614b242a3d';
  $pane = new stdClass();
  $pane->pid = 'new-b5e8ba04-679a-4d7a-a664-2d89de3ba610';
  $pane->panel = 'top';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'dots',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<p>. . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . .</p>
',
    'format' => 'filtered_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 8;
  $pane->locks = array();
  $pane->uuid = 'b5e8ba04-679a-4d7a-a664-2d89de3ba610';
  $display->content['new-b5e8ba04-679a-4d7a-a664-2d89de3ba610'] = $pane;
  $display->panels['top'][8] = 'new-b5e8ba04-679a-4d7a-a664-2d89de3ba610';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_00467d8a-9b16-42e2-a8e9-ede6d7d96a1b'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_df26bb2d-3288-4c07-9b6d-9661e6cf24b7';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Book page',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'page_info' => 'page_info',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'e3f851dd-420e-4f5b-8668-59d005a86e0a';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__panel_context_df26bb2d-3288-4c07-9b6d-9661e6cf24b7';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-ac5af0e1-7e22-45f4-92c4-25ded1af329e';
  $pane->panel = 'bottom';
  $pane->type = 'panels_mini';
  $pane->subtype = 'page_layout';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => array(
      0 => 'argument_entity_id:node_1',
    ),
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'ac5af0e1-7e22-45f4-92c4-25ded1af329e';
  $display->content['new-ac5af0e1-7e22-45f4-92c4-25ded1af329e'] = $pane;
  $display->panels['bottom'][0] = 'new-ac5af0e1-7e22-45f4-92c4-25ded1af329e';
  $pane = new stdClass();
  $pane->pid = 'new-5a8ffae6-19ee-429e-af78-d7c3075fb58e';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_image';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'image',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'image_style' => '',
      'image_link' => 'file',
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '5a8ffae6-19ee-429e-af78-d7c3075fb58e';
  $display->content['new-5a8ffae6-19ee-429e-af78-d7c3075fb58e'] = $pane;
  $display->panels['left'][0] = 'new-5a8ffae6-19ee-429e-af78-d7c3075fb58e';
  $pane = new stdClass();
  $pane->pid = 'new-0c27db2e-3976-419c-8fec-76ae6c60dc22';
  $pane->panel = 'right';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '0c27db2e-3976-419c-8fec-76ae6c60dc22';
  $display->content['new-0c27db2e-3976-419c-8fec-76ae6c60dc22'] = $pane;
  $display->panels['right'][0] = 'new-0c27db2e-3976-419c-8fec-76ae6c60dc22';
  $pane = new stdClass();
  $pane->pid = 'new-ee7937fb-0da3-4b72-b302-90c25b1aec71';
  $pane->panel = 'top';
  $pane->type = 'views_panes';
  $pane->subtype = 'book_information_per_page-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'ee7937fb-0da3-4b72-b302-90c25b1aec71';
  $display->content['new-ee7937fb-0da3-4b72-b302-90c25b1aec71'] = $pane;
  $display->panels['top'][0] = 'new-ee7937fb-0da3-4b72-b302-90c25b1aec71';
  $pane = new stdClass();
  $pane->pid = 'new-6ab9a7c7-427f-4a50-a0d0-70d868a386e4';
  $pane->panel = 'top';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_page_type';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 2,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'taxonomy_term_reference_plain',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '6ab9a7c7-427f-4a50-a0d0-70d868a386e4';
  $display->content['new-6ab9a7c7-427f-4a50-a0d0-70d868a386e4'] = $pane;
  $display->panels['top'][1] = 'new-6ab9a7c7-427f-4a50-a0d0-70d868a386e4';
  $pane = new stdClass();
  $pane->pid = 'new-80ae0da4-d168-4c4d-bd32-3d32873a7022';
  $pane->panel = 'top';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_page_number';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 2,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '80ae0da4-d168-4c4d-bd32-3d32873a7022';
  $display->content['new-80ae0da4-d168-4c4d-bd32-3d32873a7022'] = $pane;
  $display->panels['top'][2] = 'new-80ae0da4-d168-4c4d-bd32-3d32873a7022';
  $pane = new stdClass();
  $pane->pid = 'new-86aa6cff-47a6-4521-8afe-e5cf26f9f72b';
  $pane->panel = 'top';
  $pane->type = 'token';
  $pane->subtype = 'node:nid';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'sanitize' => 1,
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '86aa6cff-47a6-4521-8afe-e5cf26f9f72b';
  $display->content['new-86aa6cff-47a6-4521-8afe-e5cf26f9f72b'] = $pane;
  $display->panels['top'][3] = 'new-86aa6cff-47a6-4521-8afe-e5cf26f9f72b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_df26bb2d-3288-4c07-9b6d-9661e6cf24b7'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_f866baf0-36d7-4599-a638-ecf5c5a793bd';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Basic Page',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'page' => 'page',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'bootstrap_twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'left' => array(
        'column_type' => 'col-sm',
        'column_size' => '8',
        'offset_type' => 'col-sm-offset',
        'offset_size' => '0',
      ),
      'default' => NULL,
      'top' => NULL,
      'middle' => array(
        'column_type' => 'col-sm',
        'column_size' => '6',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'right' => array(
        'column_type' => 'col-sm',
        'column_size' => '2',
        'offset_type' => 'col-sm-offset',
        'offset_size' => '1',
      ),
      'bottom' => NULL,
    ),
    'left' => array(
      'style' => 'bootstrap_region',
    ),
    'middle' => array(
      'style' => 'bootstrap_region',
    ),
    'right' => array(
      'style' => 'bootstrap_region',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '7f8bf194-fba7-4fcc-8be1-0b292c80b291';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__panel_context_f866baf0-36d7-4599-a638-ecf5c5a793bd';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-00c3060e-97ef-4e8f-9928-060f986d763d';
  $pane->panel = 'left';
  $pane->type = 'node_body';
  $pane->subtype = 'node_body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '00c3060e-97ef-4e8f-9928-060f986d763d';
  $display->content['new-00c3060e-97ef-4e8f-9928-060f986d763d'] = $pane;
  $display->panels['left'][0] = 'new-00c3060e-97ef-4e8f-9928-060f986d763d';
  $pane = new stdClass();
  $pane->pid = 'new-2a6a6b74-eaf3-4a81-bb49-abde709e92e4';
  $pane->panel = 'right';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-about';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'The Collection',
    'override_title_heading' => 'h4',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '2a6a6b74-eaf3-4a81-bb49-abde709e92e4';
  $display->content['new-2a6a6b74-eaf3-4a81-bb49-abde709e92e4'] = $pane;
  $display->panels['right'][0] = 'new-2a6a6b74-eaf3-4a81-bb49-abde709e92e4';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-2a6a6b74-eaf3-4a81-bb49-abde709e92e4';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_f866baf0-36d7-4599-a638-ecf5c5a793bd'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function ctt_structure_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = TRUE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'compare';
  $page->task = 'page';
  $page->admin_title = 'Compare';
  $page->admin_description = '';
  $page->path = 'compare';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_compare__panel';
  $handler->task = 'page';
  $handler->subtask = 'compare';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'bootstrap_twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => array(
        'column_type' => 'col-lg',
        'column_size' => '6',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'right' => array(
        'column_type' => 'col-lg',
        'column_size' => '6',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'bottom' => NULL,
    ),
    'left' => array(
      'style' => 'bootstrap_region',
    ),
    'right' => array(
      'style' => 'bootstrap_region',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'd1dfc217-ddd1-4483-86c8-fa7ae54ea44c';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_compare__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-091f7bba-880a-40e5-aaa6-8c05bc7ee65b';
  $pane->panel = 'left';
  $pane->type = 'views_panes';
  $pane->subtype = 'compare_pages-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '091f7bba-880a-40e5-aaa6-8c05bc7ee65b';
  $display->content['new-091f7bba-880a-40e5-aaa6-8c05bc7ee65b'] = $pane;
  $display->panels['left'][0] = 'new-091f7bba-880a-40e5-aaa6-8c05bc7ee65b';
  $pane = new stdClass();
  $pane->pid = 'new-8832c2a9-8d47-46ef-845e-90742b710120';
  $pane->panel = 'right';
  $pane->type = 'views_panes';
  $pane->subtype = 'compare_pages-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '8832c2a9-8d47-46ef-845e-90742b710120';
  $display->content['new-8832c2a9-8d47-46ef-845e-90742b710120'] = $pane;
  $display->panels['right'][0] = 'new-8832c2a9-8d47-46ef-845e-90742b710120';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-091f7bba-880a-40e5-aaa6-8c05bc7ee65b';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['compare'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'home';
  $page->task = 'page';
  $page->admin_title = 'Home';
  $page->admin_description = '';
  $page->path = 'home';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_home__panel';
  $handler->task = 'page';
  $handler->subtask = 'home';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'front',
          'settings' => NULL,
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'bootstrap_twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => array(
        'column_type' => 'col-sm',
        'column_size' => '12',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'left' => array(
        'column_type' => 'col-sm',
        'column_size' => '5',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'right' => array(
        'column_type' => 'col-sm',
        'column_size' => '7',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'bottom' => array(
        'column_type' => 'col-sm',
        'column_size' => '12',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'top_first' => NULL,
      'top_second' => NULL,
      'top_third' => NULL,
      'top_fourth' => NULL,
      'middle_small' => NULL,
      'middle_large' => NULL,
      'middle_first' => NULL,
      'middle_second' => NULL,
      'bottom_first' => NULL,
      'bottom_second' => NULL,
      'bottom_third' => NULL,
      'bottom_fourth' => NULL,
    ),
    'left' => array(
      'style' => 'bootstrap_region',
    ),
    'right' => array(
      'style' => 'bootstrap_region',
    ),
    'top' => array(
      'style' => 'bootstrap_region',
    ),
    'bottom' => array(
      'style' => 'bootstrap_region',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'd9d56e3b-10eb-4796-98c8-c6809dbd58ed';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_home__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-d0dce8ad-be5f-4dc5-90eb-99ffc155a2fb';
  $pane->panel = 'bottom';
  $pane->type = 'block';
  $pane->subtype = 'views--exp-search-page_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'inherit_path' => 0,
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'hidden-lg',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'd0dce8ad-be5f-4dc5-90eb-99ffc155a2fb';
  $display->content['new-d0dce8ad-be5f-4dc5-90eb-99ffc155a2fb'] = $pane;
  $display->panels['bottom'][0] = 'new-d0dce8ad-be5f-4dc5-90eb-99ffc155a2fb';
  $pane = new stdClass();
  $pane->pid = 'new-acaf7975-03ac-49ad-913b-4c292fbaefc1';
  $pane->panel = 'bottom';
  $pane->type = 'panels_mini';
  $pane->subtype = 'clone_of_3_box';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'hidden-lg',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'acaf7975-03ac-49ad-913b-4c292fbaefc1';
  $display->content['new-acaf7975-03ac-49ad-913b-4c292fbaefc1'] = $pane;
  $display->panels['bottom'][1] = 'new-acaf7975-03ac-49ad-913b-4c292fbaefc1';
  $pane = new stdClass();
  $pane->pid = 'new-a12b10f5-0611-4763-84ed-866a0cb5c025';
  $pane->panel = 'left';
  $pane->type = 'panels_mini';
  $pane->subtype = 'front_page_title';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'visible-lg',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'a12b10f5-0611-4763-84ed-866a0cb5c025';
  $display->content['new-a12b10f5-0611-4763-84ed-866a0cb5c025'] = $pane;
  $display->panels['left'][0] = 'new-a12b10f5-0611-4763-84ed-866a0cb5c025';
  $pane = new stdClass();
  $pane->pid = 'new-5d045c22-c7e2-4c09-82fd-006128c20248';
  $pane->panel = 'right';
  $pane->type = 'panels_mini';
  $pane->subtype = '3_box';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'visible-lg',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '5d045c22-c7e2-4c09-82fd-006128c20248';
  $display->content['new-5d045c22-c7e2-4c09-82fd-006128c20248'] = $pane;
  $display->panels['right'][0] = 'new-5d045c22-c7e2-4c09-82fd-006128c20248';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['home'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'most_viewed';
  $page->task = 'page';
  $page->admin_title = 'Most Viewed';
  $page->admin_description = '';
  $page->path = 'most-viewed';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_most_viewed__panel';
  $handler->task = 'page';
  $handler->subtask = 'most_viewed';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'bootstrap_twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Most Viewed';
  $display->uuid = 'e5be924f-8a5b-4a11-a511-2f755168ca0d';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_most_viewed__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-6f296b9b-0061-4ad9-a3cd-7e247d5e26d4';
  $pane->panel = 'top';
  $pane->type = 'views_panes';
  $pane->subtype = 'recently_added-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '6f296b9b-0061-4ad9-a3cd-7e247d5e26d4';
  $display->content['new-6f296b9b-0061-4ad9-a3cd-7e247d5e26d4'] = $pane;
  $display->panels['top'][0] = 'new-6f296b9b-0061-4ad9-a3cd-7e247d5e26d4';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['most_viewed'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'recently_added';
  $page->task = 'page';
  $page->admin_title = 'Recently Added';
  $page->admin_description = '';
  $page->path = 'recently-added';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_recently_added__panel';
  $handler->task = 'page';
  $handler->subtask = 'recently_added';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'bootstrap_twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Recently Added';
  $display->uuid = '30dc8f03-6d6c-4e10-ae7f-9c305bb53d6e';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_recently_added__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-ca671f6f-24f0-435a-81da-2e32ad84df85';
  $pane->panel = 'top';
  $pane->type = 'views_panes';
  $pane->subtype = 'featured_items-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'ca671f6f-24f0-435a-81da-2e32ad84df85';
  $display->content['new-ca671f6f-24f0-435a-81da-2e32ad84df85'] = $pane;
  $display->panels['top'][0] = 'new-ca671f6f-24f0-435a-81da-2e32ad84df85';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-ca671f6f-24f0-435a-81da-2e32ad84df85';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['recently_added'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'search';
  $page->task = 'page';
  $page->admin_title = 'Search';
  $page->admin_description = '';
  $page->path = 'search2';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_search__panel';
  $handler->task = 'page';
  $handler->subtask = 'search';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'bootstrap_twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'bafd34d7-b640-4f3f-ac92-8a5a2b1746a6';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_search__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-9787e389-d08d-4ea0-8dce-8dcc9ee1732e';
  $pane->panel = 'left';
  $pane->type = 'views_panes';
  $pane->subtype = 'search-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'use_pager' => 1,
    'pager_id' => '0',
    'exposed' => array(
      'search_api_views_fulltext' => '',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '9787e389-d08d-4ea0-8dce-8dcc9ee1732e';
  $display->content['new-9787e389-d08d-4ea0-8dce-8dcc9ee1732e'] = $pane;
  $display->panels['left'][0] = 'new-9787e389-d08d-4ea0-8dce-8dcc9ee1732e';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-9787e389-d08d-4ea0-8dce-8dcc9ee1732e';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['search'] = $page;

  return $pages;

}
