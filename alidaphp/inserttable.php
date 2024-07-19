
<?php
date_default_timezone_set("Asia/Calcutta");
?>
<html>
    <body>
        <form method="POST" action="">
            Enter number:<input type="text" name="no"><br>
            Enter name:<input type="text" name="name"><br>
            Enter date:<input type="date" name="date"><br>
            <input type="submit" name="submit" value="ok">
</form>
</body>
<?php
if(isset($_POST["submit"]))
{
    $no=$_POST["no"];
    $name=$_POST["name"];
    $date=$_POST["date"];
    $con=mysqli_connect('localhost','root','','sample');
    $query="INSERT into emp value('$no','$name','$date')";
    $result=mysqli_query($con,$query);
    $query="select * from emp";
    $result=mysqli_query($con,$query);
    echo "<table  border=1 align=center>";
    echo "<tr><th>Employee Id</th><th>Employee Name</th><th>DOB</th></tr>";
    while($row=mysqli_fetch_array($result))
    {
        echo "<tr><td>".$row[0]."</td><td>".$row[1]."</td><td>".date("d-m-y",strtotime($row['2']))."</td></tr>";
    }
    echo "</table>";
    mysqli_close($con);
}