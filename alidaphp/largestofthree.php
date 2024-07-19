<html>
    <body>
        <form method="POST" action="">
            NUMBER1:<input type="number" name="num1">
            NUMBER2:<input type="number" name="num2">
            NUMBER3:<input type="number" name="num3">
            <input type="submit" name="submit">
</form>
</body>
<?php
if(isset($_POST["submit"]))
{
$n1=$_POST["num1"];
$n2=$_POST["num2"];
$n3=$_POST["num3"];
if($n1>$n2&&$n1>$n3)
{
    echo $n1;
}
else if($n2>$n3)
{
  echo $n2;
}
else
{
    echo $n3;
}
}