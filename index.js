//jshint esversion: 6
$(document).ready(function(){
  $("#myPicShow").visible();
});

// $(function(){
//   $("#myPic").click(function(e){
//     e.preventDefault();
//     $("#myPicShow").toggle("fast");
//   });
// });


  const date = new Date().getFullYear();
  $("p.cdate").prepend(date);
  $("p.cdate").prepend("© ");


$("img.disnum").on("mouseover", function(){
  alert("hi");
});
