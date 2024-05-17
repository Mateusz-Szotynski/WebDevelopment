const rollBtn = document.getElementById('roll-btn');
const num1 = document.getElementById('num1');
const num2 = document.getElementById('num2');
const num3 = document.getElementById('num3');
const min = 1;
const max = 6;

rollBtn.onclick = function(){
    let x = Math.floor((Math.random() * max) + min);
    num1.textContent = x;
    x = Math.floor((Math.random() * max) + min);
    num2.textContent = x;
    x = Math.floor((Math.random() * max) + min);
    num3.textContent = x;
}