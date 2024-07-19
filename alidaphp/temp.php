<html>
    <body>
        <h1>Tempature<h1>
            <body>
                <?php
                    $a=array(1,2,3,4,5,4,3,2,12,6,4,77,4);
                $l=count($a);
                echo "$l";
                $sum=array_sum($a);
                echo "<br>"."$sum";
                $avg=$sum/$l;
                echo "<br>".round($avg,2);
                $temp=array_unique($a);
                sort($temp);
                for($i=0;$i<5;$i++)
                {
                    echo "<br>".$temp[$i]." ";
                }
                rsort($temp);
                for($i=0;$i<5;$i++)
                {
                    echo "<br>".$temp[$i]." ";
                }
                ?>
                </html>