function plusOne(digits) {
    console.log(digits);
    
    let number = Number(digits.join(""));

        console.log(number);

    number += 1;
    console.log(number);
    
    const ans = Array.from(number.toString(), Number);
    console.log(ans);
    
    return ans;
}
plusOne([6, 1, 4, 5, 3, 9, 0, 1, 9, 5, 1, 8, 6, 7, 0, 5, 5, 4, 3]);
