<html>
    <body>
        <h1>Simple Intrest</h1>
        <form method="POST" action="">
            Enter principle amount:<input type="number" name="pri"><br>
            Enter the number of years:<input type="number" name="year"><br>
            Enter the rate:<input type="Number" name="rate"><br>
            <input type="submit" name="submit" value="ok">
</form>
</body>
<?php
    if(isset($_POST["submit"]))
    {
        $p=(int)$_POST["pri"];
        $y=(int)$_POST["year"];
        $r=(int)$_POST["rate"];
        function intreset($p,$y,$r)
        {
            $i=($p*$y*$r)/100;
            return ($i);
        }
        $i=intreset($p,$y,$r);
        echo "simple intreset=".$i;
    }
?>
        

</body>