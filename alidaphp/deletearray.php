<html>
    <body>
    <h1>Delete an element from an array</h1>
</body>
<?php
{
    $number=array(1,2,3,4,5,6,7);
    $l=count($number);
    for($i=0;$i<$l;$i++)
    {
        echo $number[$i];
    }
}
?>
<body>
 <form method="POST" action="">
        Enter the element you want to delete:<input type="number" name="num">
        <input type="submit" name="submit" value ="ok">
</body>
<?php
if(isset($_POST["submit"]))
{
    $n=$_POST["num"];
    for($i=0;$i<$l;$i++)
    {
        if($number[$i]==$n)
        {
            unset($number[$i]);
        }
    }
    $number=array_values($number);
    $l=count($number);
    for($i=0;$i<$l;$i++)
    {
        echo $number[$i];
    }

}
?>
