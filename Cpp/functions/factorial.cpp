#include <iostream>
using namespace std;

int factorial(int num) {
    int factorial = 1;
    for(int i = 1 ; i <= num ; i++) {
        factorial *= i;
    }
    return factorial;
}
int main() {
    int n;
    cout << "enter the value which you want to get factorial of " << endl;
    cin >> n;
    cout << "the factorial of " + n << factorial(n) << endl;
    
    return 0;
}