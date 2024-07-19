<html>
    <body>
        <h1>PERFECT NUMBER</h1>
</body>
<?php
$a=array(1,2,3,4,5,6,78,28,54,496);
$l=count($a);
for($i=0;$i<$l;$i++)
{

    $s=0;
    for($j=1;$j<=$a[$i]/2;$j++)
    {
        if($a[$i]%$j==0)
        {
            $s=$s+$j;
        }
    }
    if($a[$i]==$s)
    {
       echo $a[$i]."<br>";
    }
}
?>