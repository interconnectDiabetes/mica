<?php
/**
 * @file
 * override.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function override_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: field_base
  $overrides["field_base.field_access_biosamples.settings|field_description_infos|field_description_body"] = 'Specify if requests for access to study biological samples by external researchers or third parties would be considered.';
  $overrides["field_base.field_access_biosamples.settings|profile2_private"] = FALSE;
  $overrides["field_base.field_access_data.settings|field_description_infos|field_description_body"] = 'Specify if requests for access to individual participant data from the study by external researchers or third parties would be considered.
  ';
  $overrides["field_base.field_access_data.settings|profile2_private"] = FALSE;

  // Exported overrides for: field_instance
  $overrides["field_instance.node-study-body.required"] = 0;
  $overrides["field_instance.node-study-body.widget|weight"] = 5;
  $overrides["field_instance.node-study-field_access_biosamples.description"] = 'Specify if requests for access to study biological samples by external researchers or third parties would be considered.';
  $overrides["field_instance.node-study-field_access_data.description"] = 'Specify if requests for access to individual participant data from the study by external researchers or third parties would be considered.
  ';
  $overrides["field_instance.node-study-field_contacts_ref.description"] = 'Enter the contact full name to look up an existing contact, or create a new contact by clicking on Create Contact link. Multiple contacts can be added by clicking Add another item.';
  $overrides["field_instance.node-study-field_contacts_ref.widget|module"] = 'node_reference';
  $overrides["field_instance.node-study-field_contacts_ref.widget|settings"] = array(
    'autocomplete_match' => 'contains',
    'autocomplete_path' => 'node_reference/autocomplete',
    'references_dialog_add' => 1,
    'references_dialog_edit' => 1,
    'references_dialog_search' => 1,
    'references_dialog_search_view' => '',
    'size' => 60,
  );
  $overrides["field_instance.node-study-field_contacts_ref.widget|type"] = 'node_reference_autocomplete';
  $overrides["field_instance.node-study-field_marker_paper.label"] = 'Study Reference Paper';

  // Exported overrides for: field_group
  //$overrides["field_group.group_marker_paper|node|study|form.data|label"] = 'Study Reference Paper';
  
 return $overrides;
}
