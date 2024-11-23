#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter your num: " << endl;
    cin >> num;
    if(num >= 90) {
        cout << "grade A" << endl;

    } else if(num >= 80 && num < 90) {
        cout << "grade B" << endl;
    } else if(num >= 70 && num < 80) {
        cout << "grade C" << endl;
    } else {
        cout << "you need to study or cheat but atleast score 70+"<<endl;
    }
}