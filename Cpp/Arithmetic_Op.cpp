#include <iostream>
using namespace std;
int main() {
    float a, b;
    cout << "enter the value of a and b" << endl;
    cin >> a >> b;

    //addition
    cout << "addition is :" << a + b << endl;

    //substraction
    cout << "substraction is :" << a - b << endl;

    //multiplication
    cout << "multiplication is :" << a*b << endl;

    //Division
    double division = a / b ;
    cout << "Division is :" << division << endl;

    //modulo / remainder
    int p =10 ,q=6;
    cout << "modulo is :" << p % q << endl;
}