<html>
    <form method="POST" action="">
        enter limit<input type="text" name="ename"><br>
        <input type="submit" name="submit" value="submit"><br>
</form>
</html>
<?php
if(isset($_POST['submit']))
{
    $n=$_POST['ename'];
    for($i=1;$i<$n;$i++)
    {
        $count=0;
        for($j=2;$j<$n/2;$j++)
        {
            if($i%$j==0)
            {
            $count=$count+1;
            }
        }
        if($count<2)
        {
            echo "$i";
        }
    }
}
?>