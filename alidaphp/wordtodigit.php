<html>
    <body>
        <h1>WORDS TO DIGIT</h1>
        <form method="POST" action="">
            Enter the word:<input type="text" name="word">
            <input type="submit" name="submit" value="ok">
</form>
</body>
<?php
if(isset($_POST["submit"]))
{
    $w=$_POST["word"];
    $mapp=array("Zero"=>"0",
                "one"=>"1",
              "two" => "2",
            "three" => "3",
            "four" => "4",
            "five" => "5",
            "six" => "6",
            "seven" => "7",
            "eight" => "8",
            "nine" => "9");//oru assosiative arrayil store cheyunu
            $lower=strtolower($w);//lowerlotu akunu allel same alleloo
            $result='';
            foreach($mapp as $x=>$y)
            {
                $lower=str_replace($x,$y,$lower);//str_replace(eth value ahn mattende,eth modelil ahn mattende,enthine ahn ipoo mattende)
            }
            echo $lower;
}