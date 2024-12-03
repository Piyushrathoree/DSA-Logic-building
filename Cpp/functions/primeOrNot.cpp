#include <iostream>
using namespace std;

bool primeNum(int n) {
    for(int i = 2 ; i < n ; i++) {
        if(n % i == 0) {
            cout << n << " is not a prime number" << endl;
            return 0;
        }
    }
    cout << n << " is the prime number " << endl;
    return 1;
}


int main() {
    primeNum(11);
    return 0 ;
}