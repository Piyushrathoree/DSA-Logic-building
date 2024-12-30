#include <iostream>
#include <vector>
using namespace std;

//brute force approach
vector<int> pairSum(vector<int> arr, int target) {
    vector<int> ans;
    int n = arr.size();
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                ans.push_back(arr[i]);
                ans.push_back(arr[j]);
            }
        }
    }
    cout<<"the values which are equal to taget is :" <<" ";
    for (int val : ans){
        cout<<val << " ";
    }
    cout<<endl;
    cout<<"and the indices of the value which is equal to target is :"<<" ";
    for (int i=0 ;i<ans.size() ;i++){
        cout<<i<<" ";
    }
    cout<< endl;
    return ans;
}

//optimal approach O(n)
vector<int> pairSum2(vector<int> arr, int target){
    int n=arr.size();
    vector <int> ans;
    int i=0, j=n-1;
    while(i<j){
        if (arr[i]+arr[j] > target){
            j--;
        }else if(arr[i]+arr[j] < target){
            i++;
        }else{
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
}
    
int main(){
    vector<int> arr ={2,7,11,15};
    int target = 17;

    vector<int> ans =pairSum2(arr , target);
    cout<<ans[0] <<","<<ans[1]<<endl;
}