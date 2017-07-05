<?php
/**
 * @file
 * ctt_structure.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function ctt_structure_user_default_roles() {
  $roles = array();

  // Exported role: Content Editor.
  $roles['Content Editor'] = array(
    'name' => 'Content Editor',
    'weight' => 3,
  );

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 2,
  );

  return $roles;
}
