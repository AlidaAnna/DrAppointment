<html>
    <body>
        <h3>ASSOCIATIVE ARRAY SEARCH</h3>
</body>
<?php
$number=array("key1"=>"1","key2"=>"2","key3"=>"3","key4"=>"4","key5"=>"5");
foreach($number as $x=>$y)
{
    echo $x."=".$y."<br>";
}
?>
<form method="POST" acion="">
Enter the number to be searched:<input type="number" name="num">
<input type="submit" name="submit" value="ok">
<?php
if(isset($_POST["submit"]))
{
    $n=$_POST["num"];
    $flag=0;
    foreach($number as $x=>$y)
    {
        if($y==$n)
        {
            echo "<br>"."$n"."found at".$x;
            $flag=1;
        }
    }
    if($flag==0)
    {
    echo "<br>"."not found";
    }
}
?>