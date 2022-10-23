<?php 
    $Error = "";
    $Error1 = "";
    $hasError=0;
     

       if(isset($_REQUEST['submit']))
       {
          $username = $_REQUEST['fname'];
          $usermail = $_REQUEST['fmail'];
          $password = $_REQUEST['fpass'];
          $Cpassword = $_REQUEST['fCpass'];
        
          if(empty($_POST['fname']))
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

            if(empty($_POST['fmail']))
            {
                $Error1 = "Enter the email";
            }
            else
            {
                if (filter_var($_POST['fmail'], FILTER_VALIDATE_EMAIL)) {
                    $Error1="ok";
                } 
                else {
                     $Error1 = "it's not a valid email address";
                }
            }
               //for image 
             if(empty($_FILES["image"]["name"]))
             {
                echo "no file upload";
             }
             else{
                    echo "your file name".$_FILES["image"]["name"];
                    

             }


            if($hasError==0)
            {
                $exixtingdata = file_get_contents("Data.json");
                $existingdatainphp = json_decode($exixtingdata);
                 
                $myarr=array(
                      "Name"=> $_REQUEST["fname"],
                      "Gender"=> $_REQUEST["gender"],
                      "Age"=> $_REQUEST["fage"]
                      
                );

                $existingdatainphp[]= $myarr;
                $myjsonobj= json_encode($existingdatainphp , JSON_PRETTY_PRINT);
                
                file_put_contents("Data.json",$myjsonobj);

                $mydata= file_get_contents("Data.json");
                $myphpdata = json_decode($mydata);


                echo "<br> Print from json: ".$myphpdata[0] -> Name ;

            }

            
            


  
       }

?>