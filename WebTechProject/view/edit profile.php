

<!DOCTYPE html>
<html>
<head>
  
  <title></title>
</head>

<body>
  
  <?php 
 require("../controller/editcheck.php"); 
      require("headpage.php");
      
  ?>
  <form method="POST" action="edit profile.php" >
        
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

<div class='divview'>
      <br>
      <h3 style='color:Darkblue;text-align:center;'><u>Edit Profile</u> </h3>
            <br><br>
                &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 
                Name: <input type='text'  name='name'value='<?php echo $name ?>'> 
                <br>
               <br>
                &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 
                Email: <input type='text' name='email'value='<?php echo $email ?>'>
                <br><br>
                
               
                &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; &nbsp;&nbsp; 
                Gender: <input type='text'  name='gender'value='<?php echo $gender ?>'>
                <br><br>
                &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; &nbsp;&nbsp; 
                Birth: <input type='text'  name='date'value='<?php echo $date ?>'>
                <br><br>
                &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;    
                &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 
                <input type='submit' name='submit' value="Change">
          
            </div>
          </td>
        </tr>
      </table>
   </div>
</form>



</body>
</html>