//26/03/2025

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