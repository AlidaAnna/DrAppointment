<?php
$files=fopen("hai.txt","a");
$txt="extra";
fwrite($files,"$txt");
fclose($files);
$files=fopen("hai.txt","r");
$s=fread($files,filesize("hai.txt"));
echo $s;
fclose($files);
?>