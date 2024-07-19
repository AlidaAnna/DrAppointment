<html>
    <body>
        <h1>Sum</h1>
        <form method="POST" action="">
            Enter first number:<input type="number" name="num1"><br>
            Enter second number:<input type="number" name="num2"><br>
            <input type="submit" name="submit"  value="ok">
</form>
</body>
<?php
if(isset($_POST["submit"]))
{
    $n1=$_POST["num1"];
    $n2=$_POST["num2"];
    $sum=$n1+$n2;
    echo "Sum is:"."$sum"."<br>";
}
?>
</html>