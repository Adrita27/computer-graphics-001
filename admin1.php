<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <link rel="stylesheet" type="text/css" href="CSS/home.css">
    <title>Admin User</title>
</head>

<body>
    <h1>Registration form </h1>
    <form action="" method="POST" enctype="multipart/form-data">
        <table class="midd">

            <tr>
                <td>
                    Name:

                </td>
                <td> <input type="text" id="fname" name="fname" value="" placeholder="name"> </td>


            </tr>

            <tr>
                <td>
                    Email:
                </td>
                <td> <input type="text" id="fmail" name="fmail" value="" placeholder="name@.com"> </td>


            </tr>
            <tr>
                <td>
                    Number:
                </td>
                <td> <input type="Number" id="fnumber" name="fnumber" value="" placeholder="+8801.."> </td>
            </tr>

            <tr>
                <td>
                    Gender:
                </td>
                <td>
                    <input type="radio" name="fgender">Male
                    <input type="radio" name="fgender">Female

                </td>

            </tr>
            <tr>
                <td>Date Of Birth:</td>
                <td> <input type="date" id="fdate" name="fdate"> </td>

            </tr>

            <tr>
                <td>
                    <p>
                    <h4><u>Nominee Information </u> </h3>
                        </p>
                </td>
                <!--multiple table -->
                <!-- <table class="nominee">-->
            <tr>
                <td>Nominee Name :</td>
                <td> <input type="text" id="fnominee" name="fnominee" value="" placeholder="enter Nominee Name">

                </td>
            </tr>
            <tr>
                <td>Nominee Age :</td>
                <td>
                    <input type="number" id="fnomineeage" name="fnomineeage" value="" placeholder="age">

                </td>
            </tr>
            <tr>
                <td>
                    Gender:
                </td>
                <td>
                    <input type="radio" name="nomineegender">Male <br>
                    <input type="radio" name="nomineegender">Female

                </td>

            </tr>

            <tr>

                <td> Relation with Admin : </td>
                <td>
                    <select id="nomineeRelation" name="nomineeRelation">
                        <option value="Son">Son</option>
                        <option value="Doughter">Doughter</option>
                        <option value="Brother">Brother</option>
                        <option value="Sister">Sister</option>
                    </select>

                </td>

            </tr>
            <!--  </table> -->
            <br>
            </tr>

            <tr>
                <td>
                    TIN Number:
                </td>
                <td>
                    <input type="number" name="tinnumber" placeholder="TIN Number" min="100000" max="999999">
                </td>
            </tr>

            <tr>
                <td>Pasword:</td>
                <td> <input type="password" id="fpass" name="fpass" value="" placeholder="Password"> </td>

            </tr>


            <tr>
                <td>Confirm Pasword:</td>
                <td> <input type="password" id="fCpass" name="fCpass" value="" placeholder="Confirm Password">

                </td>
            </tr>

            <tr>
                <td>
                    Select Image
                </td>
                <td>
                    <input type="file" id="files" name="files">
                </td>

            </tr>

        </table>
        <br><br>
        <input type="submit" id="frmsubmit" name="submit" style="height:30px; width:80px" class="submit">

    </form>
    <br>
    <a href="Profile.php">
        <input type="submit" value="LOGIN" id="login" name="login" style="height:30px; width:100px">
    </a>
</body>

</html>