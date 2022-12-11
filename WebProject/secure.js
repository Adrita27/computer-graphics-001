
function checkName()
{
    var x=document.getElementById("fname").value;
    var correctWay = /^[a-zA-Z\s]+$/;
    if(x.length == 0  )
    { 
        
        return false;
    }
    else{
        if( x.match(correctWay))
          {
            return true;
         }
         else{
             return true;
         }
       
    }
    
   

 }

 function emailcheck()
 {
    var y=document.getElementById("fmail").value;
    if(y.indexOf('@')<=0 || y.charAt(y.length-4)!='.')
    {
        return false;
    }
    else 
    {
        return true;
    }
 }

 function checkPassword()
 {
      var z= document.getElementById("fpass").value;
      var a= document.getElementById("fCpass").value;
      
 }

function validateForm()
{
   if(checkName() ==  true  && emailcheck()==true)
   {
    return true;
   }
   else return false;
}