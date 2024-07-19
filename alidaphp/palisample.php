<html>
    <body>
        <form method="POST" action="">
         Enter number  :<input type="number" name="no"><br>
        Palindrome:<input type="checkbox" name="choice" value="pali"><br>
        reverse:<input type="checkbox" name="choice" value="reverse"><br>
        <input type="submit" name="submit" value="ok">
</form>
</body>
<?php
if(isset($_POST["submit"]))
{
    echo "hai";
    $no=$_POST["no"];
    $temp=$no;
    $rev=0;
    while($temp>0)
    {
        $n=$temp%10;
        $rev=($rev*10)+$n;
        $temp=(int)($temp/10);
    }
   $c=$_POST["choice"];
   if($c=="pali")
   {
    if($no==$rev)
    {
        echo "Palindrome";
    }
    else
    {
        echo "not palindrome";
    }
   }
   else if($c=="reverse")
   {
     echo $rev;
   }

}
?>