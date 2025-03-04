// palindrome checker - any word is similar to its reverse

function isPalindrome(word) {
    if (word === word.split("").reverse().join("")) {
        console.log(`yes ${word} is palindrome`);
    } else {
        console.log(`no ${word} is not palindrome`);
    }
}
isPalindrome("1231");
isPalindrome("lolol"); //

//reverse numbers

function reverse(num) {
    let reverseNum = parseInt(num.toString().split("").reverse().join(""));
    console.log(typeof reverseNum);
    return reverseNum;
}
console.log(reverse(123));


// capitilize words 
// hello world --> Hello World
// goodmorning --> GoodMorning 

function convertToUppercase(str){
    return str.split(" ").map(word => word.charAt(0).toUpperCase() + word.slice(1)).join(" ");
}
console.log(convertToUppercase("goodmorning"));
