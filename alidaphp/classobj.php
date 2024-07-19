<?php
class student
{
    private $no;
    private $name;
    function read($no,$name)
    {
        $this->no=$no;
       }
    function display()
    {
        echo $this->no;
        echo $this->name;
    }
}
?>
<html>
    <body>
        <form method="POST" action="">
          name:  <input type="text" name="name">
          no:  <input type="number" name="no">
          <input type="submit" name="submit">
</form>
</body>
<?php
if(isset($_POST["submit"]))
{
    $name=$_POST["name"];
    $no=$_POST["no"];
    $stud =new student();
    $stud->read($name,$no);
    $stud->display();
}
?>


