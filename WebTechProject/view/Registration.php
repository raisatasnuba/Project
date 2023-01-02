<!DOCTYPE html>
<html>
<head>

  <link rel="stylesheet" type="text/css" href="stylist.css">
</head>
<body>
  <?php

  require_once("../javascript/Rscript.js");
    
  ?>

  <form method="post" action="../controller/Rcheck.php" onclick="return validation();">
    <br><br><br>
    <div class="div1reg">

      <div class="div2reg">
       <h2 style="text-align: center;color: darkblue;"> &nbsp;&nbsp;Foodfoodie</h2>
      </div>

      
    <div class="divreg">
      <br><br>
      
   <h4 class="h5reg">Apply as a Customer</h4>
    &nbsp;&nbsp;&nbsp;<input type="text" name="name" id="name" placeholder="Name" onkeypress="checkName()" onblur="checkName()">
     
   <input type="text" name="email" id="email" placeholder="E-mail" onkeypress="checkEmail()" onblur="checkEmail()"><br>
    &nbsp;&nbsp;&nbsp;<span style="color: blue;" id="nameErr"><?php if(!empty($_GET['nameErr'])){echo $_GET['nameErr'];}?></span>
    &nbsp;&nbsp;&nbsp; &nbsp;&nbsp;&nbsp; &nbsp;&nbsp;&nbsp;<span style="color: blue;" id="emailErr"><?php if(!empty($_GET['emailErr'])){echo $_GET['emailErr'];}?></span><br>
    
   &nbsp;&nbsp;&nbsp;<input type="text" name="usname" id="usname" placeholder="Username" onkeypress="checkUsername(this.value)" onblur="checkUsername(this.value)">
    
    <input type="text" name="phone" id="phone" placeholder="Phone Number" onkeypress="checkPhone()" onblur="checkPhone()"><br>
     &nbsp;&nbsp;&nbsp;<span style="color: blue;" id="usnameErr"><?php if(!empty($_GET['usnameErr'])){echo $_GET['usnameErr'];}?></span> &nbsp;&nbsp;&nbsp; &nbsp;&nbsp;&nbsp; &nbsp;&nbsp;&nbsp;<span style="color: blue;" id="phoneErr"><?php if(!empty($_GET['phoneErr'])){echo $_GET['phoneErr'];}?></span><br>
     
   &nbsp;&nbsp;&nbsp;<input type="Password" name="pass2" id="pass2" placeholder="Password" onkeypress="checkPassword()" onblur="checkPassword()">
    
    <input type="Password" name="pass3" id="pass3" placeholder="Confirm Password" onkeypress="checkConfirmPassword()" onblur="checkConfirmPassword()"><br>
     &nbsp;&nbsp;&nbsp;<span style="color: blue;" id="pass2Err"><?php if(!empty($_GET['pass2Err'])){echo $_GET['pass2Err'];}?></span> &nbsp;&nbsp;&nbsp; &nbsp;&nbsp;&nbsp; &nbsp;&nbsp;&nbsp;<span style="color: blue;" id="pass3Err"><?php if(!empty($_GET['pass3Err'])){echo $_GET['pass3Err'];}?></span><br>

   
    &nbsp;&nbsp;&nbsp;<input type="text" name="address" id="address" placeholder="Address" onkeypress="checkAddress()" onblur="checkAddress()"><br>
     &nbsp;&nbsp;&nbsp;<span style="color: blue;" id="addressErr"><?php if(!empty($_GET['addressErr'])){echo $_GET['addressErr'];}?></span><br>

   <div onkeypress="checkGender()" onblur="checkGender()" style="border: none;">
       &nbsp;&nbsp; <input type="radio" name="gender" id="g1" value="Male">
       <label for="g1">Male</label>
        <input type="radio" name="gender" id="g2" value="Female">
        <label for="g2">Female</label>
         <input type="radio" name="gender" id="g3" value="Other">
         <label for="g3">Other</label><br>
         <br><span style="color:blue;" id="genderErr"><?php if(!empty($_GET['genderErr'])){echo $_GET['genderErr'];}?></span>
    </div>
    
      
     &nbsp;&nbsp;&nbsp; <input type="date" name="date" size="20" onkeypress="checkDate()" onblur="checkDate()" placeholder="Date of Birth(dd/mm/yyyy)">
      <br>
      <span style="color: blue;" id="dateErr"><?php if(!empty($_GET['dateErr'])){echo $_GET['dateErr'];}?></span>
       
      
     
     <br>

    
   &nbsp;&nbsp;&nbsp; <input type="submit" name="submit" value="Sign Up">
      
      <input type="reset" name="reset" value="reset"><br>    
     




 
</div>

</div>

  </form>
</body>
</html>