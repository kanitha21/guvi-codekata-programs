<?php
$fhandle = fopen ("php://stdin","r");
$str = fgets($fhandle);
echo preg_replace('/([^a-z\']|^)([a-z])/ie', '"$1".strtoupper("$2")', strtolower($str));
?>
