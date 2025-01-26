//26/03/2025
//duplicate elements from array - doubt
//count even numbers
function countEven(arr) {
    let count = 0;
    for (i = 0; i < arr.length; i++) {
        if (arr[i] % 2 === 0) {
            count++;
        }
    }
    console.log(count);
    return count;
}
countEven([1, 2, 3, 4, 5]);

//find the second largest number
function secondLargest(arr) {
    const sortedArray = arr.sort();
    let secondLargestNumIndex = sortedArray.length - 2; // indexing starts from 0 so -1 for original size and -2 for second largest
    console.log(sortedArray[secondLargestNumIndex]);
}
secondLargest([1, 2, 3, 4, 5]);

//remove duplicates from array

function removeDuplicates(arr) {
    let uniqueArray = [...new Set(arr)];
    console.log(uniqueArray);
    return uniqueArray;
}
removeDuplicates([4, 3, 6, 2, 5, 3, 4, 6]);

//merge and sort two arrays

function mergeAndSort(arr1, arr2) {
    let newArray = [];
    newArray.push(...arr1);
    newArray.push(...arr2);
    newArray.sort();
    console.log(newArray);
}
mergeAndSort([3, 4, 6], [2, 5, 1]);

//working of spread operator
function spread_operator() {
    const arr = [3, 4, 5, 7, 2];
    console.log(...arr);
}
spread_operator();

// count vowels in string
function countVowel(str) {
    let count = 0;
    for (i = 0; i < str.length; i++) {
        if (
            str[i] == "a" ||
            str[i] == "i" ||
            str[i] == "o" ||
            str[i] == "e" ||
            str[i] == "u"
        ) {
            count++;
        }
    }
    console.log(count);
}
countVowel("hi piyush");

//find index of target value single or multiple
function findIndex(arr, target) {
  const indexs = []
    for (i = 0; i < arr.length; i++) {
        if (arr[i] == target) {
            indexs.push(i)
        }
    }
    if(indexs.length === 0){
      console.log(-1);
    }else{
      console.log(indexs);
    } 
}
findIndex([7, 4, 2, 4, 6], 9);
