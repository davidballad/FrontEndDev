<!DOCTYPE html>
<html>
  <head>
    <title>Display Database</title>
  </head>
  <body>
    <table>
      <tr>
        <th>ID</th>
        <th>Name</th>
        <th>Surname</th>
        <th>Phone</th>
        <th>Email</th>
        <th>Status</th>
      </tr>
      <?php
      $conn = mysqli_connect("localhost", "root", "root", "rutgers");
      if ($conn->connect_error) {
        die("Connection failed: " . $conn-> connect_error);
      }
      $sql =  "SELECT student_id, firstn, lastn, phone, email, status from students";
      $result = $conn -> query($sql);

      if ($result->num_rows > 0) {
        while ($row = $result->fetch_assoc()) {
          echo "<tr><td>" .$row["student_id"]."</td><td>".$row["firstn"]."</td><td>".$row["lastn"]."</td><td>".$row["phone"]."</td><td>".$row["email"]."</td><td>".$row["status"]."</td><tr>";
        }
        echo "</table>";
      } else {
        echo "0 results";
      }
      $conn->close();
       ?>
    </table>

  </body>
</html>


<?php
$firstn = $_POST['firstn'];
$lastn = $_POST['lastn'];
$phone = $_POST['phone'];
$email = $_POST['email'];
$status =$_POST['status'];


if (!empty($firstn) || !empty($lastn) || !empty($phone) || !empty($email) || !empty($status)) {
  $host = "localhost";
  $dbUsername = "root";
  $dbPassword = "root";
  $dbName = "rutgers";

  //creating a connection
  $conn = new mysqli($host, $dbUsername, $dbPassword, $dbName);

  if (mysqli_connect_error()) {
    die('Connect Error('.mysqli_connect_error().')'. mysqli_connect_error());
  } else {
    $SELECT = "SELECT email From students Where email = ? Limit 1";
    $INSERT = "INSERT INTO students(firstn, lastn, phone, email, status) VALUES(?, ?, ? , ? , ?)";

    //Prepare statement
    $stmt = $conn->prepare($SELECT);
    $stmt->bind_param('s', $email);
    $stmt->execute();
    $stmt->bind_result($email);
    $stmt->store_result();
    $rnum = $stmt->num_rows;

    if ($rnum==0) {
      $stmt->close();

      $stmt = $conn->prepare($INSERT);
      $stmt->bind_param('sssss', $firstn, $lastn, $phone, $email, $status);
      $stmt->execute();
      echo "New record inserted sucessfully <br><br>";
      echo "Updated Table Below";
      include_once('studisplay.php');

    }  else {
        echo "Someone already register using this Email address";
      }
      $stmt->close();
      //$conn->close(); // TODO: ??
    }

} else {
  echo "All fields are required";
  die();
}

 ?>
