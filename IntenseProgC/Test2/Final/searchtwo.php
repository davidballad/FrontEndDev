<?php
  include_once('update.php');

  if (isset($_POST['submit']) && !empty($_POST['q'])) {
    $conn = new mysqli("localhost", "root", "root", "rutgers");
    $q = $conn->real_escape_string($_POST['q']);
      $column = $conn->real_escape_string($_POST['column']);

      if ($column == "" || ($column != "firstn" && $column != "lastn"))
        $column = "firstn";

        $sql = $conn->query("SELECT * FROM students WHERE $column LIKE '%$q%'");
        if ($sql->num_rows > 0) {
          while ($data = $sql->fetch_array()) {

              echo "<th>Results:<th>";
              echo "<td>".$data['student_id']. "</td>";
              echo "<td>".$data['firstn']. "</td>";
              echo "<td>".$data['lastn']. "</td>";
              echo "<td>".$data['phone']. "</td>";
              echo "<td>".$data['email']. "</td>";
              echo "<td>".$data['status']. "</td><br>";
          }

        } else
          echo "No matches found";
  }


?>


<!DOCTYPE html>
<html>
  <head>
    <title>Search Student</title>
  </head>
  <body>
    <form method="post" action="searchtwo.php">
      <h1>STUDENT SEARCH & UPDATE</h1>
      <input type="text" name="q" placeholder="Search">
      <tr>          <?php // TODO: take it out later ?>
      <select name="column">
        <option value="">Select</option>
        <option value="firstn">First Name</option>
        <option value="lastn">Last Name</option>
        <option value="email">Email</option>
        <option value="phone">Phone</option>
        <option value="schedule_year">Year</option>

      </select>
      </tr>
      <input type="submit" name="submit" value="Find">

    </form>

  </body>
</html>
