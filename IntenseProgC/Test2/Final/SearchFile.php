<?php

if (isset($_POST['search'])) {

  $valueToSearch = $_POST['valueToSearch'];
  $query = "SELECT * FROM 'students' WHERE CONCAT ('student_id', 'firstn', 'lastn', 'phone', 'email', 'status') LIKE '%".valueToSearch."%'";
  $search_result = filterTable($query);

  include_once('studisplay.php');   //TODO: not working properly


} else {
  $query = "SELECT * FROM 'students'";
  $search_result = filterTable($query);
}

function filterTable($query){
  $conn = mysqli_connect('localhost', 'root', 'root', 'rutgers');
  $filter_Result = mysqli_query($conn, $query);
  return $filter_Result;
}

?>



<!DOCTYPE html>
<html>
  <head>
    <title> Search Page</title>
    <style>
    table, tr, th, td{
      border: 1px solid blue;
    }
    </style>
  </head>

  <body>
      <form action="searchFile.php" method="POST">
      <input type="text" name="valueToSearch" placeholder="Enter student info"><br><br>
      <input type="submit" name="search" value="Filter"><br><br>

      <table>
        <tr>
          <th>ID</th>
          <th>Name</th>
          <th>Surname</th>
          <th>Phone</th>
          <th>Email</th>
          <th>Status</th>

        </tr>
        <?php while($row = mysqli_fetch_array($search_result)):;?>
          <tr>
            <td>?<?php echo $row['student_id'];?></td>
            <td>?<?php echo $row['firstn'];?></td>
            <td>?<?php echo $row['lastn'];?></td>
            <td>?<?php echo $row['phone'];?></td>
            <td>?<?php echo $row['email'];?></td>
            <td>?<?php echo $row['status'];?></td>
          </tr>

        <?php endwhile; ?>
    </form>

  </body>
</html>
