<?php
/**
 * @file
 * inventory_app.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function inventory_app_user_default_roles() {
  $roles = array();

  // Exported role: taxonomist.
  $roles['taxonomist'] = array(
    'name' => 'taxonomist',
    'weight' => 3,
  );

  return $roles;
}
