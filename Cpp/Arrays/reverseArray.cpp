// reversing an array using two pointer approach
#include <iostream>
using namespace std;

void reverseArray(int arr[], int size) {
    int start = 0;
    int end = size - 1 ;

    while(start <= end) {
        swap(arr[start], arr[end]);
        start++, end--;
    }
}
int main() {
    int arr[] = {3, 42, 5, 6,4,2, 1, 3};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<size <<endl;
    reverseArray(arr, size);

    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}