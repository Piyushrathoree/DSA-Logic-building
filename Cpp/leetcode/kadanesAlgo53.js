var maxSubArray = function(nums) {

    let currSum =0 ;
    let maxSum =Number.MIN_SAFE_INTEGER ;
    nums.forEach(i => {
        currSum += i;
        maxSum = Math.max(currSum , maxSum)
        if(currSum < 0) currSum = 0
        
        return maxSum
    });
}

maxSubArray ([-2,1,-3,4,-1,2,1,-5,4]);