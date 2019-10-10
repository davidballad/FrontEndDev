
<!DOCTYPE html>
<html>
  <head>
      <title>Update Student Info</title>
  </head>
  <body>
    <?php
    $conn = mysqli_connect('localhost', 'root', 'root', 'rutgers');

    $sql = "SELECT * FROM students";

    $records = mysqli_query($conn, $sql);
     ?>
     <table>
       <tr>
         <th>Name</th>
         <th>Surname</th>
         <th>Phone</th>
         <th>Email</th>
         <th>Status</th>
         <th>Delete</th>
       </tr>

       <?php
       while ($row = mysqli_fetch_array($records)) {
         echo "<tr><form action=records.php method = post>";
         echo "<td><input type=text name=firstn value='".$row['firstn']."'</td>";
         echo "<td><input type=text name=lastn value='".$row['lastn']."'</td>";
         echo "<td><input type=text name=phone value='".$row['phone']."'</td>";
         echo "<td><input type=text name=email value='".$row['email']."'</td>";
         echo "<td><input type=text name=status value='".$row['status']."'</td>";
         echo "<td><a href=delete.php?student_id=".$row['student_id'].">Delete</a></td>";
         echo "<td><input type=hidden name=student_id value='".$row['student_id']."'>";
         echo "<td><input type=submit></td>";  // TODO: delete "value" if error occurs.
         echo "</form></tr>";

       }
       ?>

  </body>
</html>
