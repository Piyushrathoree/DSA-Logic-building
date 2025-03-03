// 29-01-25

//for reversing a string
function reverseString(str) {
    console.log(str.split("").reverse().join(""));
}
reverseString("hello");

// swapping values of variables
//1st method

let a = 10;
let b = 20;
let c;

c = a;
a = b;
b = c;

console.log(a);
console.log(b);

//2nd method
let p = 50;
let q = 60;

p = p + q;
q = p - q;
p = p - q;

console.log(p);
console.log(q);

// 3rd method

let x = 100;
let y = 101;

[x, y] = [y, x];
console.log(x);
console.log(y);
