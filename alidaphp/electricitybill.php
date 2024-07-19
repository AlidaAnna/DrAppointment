<html>
    <body>
        <form method="POST" action="">
         Unit:<input type="number" name="u">
        <input type="submit" name="submit" value="ok">
</form>
</body>
<?php
if(isset($_POST["submit"]))
{
    $u=$_POST["u"];
    if($u<=100)
    {
    $t=$u*10;
    }
   else if($u>100&&$u<=200)
   {
   $t=(10*100)+($u-100)*20;
   }
   else if($u>=200&&$u<250)
   {
    $t=(10*100)+(20*100)+($u-200)*30;
   }
   else if($u>=250)
   {
    $t=(10*100)+(20*100)+(30*100)+($u-300)*40;
   }
   echo $t;
}