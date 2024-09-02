<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8"> <!-- Fixed charset attribute -->
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <link rel="stylesheet" href="style.css">
    <title>SignUp Page</title>
</head>
<body>
    <div class="container">
        <div class="image">
            <img src="" width="400px" alt="Login Image">
        </div>
        <div class="contents">
        <form method="POST" action="">
        <input type="number" name="uid" placeholder="uid"style="margin-bottom: 15px;"><br>
        <input type="text" name="name" placeholder="Name" required style="margin-bottom: 15px;"><br>
        <input type="number" name="phno" placeholder="PhoneNumber" style="margin-bottom: 15px;"><br>
        <input type="text" name="Address" placeholder="Address" style="margin-bottom: 15px;"><br>
        <select id="gender" name="gender" aria-label="Select your gender identity" style="margin-bottom: 15px;">
            <option value="Male">Male</option>
            <option value="Female">Female</option>
            <option value="Other">Others</option>
        </select>
        <!-- <input type="Radio" id="Male" name="gender" value="Male">
        <label for="Male">Male</label><br>
        <input type="Radio" id="Female" name="gender" value="Female">
        <label for="Female">Female</label><br> -->
        <input type="date" name="dob" placeholder="Date-of-Birth" style="margin-bottom: 15px;"><br>
        <input type="text" name="email" placeholder="Email" style="margin-bottom: 15px;"><br>
        <input type="password" name="Password" placeholder="password" required style="margin-bottom: 15px;"><br>
        <button type="submit" name="submit">Signup</button>
        </form>
</div>
    </div>
</body>
<?php
if(isset($_POST["submit"]))
{
    echo "hai";
}
?>
       
