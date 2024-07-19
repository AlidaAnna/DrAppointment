<html>
    <body>
        <form method="POST" action="" >
            Enthe sources file:<input type="text" name="f1"><br>
            Enter destination file:<input type="text" name="f2"><br>
            <input type="submit" name="submit">
</form>
</body>
<?php
{
    if(isset($_POST["submit"]))
    {
        echo "hai";
        $file1=$_POST["f1"];
        $file2=$_POST["f2"];
        $s=fopen($file1,"r");
        if(!$s)
        {
            die("Unable to open sources file");
        }
        $d=fopen($file2,"w");
        {
            if(!$d)
            {
                die("Unable to open destination file");
            }
        }
        while(!feof($s))
        {
            $content=fread($s,filesize($file1));
            fwrite($d,$content);
        }
        fclose($s);
        fclose($d);

        echo "file copied";
    }
}
