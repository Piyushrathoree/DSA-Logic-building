#include <iostream>
#include <cmath>
using namespace std;
int calculatePrime(int n) {

    for(int i = 2; i <= n; i++) {
        bool isPrime = true;
        for(int j = 2 ; j <= sqrt(i) ; j++) {
            if(i % j == 0) {
                isPrime = false;
                break;
            }
        }

        if(isPrime) {
            cout << i << " ";
        }

    }
    cout << endl;
    return 0;
}

int main() {
    calculatePrime(50);
}