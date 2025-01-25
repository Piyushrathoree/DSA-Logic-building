#include <iostream>
using namespace std;

int sumOfNum(int num) {
    int DigitSum = 0;

    while(num > 0) {
        // Add the last digit to the sum and remove it from the number
        DigitSum += num % 10;
        // Remove the last digit from the number
        num /= 10;
    }
    return DigitSum;
}
int main() {
    cout << "sum : " << sumOfNum(2345) << endl;
    return 0;
}