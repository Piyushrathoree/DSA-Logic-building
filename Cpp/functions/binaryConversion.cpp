#include <iostream>
using namespace std ;

int binaryToDec(int n) {
    int ans = 0;
    int pow = 1;

    while(n > 0) {
        int rem = n % 2 ; //extract remainder
        n /= 10;
        rem *= pow ;
        ans += rem ;
        pow *= 2 ;

    }
    return ans;
}

int decToBinary(int n) {
    int ans = 0;
    int pow = 1;

    while(n > 0) {
        //taking out the remainder and dividing the n (decimal value) to traverse through the whole number
        int rem = n % 2 ; // e.g n = 10 
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
    int num ;
    cout << "enter which task you want to perform -  enter ( 1 ) for converting decimal to binary \n and enter ( 2 )  for converting binary to decimal " << endl;
    cin >> num ;
    int decimal;
    int binary;
    switch(num) {
    case 1:
        cout << "enter the number to convert to binary ";
        cin >> decimal;
        cout << "the binary number of " << decimal << " is : " << decToBinary(decimal) << endl;
        break;

    case 2:
        cout << "enter the number to convert to decimal ";
        cin >> binary;
        cout << "the decimal number of " << binary << " is : " << binaryToDec(binary) << endl;
        

    }
}