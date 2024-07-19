<html>
    <body>
        <form method="POST" action="">
        <input type="radio" name="choice" value="Male" required>:Male
        <input type="radio" name="choice" value="Female" >:Female
        <input type="submit" name="submit" value="ok">
</form>
</body>
<?php
if(isset($_POST["submit"]))
{
    $time=$_POST["gender"];
    $p=$_POST["accept"];
    echo "accepted". $p;
    echo "selected item is".$time;
}
?>