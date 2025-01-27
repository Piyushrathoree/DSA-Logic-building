//27/01/25

//moving all zeros to end of array in JavaScript
function moveZeros(arr) {
    let count = [];
    for (i = 0; i < arr.length; i++) {
        if (arr[i] === 0) {
            count.push(arr[i]);
            arr.splice(i, 1);
        }
    }
    let finalArray = [];
    finalArray.push(...arr);
    finalArray.push(...count);
    console.log(finalArray);
}
moveZeros([3, 0, 5, 3, 8, 0, 8, 1, 5]);

//fina the missing number from continous array
function findMissingNum(arr) {
    let min = Math.min(...arr);
    let max = Math.max(...arr);
    //finding the sum of countinous values
    let actualSum = (max * (max + 1)) / 2;
    console.log(actualSum);

    //finding the current sum
    let sum = 0;
    for (i = 0; i < arr.length; i++) {
        sum += arr[i];
    }
    console.log(sum);

    let missingNum = actualSum - sum;
    //the missing number
    console.log("the missing number is : ", missingNum);
}
findMissingNum([1, 2, 4, 5]);

