<html>
    <body>
        <h1>ASSOCIATIVE ARRAY REPEAT</h1>
</body>
<?php
$number=array("key1"=>"1","key2"=>"2","key3"=>"3","key4"=>"4","key5"=>"5","key6"=>"3","key7"=>"9","key8"=>"3","key9"=>"1");
foreach($number as $x=>$y)
{
    echo "<br>".$x."=".$y;
}
?>
<body>
    <form method="POST" action="">
        Enter the value:<input type="number" name="num">
        <input type="submit" name="submit" value="ok">
</form>
</body>
<?php
if(isset($_POST["submit"]))
{
    $n=$_POST["num"];
    $count=0;
    foreach($number as $x=>$y)
    {
        if($n==$y)
        {
            $count=$count+1;
        }
    }
    if($count==0)
    {
        echo"<br>".$n."not found";
    }
    else if($count==1)
    {
        echo "<br>".$n."found only one time";
    }
    else if($count>1)
    {
      echo "<br>".$n."found at".$count."number of times";
    }
}
?>

