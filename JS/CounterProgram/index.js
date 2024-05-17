let counter = 0;
const counterLabel = document.getElementById('counter');
const decreaseBtn = document.getElementById('decrease-btn');
const resetBtn = document.getElementById('reset-btn');
const increaseBtn = document.getElementById('increase-btn')

decreaseBtn.onclick = function(){
    counter--;
    counterLabel.textContent = counter;
}

resetBtn.onclick = function(){
    counter = 0;
    counterLabel.textContent = counter;
}

increaseBtn.onclick = function(){
    counter++;
    counterLabel.textContent = counter;
}