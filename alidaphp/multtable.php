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
for($i=1;$i<=10;$i++)
{
    echo "<br>".$i."*".$n."=".($i*$n);
}
}