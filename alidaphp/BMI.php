<html>
    <body>
        <form method="POST" action="">
        Enter height in Meter:<input type="number" name="h">
        Enter Weight in kg:<input type="number" name="w">
        <input type="submit" name="submit" value="ok">
</form>
</body>
<?php
if(isset($_POST["submit"]))
{
    $h=$_POST["h"];
    $w=$_POST["w"];
    $h1=$h/100;
    $BMI=$w/($h1*$h1);
    echo "BMI IS:".$BMI."<br>";
    if($BMI<18.5)
    {
        echo "underweight";
    }
    else if($BMI>=18.5&&$BMI<24.5)
    {
        echo "Normal weight";
    }
    else if($BMI>=25&&$BMI<29.5)
    {
        echo "overweight";
    }
    else if($BMI>29.5)
    {
        echo "dangerous";
    }
}
?>