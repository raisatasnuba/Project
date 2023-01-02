<!DOCTYPE html>
<html>
<head>
	<link rel="stylesheet" type="text/css" href="stylist.css">
		<style>
			.img {
  width: 100%;
  height: 600px;
}
* {box-sizing: border-box;}
body {font-family: Verdana, sans-serif;}
.mySlides {display: none;width: 1471px;height: 550px;}


/* Slideshow container */
.slideshow-container {
  width: 1471px;
  height: 550px;
  position: relative;
  
}



/* The dots/bullets/indicators */
.dot {
  height: 15px;
  width: 15px;
  margin: 0 3px;
  background-color: black;
  border-radius: 50%;
  display: inline-block;
  transition: background-color 0.6s ease;
}

.active {
  background-color: #717171;
}

/* Fading animation */
.fade {
  animation-name: fade;
  animation-duration: 1.5s;
}

@keyframes fade {
  from {opacity: .4} 
  to {opacity: 1}
}



</style>
</head>
<body>
	<?php   require 'headpage.php'?>
	<br>
	<div class="slideshow-container">

<div class="mySlides fade">
  
  <img src="img1.jpg" class="img">
  
</div>


  <div class="mySlides fade">
  <img src="img3.jpg" class="img">
  
</div>

<div class="mySlides fade">
  <img src="img2.jpg" class="img">
  </div>

</div>



<div style="width:100%;text-align: center;border: none;">
	<br>
  <span class="dot"></span> 
  <span class="dot"></span> 
  <span class="dot"></span> 
</div>

<script>
let slideIndex = 0;
showSlides();

function showSlides() {
  let i;
  let slides = document.getElementsByClassName("mySlides");
  let dots = document.getElementsByClassName("dot");
  for (i = 0; i < slides.length; i++) {
    slides[i].style.display = "none";  
  }
  slideIndex++;
  if (slideIndex > slides.length) {slideIndex = 1}    
  for (i = 0; i < dots.length; i++) {
    dots[i].className = dots[i].className.replace(" active", "");
  }
  slides[slideIndex-1].style.display = "block";  
  dots[slideIndex-1].className += " active";
  setTimeout(showSlides, 2000); // Change image every 2 seconds
}
</script>
<br><br>
		
<?php include'footer.php'?>	

</body>
</html>