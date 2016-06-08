<?php
$fhandle = fopen ("php://stdin","r");
$String = fgets($fhandle);
$vowels = array("a", "e", "i", "o", "u", "A", "E", "I", "O", "U", " ");
$String = strrev($String);
echo "$String \n";
$String = str_replace($vowels, "", $String);
echo $String;
?>
