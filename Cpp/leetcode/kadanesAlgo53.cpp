#include <iostream>
#include <climits>
#include <vector>
using namespace std;
int main(){
     
    vector<int> arr = {-2,1,-3,4,-1,2,1,-5,4};
    
    int currSum=0 ,maxSum = INT_MIN;
    for ( int i : arr ){
        currSum += i;
        maxSum = max(currSum , maxSum );
        if(currSum < 0){
            currSum = 0 ;
        }

    }
    cout << maxSum <<endl;
    return maxSum;
    
}