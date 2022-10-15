<?php
       if(isset($_POST['submit']))
       {
          $username = $_POST['fname'];
          $password = $_POST['fpass'];
          $Cpassword = $_POST['fCpass'];
        
          if(strlen($_POST['fpass']) <8 )
            {
                echo "Password Should be more then 8 character";
            }
            else
            {
                if(strcmp($password,$password) == 0 )
                {
                    echo "Successful";
                }
                else
                {
                    echo "password dosen't matched ";
                }
            }
  
       }

?>