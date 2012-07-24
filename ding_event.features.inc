<?php
/**
 * @file
 * ding_event.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ding_event_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function ding_event_views_api() {
  return array(
    'api' => 3,
    'template path' => drupal_get_path('module', 'ding_event') . '/templates',
  );
}

/**
 * Implements hook_node_info().
 */
function ding_event_node_info() {
  $items = array(
    'ding_event' => array(
      'name' => t('Event'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
  );
  return $items;
}
