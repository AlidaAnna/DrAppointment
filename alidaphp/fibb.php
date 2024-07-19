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
$f1=0;
$f2=1;
echo $f1.",".$f2;
for($i=2;$i<$n;$i++)
{
   $f3=$f1+$f2;
   echo ",".$f3; 
   $f1=$f2;
   $f2=$f3;
}
}
?>

