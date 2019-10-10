<?php
$conn = mysqli_connect('localhost', 'root', 'root', 'rutgers');

$sql = "UPDATE students SET firstn='$_POST[firstn]', lastn='$_POST[lastn]', phone='$_POST[phone]', email='$_POST[email]', status='$_POST[status]'WHERE student_id='$_POST[student_id]'";

if(mysqli_query($conn, $sql))
  header("refresh:1; url=update.php");

else
  echo "Error Not Updated";
 ?>
