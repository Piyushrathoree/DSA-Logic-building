#include <iostream>
using namespace std;

int linearSearch(int arr[],int size, int target) {
    for(int i = 0; i < size; i++) {
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
    return 0;
}
int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 2, 3};
    int size = 8;
    //we have to find 6 by linear search
    int target = 6;

    cout<<linearSearch(arr ,size,target)<<endl;
    return 0;
}