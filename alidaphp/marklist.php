<html>
    <body>
        <h1>MARKLIST</h1>
        <form method="POST" action="">
            Enter name:<input type="text" name="name"><br>
            Enter class:<input type="text" name="class"><br>
            Enter mark1:<input type="number" name="mark1"><br>
            Enter mark2:<input type="number" name="mark2"><br>
            Enter mark3:<input type="number" name="mark3"><br>
            <input type="submit" name="submit" value="submit">
</from>
</body>
<?php
if(isset($_POST["submit"]))
{
 $n=$_POST["name"];
 $c=$_POST["class"];
 $m1=$_POST["mark1"];
 $m2=$_POST["mark2"];
 $m3=$_POST["mark3"];
 $t=$m1+$m2+$m3;
 echo "<center>Student Details</center><br>";
 echo "<table border=1 align=center>";
 echo "<tr><td>Name</td><td>$n</td></tr>";
 echo "<tr><td>Class</td><td>$c</td></tr>";
 echo "<table border=1 align=center>";
 echo "<tr><th>Subject</th><th>Mark</th><th>MaxMark</th></tr>";
 echo "<tr><td>C</td><td>$m1</td><td>100</td></tr>";
 echo "<tr><td>Python</td><td>$m2</td><td>100</td></tr>";
 echo "<tr><td>Java</td><td>$m3</td><td>100</td></tr>";
 echo "<tr><td>Total</td><td>$t</td><td>300</td></tr>";
}