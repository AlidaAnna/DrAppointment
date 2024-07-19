<html>
    <form method="POST" action="">
        num<input type="text" name="enum"><br>
       <input type="submit" name="submit" value="submit"><br>
</form>
</html>
<?php
if(isset($_POST['submit']))
{
    $n=$_POST['enum'];
    $f1=0;
    $f2=1;
    echo $f1.",".$f2;
    for($i=2;$i<=$n;$i++)
    {
        $f3=$f2+$f1;
        echo $f3;
        $f1=$f2;
        $f2=$f3;
    }
}
?>
