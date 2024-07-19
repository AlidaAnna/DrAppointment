<html>
    <body>
        <form method="POST" action="">
            NUMBER:<input type="number" name="num">
            <input type="submit" name="submit">
</form>
</body>
<?php
if(isset($_POST["submit"]))
{
$n=$_POST["num"];
$sum=0;
for($i=1;$i<=$n;$i++)
{
    $sum=$sum+$i;
}
echo $sum;
}