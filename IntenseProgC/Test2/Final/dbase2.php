<!DOCTYPE html>
<html>
  <head>
    <title>Display Courses Database</title>
  </head>
  <body>
    <table>
      <tr>
        <th>Course ID</th>
        <th>Course Code</th>
        <th>Course Description</th>
      </tr>
      <?php
      $conn = mysqli_connect("localhost", "root", "root", "rutgers");
      if ($conn->connect_error) {
        die("Connection failed: " . $conn-> connect_error);
      }
      $sql =  "SELECT course_id, course_code, course_description from courses";
      $result = $conn -> query($sql);

      if ($result->num_rows > 0) {
        while ($row = $result->fetch_assoc()) {
          echo "<tr><td>" .$row["course_id"]."</td><td>".$row["course_code"]."</td><td>".$row["course_description"]."</td><tr>";
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

$course_code = $_POST['course_code'];
$course_description = $_POST['course_description'];


if (!empty($course_code) || !empty($course_description)) {
  $host = "localhost";
  $dbUsername = "root";
  $dbPassword = "root";
  $dbName = "rutgers";

  //creating a connection
  $conn = new mysqli($host, $dbUsername, $dbPassword, $dbName);

  if (mysqli_connect_error()) {
    die('Connect Error('.mysqli_connect_error().')'. mysqli_connect_error());
  } else {
    $SELECT = "SELECT course_code From courses Where course = ? Limit 1";
    $INSERT = "INSERT INTO courses(course_code, course_description) VALUES(?, ?)";

    //Prepare statement
    $stmt = $conn->prepare($SELECT);
    $stmt->bind_param('s', $course_code);
    $stmt->execute();
    $stmt->bind_result($course_code);
    $stmt->store_result();
    $rnum = $stmt->num_rows;

    if ($rnum==0) {
      $stmt->close();

      $stmt = $conn->prepare($INSERT);
      $stmt->bind_param('ss', $course_code, $course_description);
      $stmt->execute();

    }  else {
        echo "You already register for this Course";
      }
      $stmt->close();
      //$conn->close(); // TODO: ??
    }

} else {
  echo "All fields are required";
  die();
}

 ?>
