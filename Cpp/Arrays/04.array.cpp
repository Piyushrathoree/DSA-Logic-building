#include <iostream>
using namespace std;

// if  the condition of going the loop to 5th value is gets increase then it will give the garbage value and that can be any value
int garbage_value() {
    int arr[5] = {1, 2, 3, 4, 5};
    cout << "Array elements are: ";
    for(int i = 0; i < 7; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    cout << "Array elements are: ";
    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    garbage_value(); // the calls te function of the garbage value and it will print 1 2 3 4 5 and then the garbage value which cound be any value
    return 0;
}
//the above code provides the proper output which is 1 2 3 4 5