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
for($i=1;$i<$n;$i++)
{
$temp=$i;
$am=0;
while($temp>0)
{
 $num=$temp%10;
 $am=$am+($num*$num*$num);
 $temp=(int)($temp/10);
}
if($am==$i)
{
    echo "<br>".$am;
}
}
/*
else
{
    echo $am."is not amstrong";
}
    */
}

