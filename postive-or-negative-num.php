<?php
$fhandle = fopen ("php://stdin","r");
$number = fgets($fhandle);
if($number<0)
echo "Negative";
else if($number>0)
echo "Positive";
else
echo "Zero";
?>
