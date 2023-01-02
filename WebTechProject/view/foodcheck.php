<!DOCTYPE html>
<html>
<head>
	<link rel="stylesheet" type="text/css" href="stylist.css">
	<title></title>
</head>
<body>
	 <form method="post" action="">
	<?php  

require('../controller/foodcheck.php');
require('headpage.php');





?>

<div  style='border:none;width:100%;'>
      <table style='height:600px;border:none;width:100%;'><tr><td class='color'><button><a href='dashboard.php'>DashBoard</a></button><br><br>
      <button><a href='displayfood.php'>Menu</a></button><br><br>
     <button> <a href='view profile.php'>View Profile</a></button><br><br>
      <button><a href='edit profile.php'>Edit Profile</a></button><br><br>
     <button> <a href='Change password.php'>Change Password</a></button><br><br>
     <button> <a href='fileupload.php'>Change Profile</a></button><br><br>
      <button><a href='../controller/logout.php'>Logout</a></button></td>
        <td style="border: none;">
        	<div class="divshow">
			<br>
			<h2 style="text-align: center;color: darkblue;"><u>Food Details</u></h2>
			<br>

		
		<img width="100px" src="../uploads/<?php echo $image;?>"><br><br>
	<b>Food Name:</b> <?php echo $name?><br><br>
		<b>Price:</b> <?php echo $price?><br><br>
		<?php echo '<button style="width:100px;"> <a href="showfood.php?code='.$code.'">Order Now</a></button>';?>
	</div>
</td>
	</tr>

		</div>
		</form>
	


</body>
</html>