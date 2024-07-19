<?php
{
    date_default_timezone_set("Asia/Calcutta");
}
?>
<html>
    <body>
        <form method="POST" action="">
            Enter no:<input type="number" name="num">
            <input type="submit" name="submit">
</form>
</body>
<?php
{
    if(isset($_POST["submit"]))
    {
       $no=$_POST["num"];
       $con=mysqli_connect('localhost','root','','sample');
       $query="delete from emp where eno='$no'";
       $result=mysqli_query($con,$query);
       $query="select * from emp";
       $result=mysqli_query($con,$query);
       echo"<table border=1>";
       echo "<tr><th>no</th><th> name</th><th>dob</th></tr>";
       while($row=mysqli_fetch_array($result))
       {
        echo"<tr><td>".$row[0]."</td><td>".$row[1]."</td><td>".date("d-m-y",strtotime($row[2]))."</td></tr>";
       }
       echo"</table>";
       mysqli_close($con);

    }
}