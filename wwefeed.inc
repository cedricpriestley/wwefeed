<?php
// wwefeed.inc
/**
* Callback for retrieving a list of entities.
*
* @param string $entity_type
* @param string $bundle
* @param int $count
*/
function _wwefeed_get($count) {
  return wwefeed_get($count);
}
?>