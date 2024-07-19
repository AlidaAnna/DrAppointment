<?php
date_default_timezone_set("Asia/Calcutta");
?>
<html>
    <body>
        <form method="POST" action="">
            Enter id:<input type="text" name="no">
            <input type="submit" name="submit" value="ok">
</form>
<fieldset>
    <legend>Haisample</legend>
    <form method=POST action="">
    Enter id:<input type="text" name="no">
        <button name="dis">DISPLAY</button>
</fieldset>
</body>
<?php
if(isset($_POST["submit"]))
{
    $no=$_POST["no"];
    $con=mysqli_connect('localhost','root','','sample');
    $query="delete  from emp where eno=$no";
    $result=mysqli_query($con,$query);
    $query="select * from emp";
    $result=mysqli_query($con,$query);
    echo "<table border=1  align=center>";
    echo "<tr><th>eno</th><th>ename</th><th>dob</th></tr>";
    while($row=mysqli_fetch_array($result))
    {
        echo "<tr><td>".$row[0]."</td><td>".$row[1]."</td><td>".date("d-m-y",strtotime($row['2']))."</td></tr>";
    }
    echo"</table>";
    mysqli_close($con);

}
