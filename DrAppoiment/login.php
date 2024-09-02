<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8"> <!-- Fixed charset attribute -->
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <link rel="stylesheet" href="style.css">
    <title>Login Page</title>
</head>
<body>
    <div class="container">
        <div class="image">
            <img src="image/th.jpg" width="400px" alt="Login Image">
        </div>
        <div class="content">
            <h3>Login to Your Account</h3>
            <form method="POST" action="">
            <input type="text" name="username" placeholder="Username">
            <input type="password" name="password" placeholder="Password">
            <button type="submit" name="submit">Login</button>
            </form>
        </div>
    </div>
<?php
  if (isset($_POST["submit"])) {
      //echo "hai";
      $un = $_POST["username"];
      $pass = $_POST["password"];

      $con = mysqli_connect("localhost", "root", "", "sample");
      if (!$con) {
          die("Connection failed: " . mysqli_connect_error());
      }

      $query = "SELECT * FROM emp WHERE id='$pass' AND name='$un'";
      $result = mysqli_query($con, $query);
      $num = mysqli_num_rows($result);

      if ($num > 0) {
          // Redirect to another page
          header("Location: hai.php");
          exit();
      } else {
          echo '<script>alert("Wrong username or password!")</script>';
      }

      mysqli_close($con);
  }
  ?>
</body>
</html>