//prime number print upto 50

//find any prime number in the array

//sum of all element of array
function findsum() {
  const arr = [3, 5, 7, 3, 5, 2];
  let sum = 0;
  arr.forEach((i) => {
    sum += i;
  });
  console.log(sum);
}

findsum();

//check palindrome
function checkPalindrome() {
  const word = "radar";

  if (word.split("").reverse().join("") === word) {
    console.log("yes it is palindrome");
  } else {
    console.log("it is not a palindrome");
  }
}
checkPalindrome();

//count even number
function countEven() {
  const arr = [3, 5, 7, 3, 4, 8, 2, 6, , 5, 2];
  let sum = 0;
  arr.forEach((i) => {
    if (i % 2 === 0) {
      sum += i;
    }
  });
  console.log(sum);
}
countEven();

//factorial of number

function factorial() {
  const n = 5;
  let factorial = 1;
  for (i = 1; i <= 5; i++) {
    factorial *= i;
  }
  console.log(factorial);
}

factorial();

//find duplication in array

function duplicate() {
  const arr = [3, 5, 7, 3, 5, 2];
  let duplicate = [];
  for (i = 0; i < arr.length; i++) {
    for (j = i + 1; j < arr.length; j++) {
      if (arr[i] === arr[j]) {
        duplicate.push(arr[i]);
      }
    }
  }
  if (duplicate.length > 0) {
    console.log("Duplicate elements found:", duplicate);
  } else {
    console.log("No duplicate elements found.");
  }
}
duplicate();

//replacing word as multiples of specific numbers
// replace multiple of 3 as fizz and multiple of 5 to buzz
function replacingWord() {
  let arr = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10];
  const word1 = "fizz";
  const word2 = "buzz";
  arr.forEach((i)=>{
    if(arr[i]% 3 === 0){
        arr[i] = word1;
    }else if(arr[i]%5 === 0){
        arr[i] = word2
    }
  })
console.log(arr);

}
replacingWord()
