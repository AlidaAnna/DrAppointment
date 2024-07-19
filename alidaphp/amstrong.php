 <html>
    <body>
    <h1>Amstrong Number</h1>
    <form method="POST" action="">
        Enter the limit:<input type="number" name="num">
        <input type="submit" name="submit" value ="ok">
</form>
</body>
<?php
if(isset($_POST["submit"]))
{
 $n=$_POST["num"];
 for($i=1;$i<$n;$i++)
 {
    $temp=$i;
    $a=0;
    while($temp!=0)
    {
        $r=$temp%10;
        $a=$a+($r*$r*$r);
        $temp=$temp/10;
    }
    if($i==$a)
    {
        echo "$i"."<br>";
    }
 }
}
?>
</html>


