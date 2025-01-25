#include <iostream>
using namespace std;

class One{
    string a;
    int b;
    public:
    //delegation constructor - for setting default values which is not given by user here only one value is given by the use so set another value as default
        One(string a): One(a , 1 ){}

    One(string a, int b){
        a = a;
        b = b;
        cout << "a: " << a << " b: " << b << endl;
    }
};
int main(){
    One obj("Hello");
    return 0;
}