<?php
/**
 * @file
 * communication_content_textformat.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function communication_content_textformat_taxonomy_default_vocabularies() {
  return array(
    'benefittype' => array(
      'name' => 'BenefitType',
      'machine_name' => 'benefittype',
      'description' => 'Type of Benefit',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
