<?php 
function hanoi($plates, $from, $to) { 
while($plates > 0) 
{ 
    $using = 6 - ($from + $to); 
    hanoi(--$plates, $from, $using);    
    print "Move plate from $from to $to \n"; 
    $from = $using; 
    } 
} 
hanoi(3, 1, 3); 
?>
