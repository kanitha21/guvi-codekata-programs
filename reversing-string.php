<?php
$fhandle = fopen ("php://stdin","r");
$var = fgets($fhandle);
$length = strlen($var)-1;
$i = 0;
while ($i < $length+1) {
    echo $var[$length-$i];
    $i++;
}
