<?php 
 function reverse_number(){
$fhandle = fopen ("php://stdin","r");
$number = fgets($fhandle);
$sum = 0;
while(floor($number)){
        $newnum = $number % 10;
        $sum = $sum * 10 + $newnum;
        $number = $number/10;
    }
    return $sum;
}
echo reverse_number();
?>
