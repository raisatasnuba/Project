<!DOCTYPE html>
<html>
<head>
	<link rel="stylesheet" type="text/css" href="stylist.css">
	<title></title>
</head>
<body>
	<form method="post" action="<?php echo htmlspecialchars($_SERVER["PHP_SELF"]);?>">
	<?php 
	
session_start();
include'headpage.php';


if (isset($_SESSION['uname'])) {
	echo "<div style='border:none;width:100%;'><table style='height:600px;border:none;width:100%;'><tr><td class='color'><br><br><a href='dashboard.php'><button>DashBoard</button></a><br><br>
<a href='displayfood.php'><button>Menu</button></a><br><br>
<a href='view profile.php'><button>View Profile</button></a><br><br>
<a href='edit profile.php'><button>Edit Profile</button></a><br><br>
<a href='Change password.php'><button>Change Password</button></a><br><br>
<a href='fileupload.php'><button>Change Profile</button></a><br><br>
<a href='../controller/logout.php'><button>Logout</button></a></td><td class='raisa1'><br><br>";?><?php require_once('search.php');?>
<?php echo "</td></tr></table></div>";
	

} else {
	header("location:Login.php");
}



 ?>

	
</form>


</body>
</html>




