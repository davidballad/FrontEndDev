<html>
<head>
<title>Testing Software Database</title>
<style>
a {
	text-decoration: none;
}
</style>
</head>

<body>

<?php
	include_once('db.php');
 
	if(isset($_POST['name']))
	{
	  $name = $_POST['name'];
 
	  if(mysqli_query($conn, "INSERT INTO apple VALUES('','$name')"))
		echo "Successful Insertion!";
	  else
		echo "Please try again";
	}
 
 
	$res = mysqli_query($conn, "SELECT * FROM apple");
 
 
?>
 
<form action="." method="POST">
Name: <input type="text" name="name"/><br />
<input type="submit" value=" Enter "/>
</form>
 
<h1>List of companies ..</h1>
<?php
	while( $row = mysqli_fetch_array($res) )
	  echo "$row[id]. $row[name] 
                <a href='edit.php?edit=$row[id]'>edit</a><br />";
?>

</body>
</html>