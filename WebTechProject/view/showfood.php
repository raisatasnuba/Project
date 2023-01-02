
<!DOCTYPE html>
<html>
<head>
	<link rel="stylesheet" type="text/css" href="stylist.css">
	<title></title>
</head>
<body>
	 
	<?php 
	$uname=$phone=$address=$name=$price="";
	require('../controller/showfoodcheck.php');
	require('headpage.php');?>
 <form action="" method="POST">
 	

	
	
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
			<h2 style="text-align: center;color: darkblue;"><u>Order</u></h2>
			<br>

		<img width="200px" src="../uploads/<?php echo $image;?>"><br><br>
		<b>Food Name:</b> <?php echo $name; ?>
                        <input type="hidden" name="name" value="<?php echo $name; ?>">
<br><br>
		<b>Price:</b> <?php echo $price; ?>
                        <input type="hidden" name="price" value="<?php echo $price; ?>"><br><br>
		<b>Quantity:</b><input type="number" name="qty" class="input-responsive" value="1" required><br><br>
             <input type="submit" name="submit" value="Confirm Order" >            
         </div></td>           
		
	</tr></table>
	
		</div><br><br><br><br><br><br><br><br><br><br><br>
		 <fieldset style="display: none;">
                    <legend>Delivery Details</legend>
                  
                    <input type="hidden" name="uname" value="<?php echo $uname?>"><br><br>

                    <input type="hidden" name="phone" value="<?php echo $phone?>"><br><br>

                    
                    
                    <input  type="hidden" name="address" value="<?php echo $address?>" rows="5"><br><br>
</fieldset>
                   
                
                   
		
		
		

            

        

 </form>
	


</body>
</html>