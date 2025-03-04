// BIG o Notation
// Big O Notation tell us how fast or slow an algo run as the input grows , and it also help to measure the efficiency

// O(n) - 2 loops two inputs means inputs are growing according so linear time complexity

const arr = ["straberries", "grapes", "apples", "mangos", "watermelon "];

const findFruit = item => {
  for (let i = 0; i < arr.length; i++) {
    if (arr[i] === item) {
      console.log("found :" + item + " at " + i);
    }
  }
  for (let j = 0; j < arr.length; j++) {
    if (arr[j] === item) {
      console.log("found :" + item + " at " + j);
    }
  }
};
findFruit("apples");

//O(1) - constant - dont change according to input - always remain constant

const getElement = (arr, index) => arr[index]; // - here we will get a single constant value
console.log(getElement(arr, 2));


//O(n^2) - means the execution time grow quadratically - example - nested loops

const findPairs = (arr) =>{
    for (let i =0;i<arr.length;i++){
        for (let f=i+1;f<arr.length;f++){
            console.log(`${arr[i].} ${arr[f]}`);
            
        }
    }
}
findPairs(arr)


