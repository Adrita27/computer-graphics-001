<?php 
    $Error = "";
    $Error1 = "";
     

       if(isset($_REQUEST['submit']))
       {
          $username = $_REQUEST['fname'];
          $usermail = $_REQUEST['fmail'];
          $password = $_REQUEST['fpass'];
          $Cpassword = $_REQUEST['fCpass'];
        
          if(empty($_REQUEST['fname']))
            {
                $Error = "Enter the name";
            }
            else
            {
                if(!preg_match( '/^[a-zA-Z\s]+$/' ,$username))
                {
                     $Error = "Please input valid name";
                }
            }

            if(empty( $usermail))
            {
                $Error1 = "Input email address";
            }
            else
            {
                if (!filter_var($usermail, FILTER_VALIDATE_EMAIL))
                {
                    $Error1 = "Enter valid email...";
                }
            }


  
       }

?>