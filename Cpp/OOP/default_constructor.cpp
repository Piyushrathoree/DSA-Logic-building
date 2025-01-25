#include <iostream>
using namespace std;
class constructor{
    string name = "constructor";
    int value = 10;

    public:
        constructor(){
            cout << "Default constructor called" << endl;
        } // the constructor always has the same name as the class
    // the constructor got calleed automatically whenever the instance of the class is created

    void showDetails(){
        cout << "Name: " << name << endl;
        cout << "Value: " << value << endl;
        
    };
};

int main(){
    constructor obj;
    return 0;   
}

// Default constructor
    // A constructor that doesn't take any arguments is called a default constructor.
    // If you don't define a constructor for a class, the compiler will generate a default constructor for you.