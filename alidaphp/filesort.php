<html>
    <body>
        <form method="POST" action="">
           Enter content:<textarea name="txt"  row="10" column="10" ></textarea>
           <input type="submit" name="submit1" value="create">
           <input type="submit" name="submit2" value="display">
           <input type="submit" name="submit3" value="update">
           <input type="submit" name="submit4" value="append">
           <input type="submit" name="submit5" value="copy">
</form>
<?php
if(isset($_POST["submit1"]))
{
    $file=fopen("main.txt","w");
    $text=$_POST["txt"];
    fwrite($file,$text);
    echo "File created";
    fclose($file);
}
if(isset($_POST["submit2"]))
{
    $file=fopen("main.txt","r");
    $con=fread($file,filesize("main.txt"));
    echo $con;
    fclose($file);
}
if(isset($_POST["submit3"]))
{
    $file=fopen("main.txt","w");
    $text=$_POST["txt"];
    fwrite($file,$text);
    fclose($file);
}
    if(isset($_POST["submit4"]))
    {
        $file=fopen("main.txt","a");
        $text=$_POST["txt"];
        fwrite($file,$text);
        fclose($file);
    }
    if(isset($_POST["submit5"]))
    {
        $file=fopen("main.txt","r");
        $con=fread($file,filesize("main.txt"));
        fclose($file);
        $file=fopen("hai.txt","w");
        fwrite($file,$con);
        fclose($file);
        echo "copied";  
    }