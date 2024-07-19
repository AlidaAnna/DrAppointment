<?php
$s="";
$l="";
$line=fopen("hai.txt","r");
$s=fgets($line);
$l=$s;
while(!feof($line))
{
    $c=fgets($line);
    if(strlen($c) < strlen($s))
    {
        $s=$c;
    }
    if(strlen($c) > strlen($l))
    {
        $l=$c;
    }
}
echo "smallest:".$s."<br>";
echo "largest:".$l;
?>