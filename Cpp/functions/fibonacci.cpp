#include <iostream>
using namespace std;

void fibonacci(int n) {
    int first = 0, second = 1, next;

    if(first >= 0) {
        cout << first << " ";
    }

    if(second >= 0) {
        cout << second << " ";
    }

    for(int i = 2 ; i <= n ; i++) {
        next = first + second ;
        cout << next << " ";
        first = second ;
        second = next ;
    }
    cout << endl;
}

int main() {
    int n ;
    cout << "enter the number for calculating the fibonacci series ";
    cin >> n;

    fibonacci(n);

    return 0;
}