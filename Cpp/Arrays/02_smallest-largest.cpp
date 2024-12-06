#include <iostream>
#include <climits>
using namespace std;
int main() {
    int n = 10;
    int arr[n];

    cout << "enter the values for your array" << endl;
    for(int i = 0; i < n; i++) {

        cin >> arr[i];
    }

    cout << "the value of arrays are :" << endl;
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    
    cout << endl;
    int smallest = INT_MAX;

    for(int i = 0; i < n; i++) {
        if(arr[i] < smallest) {
            smallest = arr[i];
        }
    }
    cout << "the smallest number in the array is :" << smallest << endl ;

    int largest = INT_MIN;

    for(int i = 0; i < n; i++) {
        if(arr[i]  > largest) {
            largest = arr[i];
        }
    }
    cout << "the largest number in the array is :" << largest << endl ;



    return 0;
}