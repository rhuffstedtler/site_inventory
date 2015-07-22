<?php
/**
 * @file
 * inventory_app.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function inventory_app_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer taxonomy'.
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      'administrator' => 'administrator',
      'taxonomist' => 'taxonomist',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in disposition'.
  $permissions['delete terms in disposition'] = array(
    'name' => 'delete terms in disposition',
    'roles' => array(
      'taxonomist' => 'taxonomist',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in industry'.
  $permissions['delete terms in industry'] = array(
    'name' => 'delete terms in industry',
    'roles' => array(
      'taxonomist' => 'taxonomist',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in locale'.
  $permissions['delete terms in locale'] = array(
    'name' => 'delete terms in locale',
    'roles' => array(
      'taxonomist' => 'taxonomist',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in page_type'.
  $permissions['delete terms in page_type'] = array(
    'name' => 'delete terms in page_type',
    'roles' => array(
      'taxonomist' => 'taxonomist',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in status'.
  $permissions['delete terms in status'] = array(
    'name' => 'delete terms in status',
    'roles' => array(
      'taxonomist' => 'taxonomist',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in tags'.
  $permissions['delete terms in tags'] = array(
    'name' => 'delete terms in tags',
    'roles' => array(
      'administrator' => 'administrator',
      'taxonomist' => 'taxonomist',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in template'.
  $permissions['delete terms in template'] = array(
    'name' => 'delete terms in template',
    'roles' => array(
      'taxonomist' => 'taxonomist',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in topic'.
  $permissions['delete terms in topic'] = array(
    'name' => 'delete terms in topic',
    'roles' => array(
      'taxonomist' => 'taxonomist',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in disposition'.
  $permissions['edit terms in disposition'] = array(
    'name' => 'edit terms in disposition',
    'roles' => array(
      'taxonomist' => 'taxonomist',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in industry'.
  $permissions['edit terms in industry'] = array(
    'name' => 'edit terms in industry',
    'roles' => array(
      'taxonomist' => 'taxonomist',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in locale'.
  $permissions['edit terms in locale'] = array(
    'name' => 'edit terms in locale',
    'roles' => array(
      'taxonomist' => 'taxonomist',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in page_type'.
  $permissions['edit terms in page_type'] = array(
    'name' => 'edit terms in page_type',
    'roles' => array(
      'taxonomist' => 'taxonomist',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in status'.
  $permissions['edit terms in status'] = array(
    'name' => 'edit terms in status',
    'roles' => array(
      'taxonomist' => 'taxonomist',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in tags'.
  $permissions['edit terms in tags'] = array(
    'name' => 'edit terms in tags',
    'roles' => array(
      'administrator' => 'administrator',
      'taxonomist' => 'taxonomist',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in template'.
  $permissions['edit terms in template'] = array(
    'name' => 'edit terms in template',
    'roles' => array(
      'taxonomist' => 'taxonomist',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in topic'.
  $permissions['edit terms in topic'] = array(
    'name' => 'edit terms in topic',
    'roles' => array(
      'taxonomist' => 'taxonomist',
    ),
    'module' => 'taxonomy',
  );

  return $permissions;
}
