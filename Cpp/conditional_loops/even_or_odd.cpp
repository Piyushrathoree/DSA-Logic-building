#include <iostream>
using namespace  std;

int main() {
    int num;
    cout << "Enter your num: " << endl;
    cin >> num;
    if(num % 2 == 0) {
        cout << "the number is even" << endl;
    } else {
        cout << "the number is odd" << endl;
    }
}