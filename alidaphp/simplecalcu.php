<html>
    <body>
        <form method="POST" action="">
            NUMBER1:<input type="number" name="num1"><br>
            NUMBER2:<input type="number" name="num2"><br>
            <input type="submit" name="add" value="add">
            <input type="submit" name="sub" value="sub">
            <input type="submit" name="mult" value="mult">
            <input type="submit" name="div" value="div">
</form>
</body>
<?php
if(isset($_POST["add"]))
{
$n1=$_POST["num1"];
$n2=$_POST["num2"];
$sum=$n1+$n2;
echo "SUM is:".$sum;
}
if(isset($_POST["sub"]))
{
$n1=$_POST["num1"];
$n2=$_POST["num2"];
$sub=$n1-$n2;
echo "Diff is:".$sub;
}
if(isset($_POST["mult"]))
{
$n1=$_POST["num1"];
$n2=$_POST["num2"];
$mult=$n1*$n2;
echo "product is:".$mult;
}
if(isset($_POST["div"]))
{
$n1=$_POST["num1"];
$n2=$_POST["num2"];
$div=$n1/$n2;
echo "division is:".$div;
}
?>
