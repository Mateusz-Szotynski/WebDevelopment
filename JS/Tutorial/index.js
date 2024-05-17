
const PI = 3.14;
let radius = 0;
let circumference = 0;
let area;

document.getElementById("mysubmit").onclick = function(){
    radius = document.getElementById("myradius").value;
    circumference =  2 * PI * radius;
    area = PI * radius**2;
    document.getElementById("myresult").textContent = `The radius: ${radius} \nThe circumference: ${circumference} \nThe area: ${area}`;
}