<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <meta name="viewport" content="width=device-width, initial-scale=1">
    <title></title>
</head>
<body>


<form method="post" action="">




<?php

require_once '../model/model.php';
$q=$_GET["q"];
    try {
        
        $allSearched = search($q);

        echo "<br>
    
    <tbody>";
        foreach ($allSearched as $i => $row):
              $temp = $row["code"];
            echo '<tr>
            <div class="divsearch1">
                <td><a href="../view/foodcheck.php?code='.$temp.'" style="color:black;">'.$row["name"].'</a></td></div>
               
                
            </tr>';
        endforeach;
        
    echo "</tbody>
";

    } catch (Exception $ex) {
        echo $ex->getMessage();
    }
?>
</form>
</body>
</html>