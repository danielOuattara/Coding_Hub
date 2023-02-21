
<?php

$a;
echo "a = " .  $a . "\n"; // OK // undefined
$a = 0;   // a =  // WARNING

$b = 123;
echo "b = " .  $b . "\n";

$c;
echo "c  = " .  $c . "\n";  // WARNING
$c = 0;

echo $a + $b;

$a = $a + 1;
echo "a = " .  $a . "\n";

$c += 12.2344;
echo "c = " .  $c . "\n";

$letter;
echo "letter = " .  $letter  . "\n";  // WARNING
$letter = "Z";

$phrase;
echo "phrase = " .  $phrase . "\n";  // WARNING
$phrase = "Hello world";
