#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter your age: " << endl;
    cin >> age;
    if(age >= 18) {
        cout << "you're eligible to vote" << endl;
    } else {
        cout << "you're not able to vote now " << endl;
    }
}