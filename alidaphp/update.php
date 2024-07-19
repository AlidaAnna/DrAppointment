<?php
date_default_timezone_set("Asia/Calcutta");
?>
<form method="POST" action="">
    enter the id:<input type="text" name="no">
            <input type="submit" name="submit" value="ok">
</form>
</body>
<?php
if(isset($_POST["submit"]))
{
    $no=$_POST["no"];
    $con=mysqli_connect('localhost','root','','sample');
    $query="update emp set ename='Anna' where eno=$no";
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
