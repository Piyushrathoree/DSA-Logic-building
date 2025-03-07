// sum of natural numbers 
const n=5;
let sum = 0
for(let i=0;i<n;i++){
    sum+=i
}
console.log(sum);

// factorial 
let factorial = 1
for (j=1;j<n+1;j++){
    factorial *= j
}
console.log(factorial);

// factor of a number  --  HOW MANY  numbers are there which can perfectly divide the given number 
const numberFactor = 55
let i = 1
while( i <=Math.ceil(numberFactor/2)){
    if(numberFactor%i === 0){
        console.log(i);
    }
    i++
}

// prime number 
function isPrime(n){
    let isprime =true;
    if(n<=1) return false;
    if(n==2)return true;
    if(n%2===0) return false;
    for(let i=3 ; i<=Math.ceil(Math.sqrt(n));i++){
        if(n%i==0)return false
    }
    return true
}
console.log(isPrime(13))

//another implmentation for finding prime numbers

function isPrime(n) {
    for (i = 2; i < n; i++) {
        if (n % i === 0) {
            console.log("it is not a prime number");
            return;
        }
    }
    console.log("yes it is a prime number");
}

isPrime(97);


//reverse a number 
function reverseNumber(n = 1242) {
    let reversed = 0;
    while (n !== 0) {
        reversed = reversed * 10 + n % 10;
        n = Math.floor(n / 10);
    }
    return reversed;
}

console.log(reverseNumber(1242));