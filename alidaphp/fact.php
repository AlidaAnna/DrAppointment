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
$fact=1;
for($i=1;$i<=$n;$i++)
{
    $fact=$fact*$i;
}
echo $fact;
}