<!DOCTYPE html>
<html>
<head>
  <link rel="stylesheet" type="text/css" href="stylist.css">
</head>
<body>
  
  <?php
  include '../controller/changePasscheck.php';
      
    require'headpage.php';  
    
    
  

?>
  <form method="post" action="<?php echo htmlspecialchars($_SERVER['PHP_SELF']);?>">
    <div  style='border:none;width:100%;'>
      <table style='height:600px;border:none;width:100%;'><tr><td class='color'><button><a href='dashboard.php'>DashBoard</a></button><br><br>
      <button><a href='displayfood.php'>Menu</a></button><br><br>
     <button> <a href='view profile.php'>View Profile</a></button><br><br>
      <button><a href='edit profile.php'>Edit Profile</a></button><br><br>
     <button> <a href='Change password.php'>Change Password</a></button><br><br>
     <button> <a href='fileupload.php'>Change Profile</a></button><br><br>
      <button><a href='../controller/logout.php'>Logout</a></button></td>
        <td class='raisa'>
          <br><br><br><br><br><br>

    <fieldset class="divchange">
    <legend style='color: darkblue;'><h2>Change Password</h2></legend>
    <br>
    
     <input type="Password" name="cpass" id="cpass" placeholder="Current Password" style="width:70%;"><br><span><?php echo $cpassErr;?></span><br>
   
   <input type="Password" name="npass" id="npass" placeholder="New Password" style="width:70%;"><br><span><?php echo $npassErr;?></span><br>
   
    <input type="Password" name="rpass" id="rpass" placeholder="Retype Password" style="width:70%;"><br><span><?php echo $rpassErr;?></span><br>
    <hr>

   <input type="submit" name="submit" value="submit">
   
    


  </fieldset>
  </td>
</tr>
</table>
   
</div>

  </form>
</body>
</html>