<?php
/**
 * @file
 * ctt_structure.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function ctt_structure_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = '3_box';
  $mini->category = 'Front';
  $mini->admin_title = '3 box';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'bootstrap_threecol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => array(
        'column_type' => 'col-sm',
        'column_size' => '4',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'middle' => array(
        'column_type' => 'col-sm',
        'column_size' => '4',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'right' => array(
        'column_type' => 'col-sm',
        'column_size' => '4',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'top' => NULL,
      'bottom' => NULL,
      'center' => array(
        'column_type' => 'col-sm',
        'column_size' => '3',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
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
    'center' => array(
      'style' => 'bootstrap_region',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '5c677f96-a23a-4c58-a57a-45a3df728a09';
  $display->storage_type = 'panels_mini';
  $display->storage_id = '3_box';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-17b6d813-396c-4c3c-8697-067b75016eff';
  $pane->panel = 'left';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'About the Collection',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<img class="img-responsive" src="ctt/sites/library-test.uta.edu.ctt/files/collage_3.jpg">
<h4><a data-toggle="collapse" href="#collapseCollection" area-expanded="false" aria-controls="collapseCollection">About the Collection</a></h4>
',
    'format' => 'php_code',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'collection',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '17b6d813-396c-4c3c-8697-067b75016eff';
  $display->content['new-17b6d813-396c-4c3c-8697-067b75016eff'] = $pane;
  $display->panels['left'][0] = 'new-17b6d813-396c-4c3c-8697-067b75016eff';
  $pane = new stdClass();
  $pane->pid = 'new-4bf305b4-c7b7-4244-ba73-09f69cc8a7fd';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-about';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'span',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'collapseCollection',
    'css_class' => 'collapse well',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '4bf305b4-c7b7-4244-ba73-09f69cc8a7fd';
  $display->content['new-4bf305b4-c7b7-4244-ba73-09f69cc8a7fd'] = $pane;
  $display->panels['left'][1] = 'new-4bf305b4-c7b7-4244-ba73-09f69cc8a7fd';
  $pane = new stdClass();
  $pane->pid = 'new-040da80d-8631-4d87-b12e-0719b3dbfa12';
  $pane->panel = 'middle';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Most Viewed',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<img class="img-responsive" src="ctt/sites/library-test.uta.edu.ctt/files/most-viewed.jpg">
<h4><a data-toggle="collapse" href="#collapseViewed" area-expanded="false" aria-controls="collapseViewed">Most Viewed</a></h4>
',
    'format' => 'php_code',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'viewed',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '040da80d-8631-4d87-b12e-0719b3dbfa12';
  $display->content['new-040da80d-8631-4d87-b12e-0719b3dbfa12'] = $pane;
  $display->panels['middle'][0] = 'new-040da80d-8631-4d87-b12e-0719b3dbfa12';
  $pane = new stdClass();
  $pane->pid = 'new-4343d249-cd13-49d5-85d0-1729b9f86417';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'recently_added-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'collapseViewed',
    'css_class' => 'collapse well',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '4343d249-cd13-49d5-85d0-1729b9f86417';
  $display->content['new-4343d249-cd13-49d5-85d0-1729b9f86417'] = $pane;
  $display->panels['middle'][1] = 'new-4343d249-cd13-49d5-85d0-1729b9f86417';
  $pane = new stdClass();
  $pane->pid = 'new-68cffcb5-2317-4fbb-bac6-bbcc661e387e';
  $pane->panel = 'right';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Most Recently Added',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<img class="img-responsive" src="ctt/sites/library-test.uta.edu.ctt/files/featured-item.jpg">
<h4><a data-toggle="collapse" href="#collapseFeatured" area-expanded="false" aria-controls="collapseFeatured">Recently Added</a></h4>
',
    'format' => 'php_code',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'featured',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '68cffcb5-2317-4fbb-bac6-bbcc661e387e';
  $display->content['new-68cffcb5-2317-4fbb-bac6-bbcc661e387e'] = $pane;
  $display->panels['right'][0] = 'new-68cffcb5-2317-4fbb-bac6-bbcc661e387e';
  $pane = new stdClass();
  $pane->pid = 'new-0bb4955f-0e01-462f-9c61-039d7e339b38';
  $pane->panel = 'right';
  $pane->type = 'views_panes';
  $pane->subtype = 'featured_items-panel_pane_1';
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
    'css_id' => 'collapseFeatured',
    'css_class' => 'collapse well',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '0bb4955f-0e01-462f-9c61-039d7e339b38';
  $display->content['new-0bb4955f-0e01-462f-9c61-039d7e339b38'] = $pane;
  $display->panels['right'][1] = 'new-0bb4955f-0e01-462f-9c61-039d7e339b38';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['3_box'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'clone_of_3_box';
  $mini->category = 'Front';
  $mini->admin_title = '3 box-small';
  $mini->admin_description = 'For small screens';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'bootstrap_threecol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => array(
        'column_type' => 'col-sm',
        'column_size' => '4',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'middle' => array(
        'column_type' => 'col-sm',
        'column_size' => '4',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'right' => array(
        'column_type' => 'col-sm',
        'column_size' => '4',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'top' => NULL,
      'bottom' => NULL,
      'center' => array(
        'column_type' => 'col-sm',
        'column_size' => '3',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
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
    'center' => array(
      'style' => 'bootstrap_region',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '5c677f96-a23a-4c58-a57a-45a3df728a09';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'clone_of_3_box';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-17b6d813-396c-4c3c-8697-067b75016eff';
  $pane->panel = 'left';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'About the Collection',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<img class="img-responsive" src="ctt/sites/library-test.uta.edu.ctt/files/collage_3.jpg">
<h4><a data-toggle="collapse" href="#collapseCollection2" area-expanded="false" aria-controls="collapseCollection2">About the Collection</a></h4>
',
    'format' => 'php_code',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'collection',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '17b6d813-396c-4c3c-8697-067b75016eff';
  $display->content['new-17b6d813-396c-4c3c-8697-067b75016eff'] = $pane;
  $display->panels['left'][0] = 'new-17b6d813-396c-4c3c-8697-067b75016eff';
  $pane = new stdClass();
  $pane->pid = 'new-4bf305b4-c7b7-4244-ba73-09f69cc8a7fd';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-about';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'span',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'collapseCollection2',
    'css_class' => 'collapse',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '4bf305b4-c7b7-4244-ba73-09f69cc8a7fd';
  $display->content['new-4bf305b4-c7b7-4244-ba73-09f69cc8a7fd'] = $pane;
  $display->panels['left'][1] = 'new-4bf305b4-c7b7-4244-ba73-09f69cc8a7fd';
  $pane = new stdClass();
  $pane->pid = 'new-040da80d-8631-4d87-b12e-0719b3dbfa12';
  $pane->panel = 'middle';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Most Viewed',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<img class="img-responsive" src="ctt/sites/library-test.uta.edu.ctt/files/most-viewed.jpg">
<h4><a data-toggle="collapse" href="#collapseViewed2" area-expanded="false" aria-controls="collapseViewed2">Most Viewed</a></h4>
',
    'format' => 'php_code',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'viewed',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '040da80d-8631-4d87-b12e-0719b3dbfa12';
  $display->content['new-040da80d-8631-4d87-b12e-0719b3dbfa12'] = $pane;
  $display->panels['middle'][0] = 'new-040da80d-8631-4d87-b12e-0719b3dbfa12';
  $pane = new stdClass();
  $pane->pid = 'new-4343d249-cd13-49d5-85d0-1729b9f86417';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'recently_added-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'collapseViewed2',
    'css_class' => 'collapse',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '4343d249-cd13-49d5-85d0-1729b9f86417';
  $display->content['new-4343d249-cd13-49d5-85d0-1729b9f86417'] = $pane;
  $display->panels['middle'][1] = 'new-4343d249-cd13-49d5-85d0-1729b9f86417';
  $pane = new stdClass();
  $pane->pid = 'new-68cffcb5-2317-4fbb-bac6-bbcc661e387e';
  $pane->panel = 'right';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Most Recently Added',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<img class="img-responsive" src="ctt/sites/library-test.uta.edu.ctt/files/featured-item.jpg">
<h4><a data-toggle="collapse" href="#collapseFeatured2" area-expanded="false" aria-controls="collapseFeatured2">Recently Added</a></h4>
',
    'format' => 'php_code',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'featured',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '68cffcb5-2317-4fbb-bac6-bbcc661e387e';
  $display->content['new-68cffcb5-2317-4fbb-bac6-bbcc661e387e'] = $pane;
  $display->panels['right'][0] = 'new-68cffcb5-2317-4fbb-bac6-bbcc661e387e';
  $pane = new stdClass();
  $pane->pid = 'new-0bb4955f-0e01-462f-9c61-039d7e339b38';
  $pane->panel = 'right';
  $pane->type = 'views_panes';
  $pane->subtype = 'featured_items-panel_pane_1';
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
    'css_id' => 'collapseFeatured2',
    'css_class' => 'collapse',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '0bb4955f-0e01-462f-9c61-039d7e339b38';
  $display->content['new-0bb4955f-0e01-462f-9c61-039d7e339b38'] = $pane;
  $display->panels['right'][1] = 'new-0bb4955f-0e01-462f-9c61-039d7e339b38';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['clone_of_3_box'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'front_page_title';
  $mini->category = 'Front';
  $mini->admin_title = 'Front Page Title';
  $mini->admin_description = 'Site Name and search box';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'bootstrap_twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
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
      'top' => NULL,
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
  $display->uuid = '35eec671-4366-439b-bc5c-0e0c782a12eb';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'front_page_title';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-c811b68d-0137-45ec-ad00-089c204c38e5';
  $pane->panel = 'left';
  $pane->type = 'page_logo';
  $pane->subtype = 'page_logo';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'img-responsive ',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'c811b68d-0137-45ec-ad00-089c204c38e5';
  $display->content['new-c811b68d-0137-45ec-ad00-089c204c38e5'] = $pane;
  $display->panels['left'][0] = 'new-c811b68d-0137-45ec-ad00-089c204c38e5';
  $pane = new stdClass();
  $pane->pid = 'new-076fdbf1-5315-4d10-b098-50adcbcadba7';
  $pane->panel = 'right';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Sitename',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<p>COVERS, TITLES, AND TABLES:<br />
<small>The Formations of American Literary Canons in Anthologies</small></p>
',
    'format' => 'php_code',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'pane-page-site-name ',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '076fdbf1-5315-4d10-b098-50adcbcadba7';
  $display->content['new-076fdbf1-5315-4d10-b098-50adcbcadba7'] = $pane;
  $display->panels['right'][0] = 'new-076fdbf1-5315-4d10-b098-50adcbcadba7';
  $pane = new stdClass();
  $pane->pid = 'new-043b8c3b-ec2c-4a3d-8af8-cdba2df70450';
  $pane->panel = 'right';
  $pane->type = 'page_site_name';
  $pane->subtype = 'page_site_name';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'linked' => 0,
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
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '043b8c3b-ec2c-4a3d-8af8-cdba2df70450';
  $display->content['new-043b8c3b-ec2c-4a3d-8af8-cdba2df70450'] = $pane;
  $display->panels['right'][1] = 'new-043b8c3b-ec2c-4a3d-8af8-cdba2df70450';
  $pane = new stdClass();
  $pane->pid = 'new-196b39cb-316a-4e11-9296-b1f98c21398b';
  $pane->panel = 'right';
  $pane->type = 'block';
  $pane->subtype = 'views--exp-search-page_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'inherit_path' => 0,
    'override_title' => 1,
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
  $pane->uuid = '196b39cb-316a-4e11-9296-b1f98c21398b';
  $display->content['new-196b39cb-316a-4e11-9296-b1f98c21398b'] = $pane;
  $display->panels['right'][2] = 'new-196b39cb-316a-4e11-9296-b1f98c21398b';
  $pane = new stdClass();
  $pane->pid = 'new-75c9b466-4101-4bbe-854f-627c78aa0a8c';
  $pane->panel = 'right';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Editor',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<p class="editorBracket">Kenneth M. Roemer, Project Director</p>
',
    'format' => 'php_code',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '75c9b466-4101-4bbe-854f-627c78aa0a8c';
  $display->content['new-75c9b466-4101-4bbe-854f-627c78aa0a8c'] = $pane;
  $display->panels['right'][3] = 'new-75c9b466-4101-4bbe-854f-627c78aa0a8c';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['front_page_title'] = $mini;

  return $export;
}
