const submitBtn = document.getElementById('submit-btn');
const response = document.getElementById('response');

submitBtn.onclick = function(){
    const age = Number(document.getElementById('text').value);
    if (age <= 0)
    {
        response.textContent = 'You cannot be 0 or less than 0 years old';
    }
    else if (age < 18)
    {
        response.textContent = 'You\'re too young';
    }
    else
    {
        response.textContent = 'Great! Enter';
    }
}