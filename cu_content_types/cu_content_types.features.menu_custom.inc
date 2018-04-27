<?php
/**
 * @file
 * cu_content_types.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function cu_content_types_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-footer-digital-collections.
  $menus['menu-footer-digital-collections'] = array(
    'menu_name' => 'menu-footer-digital-collections',
    'title' => 'Footer library',
    'description' => '',
  );
  // Exported menu: menu-footer-menu.
  $menus['menu-footer-menu'] = array(
    'menu_name' => 'menu-footer-menu',
    'title' => 'Footer Menu',
    'description' => '',
  );
  // Exported menu: menu-footer-quick-links.
  $menus['menu-footer-quick-links'] = array(
    'menu_name' => 'menu-footer-quick-links',
    'title' => 'Footer Quick Links',
    'description' => '',
  );
  // Exported menu: menu-footer-search.
  $menus['menu-footer-search'] = array(
    'menu_name' => 'menu-footer-search',
    'title' => 'Footer Search',
    'description' => '',
  );
  // Exported menu: menu-header-menu.
  $menus['menu-header-menu'] = array(
    'menu_name' => 'menu-header-menu',
    'title' => 'Header Menu',
    'description' => '
',
  );
  // Exported menu: menu-leaderboard-menu.
  $menus['menu-leaderboard-menu'] = array(
    'menu_name' => 'menu-leaderboard-menu',
    'title' => 'Leaderboard Menu',
    'description' => '',
  );
  // Exported menu: user-menu.
  $menus['user-menu'] = array(
    'menu_name' => 'user-menu',
    'title' => 'User menu',
    'description' => 'The <em>User</em> menu contains links related to the user\'s account, as well as the \'Log out\' link.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('
');
  t('Footer Menu');
  t('Footer Quick Links');
  t('Footer Search');
  t('Footer library');
  t('Header Menu');
  t('Leaderboard Menu');
  t('The <em>User</em> menu contains links related to the user\'s account, as well as the \'Log out\' link.');
  t('User menu');

  return $menus;
}
