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
$temp=$n;
$pali=0;
while($n>0)
{
 $num=$n%10;
 $pali=($pali*10)+$num;
 $n=(int)($n/10);
}
if($pali==$temp)
{
    echo $pali."is a palindrome";
}
else
{
    echo $pali."is not palindrome";
}
}

