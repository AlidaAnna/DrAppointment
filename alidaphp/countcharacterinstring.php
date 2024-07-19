<html>
    <form method="POST" action="">
       Enter the word: <input type="text" name ="string">
        Enter the charcter:<input character="text" name="char">
        <input type="submit" name="submit" value="search">
</form>
</body>
<?php
if(isset($_POST["submit"]))
{
    $w=$_POST["string"];
    $c=$_POST["char"];
    $len=strlen($w);
    echo "$len";
    $count=0;
    for($i=0;$i<$len;$i++)
    {
        if($w[$i]==$c)
        {
        $count=$count+1;
        }
    }
    echo "$count";
}