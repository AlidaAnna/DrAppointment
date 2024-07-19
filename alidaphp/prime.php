<html>
    <body>
        <form method="POST" action="">
            Limit:<input type="number" name="num">
            <input type="submit" name="submit">
</form>
</body>
<?php
if(isset($_POST["submit"]))
{
$n=$_POST["num"];
for($j=1;$j<$n;$j++)
{
$count=0;
for($i=1;$i<=$j/2;$i++)
{
    if($j%$i==0)
{
     $count=$count+1;
}
}
if($count<2)
{
    echo $j;
}
}
/*else
{
    echo" prime";
}
    */
}

//echo $sum;