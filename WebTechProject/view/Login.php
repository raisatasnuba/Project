<!DOCTYPE html>
<html>
<head>
  <link rel="stylesheet" type="text/css" href="stylist.css">
</head>
<body>
  <?php 
  $unameErr=$passErr=$message2="";
  $uname=$pass=$error=$message="";
  //include"headpage.php";
  require_once("../javascript/Lscript.php");
  require_once("../controller/Lcheck.php");
  ?>
  

<form method="post" action="" onsubmit="return validation()">
  <br><br><br><br><br><br><br><br>

  <div class="divlog">
    <br>
    <h2>Foodfoodie</h2>
    <br>

 
    <p style="font-size: 18px;">Log in with your username</p>
     &nbsp;&nbsp; <input type="text" name="uname" id="uname" placeholder="Username" size="30" style="height: 20px;" value="<?php if(isset($_COOKIE['uname'])){echo $_COOKIE['uname']; } ?>"onkeydown="checkUsername()" onblur="checkUsername ()"><br><span style="color: darkblue;text-align: center;" id="unameErr"><?php if(!empty($_GET['unameErr'])){echo $_GET['unameErr'];} ?></span><br>
   
   
    &nbsp;&nbsp;&nbsp;<input type="Password" name="pass" id="pass" placeholder="Password" size="30" style="height: 20px;" value="<?php if(isset($_COOKIE['pass'])) {echo $_COOKIE['pass'];} ?>" onkeydown="checkPassword()" onblur="checkPassword()"><br><span style="color:darkblue;text-align: center;" id="passErr"><?php if(!empty($_GET['passErr'])){echo $_GET['passErr'];} ?>
      
    </span><br>
    
  
   <input type="checkbox" name="remember" id="remember">
   <label for="remember" style='margin-right: 110px;'>Remember me</label><br><span style="color:darkblue;"><?php if(!empty($_POST['remember'])) {echo $message;}else{echo $error;}?></span><br>
  <input type="submit" name="Lsubmit" value="Log In" style=" width:67%;height: 30px;color: blue;font-size: 15px;"><br><br>
<span style="color:darkblue;text-align: center;"><?php echo $message2;?></span><br>
   
   &nbsp;<a href="Registration.php" class="alog">Not registered yet?</a>
   <br>



  </fieldset><br>
</div>


</form>
</body>
</html>