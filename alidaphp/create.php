<html>
    <body>
        <form method="POST" action="">
         userName<Input type="text" name="un" pattern=[A-Za-z\d]{10,} required><br>
         PassWord<input type="text" name="pass"required><br>
         <input type="submit" name="submit">
</form>
</body>
<?php
if(isset($_POST["submit"]))
{
    $no=$_POST["pass"];
    $name=$_POST["un"];
$con=mysqli_connect("localhost","root","","sample");
$query="select * from emp where  eno='$no' AND ename='$name'";
$result=mysqli_query($con,$query);
$num=mysqli_num_rows($result);
if($num>0)
{
  /*  echo "<table  border=1 align=center>";
    echo "<tr><th>Employee Id</th><th>Employee Name</th><th>DOB</th></tr>";
    while($row=mysqli_fetch_array($result))
    {
        echo "<tr><td>".$row[0]."</td><td>".$row[1]."</td><td>".date("d-m-y",strtotime($row['2']))."</td></tr>";
    }*/
    header("Location:hai.php");
    echo "success";
}
    else
    {
        echo'<script>alert("wrong username or password!")</script>';
    }
    echo "login";
echo "</table>";
mysqli_close($con);
}