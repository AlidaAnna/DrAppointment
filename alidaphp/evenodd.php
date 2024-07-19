<?php
$f1=fopen("hai.txt","w");
$test="1,2,3,4,5,6,7,8";
fwrite($f1,$test);
fclose($f1);
$f1=fopen("hai.txt","r");
$f2=fopen("even.txt","w");
$f3=fopen("odd.txt","w");
while(!feof($f1))
{
    $c=fgetc($f1);
    $s=(int)$c%2;
    if($s==0)
    {
    fwrite($f2,$c);
    }
    else
    {
    fwrite($f3,$c);
    }
}
    fclose($f1);
    fclose($f2);
    fclose($f3);
    $f2=fopen("even.txt","r");
   while(!feof($f2))
   {
    $e=fgets($f2);
    echo $e;
   }
    fclose($f2);
    $f3=fopen("odd.txt","r");
    while(!feof($f3))
    {
     $o=fgets($f3);
     echo $o;
    }
    fclose($f3);


?>