<?php
$server="localhost";
$user= "root";
$pass="password";
$db="database name";
$con = mysqli_connect($server, $user, $pass, $db) or die("connection error" . mysqli_connect_error);
?>