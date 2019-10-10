<!DOCTYPE html>
<html>
  <head>
    <title>Display Database</title>
    <style>
    table, tr, th, td, a{
      border: 1px solid blue;
    }
    </style>

  </head>
  <body>
    <h1>New STUDENTS DATA BASE</h1>
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
