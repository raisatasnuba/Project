<!DOCTYPE html>
<html>
<head>
   <link rel="stylesheet" type="text/css" href="stylist.css">
  <title></title>
</head>

<body>
  
  <?php
  session_start();
  require'headpage.php';
      $name = $email = $dob = $gender =  "";
      
      if(isset($_SESSION['uname']))
{
  $servername = "localhost";
$username = "root";
$password = "";
$dbname = "foodmenu";


// Create connection
$conn = new mysqli($servername, $username, $password, $dbname);

// Check connection
if ($conn->connect_error) {
  die("Connection failed: " . $conn->connect_error);
}
$sql="SELECT * FROM cusreg WHERE username='".$_SESSION['uname']."' AND password='".$_SESSION['pass']."'";
$result= $conn->query($sql);
if($result->num_rows>0)
{
  while($row=$result->fetch_assoc())
  {
  $name = $row["name"];
           $email = $row["email"];
           $gender = $row["gender"];
           $dob = $row["date"];
}
}
else
{
  $unamedb="";
  $passdb="";
}



$conn->close();

}

               
      
      ?>
      <form method="post" action="">
        <?php 
          
        if (isset($_SESSION['uname'])) {
         echo" <div  style='border:none;width:100%;'>
      <table style='height:600px;border:none;width:100%;'><tr><td class='color'><button><a href='dashboard.php'>DashBoard</a></button><br><br>
      <button><a href='displayfood.php'>Menu</a></button><br><br>
     <button> <a href='view profile.php'>View Profile</a></button><br><br>
      <button><a href='edit profile.php'>Edit Profile</a></button><br><br>
     <button> <a href='Change password.php'>Change Password</a></button><br><br>
     <button> <a href='fileupload.php'>Change Profile</a></button><br><br>
      <button><a href='../controller/logout.php'>Logout</a></button></td>
        <td class='raisa'>
        <br><br><br><br><br>

      <div class='divview'>
      <br><br>
      <h3 style='color:Darkblue;text-align:center;'><u>View Profile</u> </h3>
      <br><br>
       <b> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Name:</b> $name <br><br>
         <b> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Email:</b> $email<br><br>
          <b>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Gender:</b> $gender<br><br>
        <b> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; Date Of Birth:</b> $dob<br><br>


     &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; <a href='edit profile.php' style='color:Darkblue;'>Edit Profile</a>

  
  
  
  
  </div>
</td>
</tr>
</table>
</div>";
}
   
?>
      
     





  </form>

</body>
</html>     
