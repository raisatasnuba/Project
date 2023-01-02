        <?php 
        session_start();
        include('headpage.php');
          ?>
      <!DOCTYPE html>
    <html>
    <head>
    <link rel="stylesheet" type="text/css" href="stylist.css">
      
    </head>
    <body>
      <form method="post" action="<?php echo htmlspecialchars($_SERVER["PHP_SELF"]);?>">
        <input type="hidden" name="uname">
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
            <h3 style="text-align: center;color: darkblue;"><u>Order Summary</u></h3>

       <br>
       <p style="text-align:center;">**Your order has been accepted**</p><br>
       
        
         
     
           
        <?php 
        
        $uname="";
         
        if($_SERVER["REQUEST_METHOD"]=="POST")
  {
    $uname=$_GET['uname'];
      
    
  }
        


$servername = "localhost";
    $username = "root";
    $password = "";
    $dbname = "foodmenu";
    $conn = new mysqli($servername, $username, $password, $dbname);
// Check connection
if ($conn->connect_error) {
  die("Connection failed: " . $conn->connect_error);
}


$sql = "SELECT * FROM orderlist WHERE customer_name= '".$_SESSION['uname']."'"
;
$result = $conn->query($sql);
if ($result->num_rows > 0) {
  // output data of each row
  while($row = $result->fetch_assoc()) {
    

       ?>
        
        
 
     <?php 
      
       echo' <p style="text-align:left;">&nbsp;&nbsp;&nbsp;&nbsp;'.$row["quantity"].' x '.$row["name"].'
       
         &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;'.$row["total"].'</p>
        ';
         
    
  }
} else {
  echo "0 results";
}
$conn->close();

?>

 </div>
 </td>
 </tr>
 </table>        
  

</form>
</body>
</html>
