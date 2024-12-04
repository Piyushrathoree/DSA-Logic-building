#include <iostream>
using namespace std ;

int binaryToDec(int n) {
    return 0;
}

int decToBinary(int n) {
    int ans = 0;
    int pow = 1;

    while(n > 0) {
        //taking out the remainder and dividing the n (decimal value) to traverse through the whole number
        int rem = n % 2 ;
        n /= 2 ;

        //adding the value to the ans and then also multiplying it with 10^pow
        ans += (rem * pow) ;//the pow is here to arrange the binary number into proper sequence and the power is increased by  multipying it with 10
        //whenever i multiply the pow with 10 it will increase its power by one
        //10^0 --> 10^1 --> 10^2 .....
        pow *= 10 ;
    }
    return ans;
}

int main() {
    int decimalNum;
    cout << "enter the number which you want to convert to binary " << endl ;
    cin >> decimalNum ;

    cout << "the binary number of " << decimalNum << "is :" << decToBinary(decimalNum) <<endl ;
    return 0 ;
}