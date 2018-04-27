<?php
/**
 * @file
 * cu_main_feature.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function cu_main_feature_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_home:<front>.
  $menu_links['main-menu_home:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'identifier' => 'main-menu_home:<front>',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: main-menu_our-organization:uuid/node/37e05a54-6e68-41e6-b3ab-330618485a71.
  $menu_links['main-menu_our-organization:uuid/node/37e05a54-6e68-41e6-b3ab-330618485a71'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'uuid/node/37e05a54-6e68-41e6-b3ab-330618485a71',
    'router_path' => 'uuid',
    'link_title' => 'OUR ORGANIZATION',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_our-organization:uuid/node/37e05a54-6e68-41e6-b3ab-330618485a71',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: main-menu_website-feedback:uuid/node/98395de0-49a4-4c32-9395-dcd7071561cc.
  $menu_links['main-menu_website-feedback:uuid/node/98395de0-49a4-4c32-9395-dcd7071561cc'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'uuid/node/98395de0-49a4-4c32-9395-dcd7071561cc',
    'router_path' => 'uuid',
    'link_title' => 'WEBSITE FEEDBACK',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_website-feedback:uuid/node/98395de0-49a4-4c32-9395-dcd7071561cc',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-digital-collections_about-us:uuid/node/3dfbfeaf-cb77-4ac0-b16f-145af17649b5.
  $menu_links['menu-footer-digital-collections_about-us:uuid/node/3dfbfeaf-cb77-4ac0-b16f-145af17649b5'] = array(
    'menu_name' => 'menu-footer-digital-collections',
    'link_path' => 'uuid/node/3dfbfeaf-cb77-4ac0-b16f-145af17649b5',
    'router_path' => 'uuid',
    'link_title' => 'About Us',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'identifier' => 'menu-footer-digital-collections_about-us:uuid/node/3dfbfeaf-cb77-4ac0-b16f-145af17649b5',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-digital-collections_library-news:https://library.carleton.ca/library-news.
  $menu_links['menu-footer-digital-collections_library-news:https://library.carleton.ca/library-news'] = array(
    'menu_name' => 'menu-footer-digital-collections',
    'link_path' => 'https://library.carleton.ca/library-news',
    'router_path' => '',
    'link_title' => 'Library News',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'identifier' => 'menu-footer-digital-collections_library-news:https://library.carleton.ca/library-news',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu_contact:node/3.
  $menu_links['menu-footer-menu_contact:node/3'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'node/3',
    'router_path' => 'node/%',
    'link_title' => 'Contact',
    'options' => array(
      'identifier' => 'menu-footer-menu_contact:node/3',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 0,
  );
  // Exported menu link: menu-footer-menu_creative-content-license:uuid/node/09648dae-14d6-46fe-82cd-cf4c0739201d.
  $menu_links['menu-footer-menu_creative-content-license:uuid/node/09648dae-14d6-46fe-82cd-cf4c0739201d'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'uuid/node/09648dae-14d6-46fe-82cd-cf4c0739201d',
    'router_path' => 'uuid',
    'link_title' => 'Creative content license',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-footer-menu_creative-content-license:uuid/node/09648dae-14d6-46fe-82cd-cf4c0739201d',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu_login:user/login.
  $menu_links['menu-footer-menu_login:user/login'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'user/login',
    'router_path' => 'user/login',
    'link_title' => 'Login',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-footer-menu_login:user/login',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu_logout:user/logout.
  $menu_links['menu-footer-menu_logout:user/logout'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'user/logout',
    'router_path' => 'user/logout',
    'link_title' => 'Logout',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-footer-menu_logout:user/logout',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu_researchers:uuid/node/11ab3414-deb5-4985-9797-1a90ac057005.
  $menu_links['menu-footer-menu_researchers:uuid/node/11ab3414-deb5-4985-9797-1a90ac057005'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'uuid/node/11ab3414-deb5-4985-9797-1a90ac057005',
    'router_path' => 'uuid',
    'link_title' => 'Researchers',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-footer-menu_researchers:uuid/node/11ab3414-deb5-4985-9797-1a90ac057005',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu_terms-of-use:uuid/node/b7fa5f34-ae36-4ac5-adb1-757c65813f4a.
  $menu_links['menu-footer-menu_terms-of-use:uuid/node/b7fa5f34-ae36-4ac5-adb1-757c65813f4a'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'uuid/node/b7fa5f34-ae36-4ac5-adb1-757c65813f4a',
    'router_path' => 'uuid',
    'link_title' => 'Terms of Use',
    'options' => array(
      'identifier' => 'menu-footer-menu_terms-of-use:uuid/node/b7fa5f34-ae36-4ac5-adb1-757c65813f4a',
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-quick-links_ares:https://library.carleton.ca/services/library-reserves-faculty-and-instructors/ares.
  $menu_links['menu-footer-quick-links_ares:https://library.carleton.ca/services/library-reserves-faculty-and-instructors/ares'] = array(
    'menu_name' => 'menu-footer-quick-links',
    'link_path' => 'https://library.carleton.ca/services/library-reserves-faculty-and-instructors/ares',
    'router_path' => '',
    'link_title' => 'Ares',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'identifier' => 'menu-footer-quick-links_ares:https://library.carleton.ca/services/library-reserves-faculty-and-instructors/ares',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-search_summon-books-articles-more:https://carletonu.summon.serialssolutions.com/#!/search.
  $menu_links['menu-footer-search_summon-books-articles-more:https://carletonu.summon.serialssolutions.com/#!/search'] = array(
    'menu_name' => 'menu-footer-search',
    'link_path' => 'https://carletonu.summon.serialssolutions.com/#!/search',
    'router_path' => '',
    'link_title' => 'Summon (books, articles, more)',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'identifier' => 'menu-footer-search_summon-books-articles-more:https://carletonu.summon.serialssolutions.com/#!/search',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-social-media-menu_facebook:https://www.facebook.com/discgarden/.
  $menu_links['menu-footer-social-media-menu_facebook:https://www.facebook.com/discgarden/'] = array(
    'menu_name' => 'menu-footer-social-media-menu',
    'link_path' => 'https://www.facebook.com/discgarden/',
    'router_path' => '',
    'link_title' => 'Facebook',
    'options' => array(
      'icon' => array(
        'bundle' => 'dgi_default_bundle',
        'icon' => 'facebook-squared',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_replace',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-footer-social-media-menu_facebook:https://www.facebook.com/discgarden/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-social-media-menu_twitter:https://twitter.com/discgarden.
  $menu_links['menu-footer-social-media-menu_twitter:https://twitter.com/discgarden'] = array(
    'menu_name' => 'menu-footer-social-media-menu',
    'link_path' => 'https://twitter.com/discgarden',
    'router_path' => '',
    'link_title' => 'Twitter',
    'options' => array(
      'icon' => array(
        'bundle' => 'dgi_default_bundle',
        'icon' => 'twitter-squared',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_replace',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-footer-social-media-menu_twitter:https://twitter.com/discgarden',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-social-media-menu_youtube:https://www.youtube.com/channel/UCdssmuc1TIHR-2ScQB1iqIQ.
  $menu_links['menu-footer-social-media-menu_youtube:https://www.youtube.com/channel/UCdssmuc1TIHR-2ScQB1iqIQ'] = array(
    'menu_name' => 'menu-footer-social-media-menu',
    'link_path' => 'https://www.youtube.com/channel/UCdssmuc1TIHR-2ScQB1iqIQ',
    'router_path' => '',
    'link_title' => 'YouTube',
    'options' => array(
      'icon' => array(
        'bundle' => 'dgi_default_bundle',
        'icon' => 'youtube-play',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_replace',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
      ),
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-footer-social-media-menu_youtube:https://www.youtube.com/channel/UCdssmuc1TIHR-2ScQB1iqIQ',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-header-menu_about-this-site:node/5.
  $menu_links['menu-header-menu_about-this-site:node/5'] = array(
    'menu_name' => 'menu-header-menu',
    'link_path' => 'node/5',
    'router_path' => 'node/%',
    'link_title' => 'About this site',
    'options' => array(
      'identifier' => 'menu-header-menu_about-this-site:node/5',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-header-menu_about-this-site:uuid/node/3dfbfeaf-cb77-4ac0-b16f-145af17649b5.
  $menu_links['menu-header-menu_about-this-site:uuid/node/3dfbfeaf-cb77-4ac0-b16f-145af17649b5'] = array(
    'menu_name' => 'menu-header-menu',
    'link_path' => 'uuid/node/3dfbfeaf-cb77-4ac0-b16f-145af17649b5',
    'router_path' => 'uuid',
    'link_title' => 'About this site',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-header-menu_about-this-site:uuid/node/3dfbfeaf-cb77-4ac0-b16f-145af17649b5',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-header-menu_browse-repository:islandora.
  $menu_links['menu-header-menu_browse-repository:islandora'] = array(
    'menu_name' => 'menu-header-menu',
    'link_path' => 'islandora',
    'router_path' => 'islandora',
    'link_title' => 'Browse Repository',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-header-menu_browse-repository:islandora',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-header-menu_make-contact:uuid/node/329a2134-140a-4447-a59f-389948bef2ba.
  $menu_links['menu-header-menu_make-contact:uuid/node/329a2134-140a-4447-a59f-389948bef2ba'] = array(
    'menu_name' => 'menu-header-menu',
    'link_path' => 'uuid/node/329a2134-140a-4447-a59f-389948bef2ba',
    'router_path' => 'uuid',
    'link_title' => 'Make contact',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-header-menu_make-contact:uuid/node/329a2134-140a-4447-a59f-389948bef2ba',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-header-menu_my-bookmarks:islandora-bookmark.
  $menu_links['menu-header-menu_my-bookmarks:islandora-bookmark'] = array(
    'menu_name' => 'menu-header-menu',
    'link_path' => 'islandora-bookmark',
    'router_path' => 'islandora-bookmark',
    'link_title' => 'My Bookmarks',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-header-menu_my-bookmarks:islandora-bookmark',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-leaderboard-menu_about:uuid/node/3dfbfeaf-cb77-4ac0-b16f-145af17649b5.
  $menu_links['menu-leaderboard-menu_about:uuid/node/3dfbfeaf-cb77-4ac0-b16f-145af17649b5'] = array(
    'menu_name' => 'menu-leaderboard-menu',
    'link_path' => 'uuid/node/3dfbfeaf-cb77-4ac0-b16f-145af17649b5',
    'router_path' => 'uuid',
    'link_title' => 'About',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'identifier' => 'menu-leaderboard-menu_about:uuid/node/3dfbfeaf-cb77-4ac0-b16f-145af17649b5',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-leaderboard-menu_advanced-search:uuid/node/c4f960eb-e02b-4b17-9ef3-ab0e5931ac0f.
  $menu_links['menu-leaderboard-menu_advanced-search:uuid/node/c4f960eb-e02b-4b17-9ef3-ab0e5931ac0f'] = array(
    'menu_name' => 'menu-leaderboard-menu',
    'link_path' => 'uuid/node/c4f960eb-e02b-4b17-9ef3-ab0e5931ac0f',
    'router_path' => 'uuid',
    'link_title' => 'Advanced Search',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'identifier' => 'menu-leaderboard-menu_advanced-search:uuid/node/c4f960eb-e02b-4b17-9ef3-ab0e5931ac0f',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-leaderboard-menu_macodrum-library:http://www.library.carleton.ca.
  $menu_links['menu-leaderboard-menu_macodrum-library:http://www.library.carleton.ca'] = array(
    'menu_name' => 'menu-leaderboard-menu',
    'link_path' => 'http://www.library.carleton.ca',
    'router_path' => '',
    'link_title' => 'MacOdrum Library',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'identifier' => 'menu-leaderboard-menu_macodrum-library:http://www.library.carleton.ca',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: user-menu_log-out:user/logout.
  $menu_links['user-menu_log-out:user/logout'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user/logout',
    'router_path' => 'user/logout',
    'link_title' => 'Log out',
    'options' => array(
      'identifier' => 'user-menu_log-out:user/logout',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: user-menu_login:user/login.
  $menu_links['user-menu_login:user/login'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user/login',
    'router_path' => 'user/login',
    'link_title' => 'Login',
    'options' => array(
      'icon' => array(
        'icon' => '',
        'wrapper' => '',
        'wrapper_class' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'user-menu_login:user/login',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: user-menu_user-account:user.
  $menu_links['user-menu_user-account:user'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user',
    'router_path' => 'user',
    'link_title' => 'User account',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'user-menu_user-account:user',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('About');
  t('About Us');
  t('About this site');
  t('Advanced Search');
  t('Ares');
  t('Browse Repository');
  t('Contact');
  t('Creative content license');
  t('Facebook');
  t('Home');
  t('Library News');
  t('Log out');
  t('Login');
  t('Logout');
  t('MacOdrum Library');
  t('Make contact');
  t('My Bookmarks');
  t('OUR ORGANIZATION');
  t('Researchers');
  t('Summon (books, articles, more)');
  t('Terms of Use');
  t('Twitter');
  t('User account');
  t('WEBSITE FEEDBACK');
  t('YouTube');

  return $menu_links;
}
