<!DOCTYPE html>
<html>
<head>
  <link rel="stylesheet" type="text/css" href="stylist.css">
</head>
<body>
 

  
     <?php 
     session_start();
     
     require'headpage.php';
     if (isset($_SESSION['uname'])) {
         echo" <form action='upload.php' method='post' enctype='multipart/form-data'>
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

        <form action='upload.php' method='post' enctype='multipart/form-data'>
 <div class='divview'>
      <br><br>
      <h3 style='color:Darkblue;text-align:center;'><u>Profile Picture</u> </h3>
      <br>
    &nbsp;&nbsp;&nbsp;&nbsp;<img src='pic.jpg'><br><br>
   &nbsp;&nbsp;&nbsp;&nbsp;<input type='file' name='fileToUpload' id='fileToUpload'><br><hr style='width:80%;'><br>
  &nbsp;&nbsp;&nbsp;&nbsp; <input type='submit' value='submit' name='submit'>
  </div></form><br>
  </td>
  </tr>
  </table>
  </div></form>";}
  ?>




</body>
</html>