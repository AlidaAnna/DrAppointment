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
while($n>0)
{
    $num=$n%10;
    $sum=$sum+$num;
    $n=$n/10;
}
echo "Sum of digits: " . $sum;
}