<html>
    <form method="POST" action="">
        id<input type="text" name="eid"><br>
        name<input type="text" name="ename"><br>
        salary<input type="text" name="esal"><br>
        <input type="submit" name="submit" value="submit"><br>
        search<input type="text" name="ese"><br>
        <input type="submit" name="submit1" value="submit"><br>
</form>
</html>
<?php
$con=mysqli_connect('localhost','root','','sample');
if(isset($_POST['submit']))
{
    $eid=$_POST['eid'];
    $ename=$_POST['ename'];
    $salary=$_POST['esal'];
    $query="insert into emp values('$eid','$ename','$salary')";
    $result=mysqli_query($con,$query);
    $query="select*from emp";
    $result=mysqli_query($con,$query);
    echo "<table  border=1 align=center>";
    echo "<tr><th>Employee Id</th><th>Employee Name</th><th>salary</th></tr>";
    while($row=mysqli_fetch_array($result))
    {
        echo "<tr><td>".$row[0]."</td><td>".$row[1]."</td><td>".$row[2]."</td></tr>";
    }
    echo "</table>";
} 
if(isset($_POST['submit1']))
{
    $nu=$_POST['ese'];
    $query="select*from emp where name='$nu'";
    $result=mysqli_query($con,$query);
  
    echo "<table  border=1 align=center>";
    echo "<tr><th>Employee Id</th><th>Employee Name</th><th>salary</th></tr>";
    while($row=mysqli_fetch_array($result))
    {
        echo "<tr><td>".$row[0]."</td><td>".$row[1]."</td><td>".$row[2]."</td></tr>";
    }
    echo "</table>";
    mysqli_close($con);
}
?>