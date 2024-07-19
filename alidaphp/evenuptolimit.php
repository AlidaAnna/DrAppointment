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
for($i=2;$i<=$n;$i=$i+2)
{
    echo $i."<br>";
}

}