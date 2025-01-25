#include <iostream>
using namespace std;

int main() {
    char x;
    cout << "Enter your x: " << endl;
    cin >> x;

    if(x >= 'a' && x <= 'z') {
        cout << "lowercase" << endl;
    } else if(x >= 'A' && x <= 'Z') {
        cout << "uppercase" << endl;
    } else {
        cout << "you entered a non alphabetic character" << endl;
    }

}
