#include <iostream>
using namespace std;

int main() {
    cout << ((3 < 1) || (3 < 1)) << endl; //or operator if both the values are not right then return 0 or false 
    cout << ((3 > 1) || (3 < 1)) << endl; //or operator if one  value are right then return 1 or true 
    cout << ((3 > 1) && (3 > 1)) << endl; //and operator if both the values are right then return 1 or true 
    cout << ((3 > 1) && (3 < 1)) << endl; //and operator if one  value are right then return 0 or false
    cout << (!(3 > 1)) << endl; //not operator if the value is right then return 0 or false else return 1 or true
    cout << ((3 > 1) ^ (3 > 1)) << endl; //xor operator if both the values are not equal then return 0 or false else return 1 or true

    return 0;
}