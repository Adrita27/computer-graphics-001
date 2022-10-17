<?php
   include ('action.php');
?>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Admin User</title>
</head>
<body>
    <h1>Registration form </h1>
    <form action=""  method="POST" > 
          <table> 
        
               <tr>   
                <td> 
                      Name:
                      
                </td> 
                <td> <input type="text" id="fname" name="fname" value="" placeholder="name">  </td>
                    <td>
                    <span style="color: red;"> <?php  echo $Error; ?> </span>
                    </td>
                </tr> 
                   
               <tr>
                <td>
                      Email:      
                </td>
                <td> <input type="text" id="fmail" name="fmail" value="" placeholder="name@.com">  </td>
                <td>
                         <span style="color: red;"> <?php  echo $Error1; ?> </span>
                    </td>
               </tr>

               <td>
                      Number:      
                </td>
                <td> <input type="Number" id="fmail" name="fmail" value="" placeholder="+8801..">  </td>
               </tr>

                <tr>
                    <td>Age:  </td>
                    <td> <input type="number" id="fage" name="fage" value="" placeholder="age"> </td>
                </tr>  
                
                            <tr>
                                  <td>
                                        Gender:                                    
                                  </td>
                                  <td>
                                    <input type="radio" name="gender">Male
                                    <input type="radio" name="gender">Female
                                  </td>
                            </tr>
                <tr>
                    <td>Date Of Birth:</td> 
                     <td> <input type="date" id="fdate" name="fdate"></td>
                </tr>    
                 <tr>

                 </tr>

                <tr>
                    <td>Pasword:</td>
                    <td> <input type="password" id="fpass" name="fpass" value="" placeholder="E Password"> </td>
                </tr>

                
                <tr>
                    <td>Confirm Pasword:</td>
                    <td> <input type="password" id="fCpass" name="fCpass" value="" placeholder="Confirm Password"> </td>
                </tr>

                <tr>
                    <td>
                        Select Image
                    </td>
                    <td>
                    <input type="file" id="img" name="img" accept="image/*">
                    </td>
                </tr>

                 
         
        </table>
         <input type="submit" id="frmsubmit" name="submit"  >

    </form>
      
</body>
</html>