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
if($n>0)
{
    echo "positive";
}
else if($n<0)
{
  echo "negative";
}
else
{
    echo "Zero";
}
}