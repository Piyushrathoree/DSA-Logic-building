#include <iostream>
#include <vector>
using namespace std;

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
    
int main(){
    vector<int> arr ={2,7,11,15};
    int target = 17;

    pairSum(arr , target);
    
}