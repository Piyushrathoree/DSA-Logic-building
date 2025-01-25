#include <iostream>
#include <climits>
using namespace std;
int main() {
    int num[] = {3, 2, -4, -21, 5, 1};
    int size = 6 ;

    int smallest = INT_MAX;
    int largest = INT_MIN;

    for(int i = 0 ; i < size ; i++) {
        
        smallest = min(num[i], smallest);
        largest = max(num[i], largest);
    }
    for (int i=0 ; i< size ; i++){
        if(num[i] == smallest){
            cout <<"the index of smallest number in array is :"<< i<<endl;
        }        
    }
    for(int i=0 ;i<size ;i++){
        if(num[i] == largest){
            cout <<"the index of largest number in array is :"<< i<<endl;
        }
    }

    cout << "the smallest number in this arrays is :" << smallest << endl ;
    cout << "the largest number in this arrays is :" << largest << endl;
    return 0;
}