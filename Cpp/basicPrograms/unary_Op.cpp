#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int b = a++;


    cout << "b -->" << b << endl;
    cout << "a -->" << a << endl;

    int c  = ++a;
    cout << "c -->" << c << endl;
    cout << "a -->" << a << endl;

    int p = 10;
    int q = p--;


    cout << "q -->" << q << endl;
    cout << "p -->" << p << endl;
    
    int r = --p;
    cout << "r -->" << r << endl;
    cout << "p -->" << p << endl;
    return 0;
}