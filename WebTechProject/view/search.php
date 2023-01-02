
<!DOCTYPE html>
<html>
<head>
  
    <script type="text/javascript" src="../javascript/search.js"></script>
    
</head>
<body onload="search(document.getElementById('search').value)">


    
        <input type="text" id="search" name="search" placeholder="Search Food" class="divsearch" value="<?php if ($_SERVER["REQUEST_METHOD"] == "POST") {if(!empty($_POST["search"])){echo '$_POST["search"]';}}?>" onkeyup="search(this.value)" onblur="search(this.value)">
    
    </div>
    <div id="searchResults" style="width: 500px;height: 2px;border: none;">
    
    </div>


</body>
</html>