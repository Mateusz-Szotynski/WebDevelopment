const subscribeBtn = document.getElementById('subscribe-btn');
const visaBtn = document.getElementById('visa-btn');
const mastercardBtn = document.getElementById('mastercard-btn');
const americanexBtn = document.getElementById('americanex-btn');
const submitBtn = document.getElementById('submit-btn');
const subscribedLabel = document.getElementById('subscribed');
const paymentMethodLabel = document.getElementById('payment-method');

submitBtn.onclick = function(){

    if (subscribeBtn.checked){
        subscribedLabel.textContent = 'You\'ve subscribed!';
    }
    else{
        subscribedLabel.textContent = '';
    }
    if (visaBtn.checked){
        paymentMethodLabel.textContent = 'You\'ve chosen Visa payment method!';
    }
    else if (mastercardBtn.checked){
        paymentMethodLabel.textContent = 'You\'ve chosen MasterCard payment method!';
    } 
    else if (americanexBtn.checked){
        paymentMethodLabel.textContent = 'You\'ve chosen American Express payment method!';
    }
}