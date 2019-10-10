<?php
$conn = mysqli_connect('localhost', 'root', 'root', 'rutgers');

$sql = "DELETE FROM students WHERE student_id='$_GET[student_id]'";

if(mysqli_query($conn, $sql))
  header("refresh:1; url=update.php");
else
  echo "Action could not be completed";
 ?>
