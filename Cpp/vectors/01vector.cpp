#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> vec;
    vector<int> v = {1, 2, 3, 4, 5};
    vector<int> v2(3 ,0);
    

    cout<<v[1]<<endl;
    cout<<v2[2]<<endl;
  
    //foreach loop - in array the loop will extracting the index position from the array from 0 to size -1 
    //but here in vector this foreach loop will extract the value of the index position not the index position itself like array
    for(int val : v){
        cout <<val <<" ";
    }
    cout<<endl;


    return 0;
} 