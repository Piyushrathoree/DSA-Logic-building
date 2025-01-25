#include <iostream>
using namespace std;

//function to calculate the factorial
int factorial(int num) {
    int factorial = 1;
    for(int i = 1 ; i <= num ; i++) {
        factorial *= i;
    }
    return factorial;
}
//function to calculate the binomail coefficient
int binomialCo(int n, int r) {
    int fact_n = factorial(n);
    int fact_r = factorial(r);
    int fact_nmr = factorial(n - r);

    return fact_n / (fact_r * fact_nmr);
}


int main() {
    cout << "the binomial coEfficient of 5c3 is:" << binomialCo(5, 3)<<endl;
    return 0;
}