#include <iostream>
using namespace std;

class copyConstructor {
    int* value;
    string name;


  public:
    copyConstructor(int v, string name) {
        value = new int(v);
        // here the value is pointer which means it will initialize heap memory or dynamically allocated memory  so we need to initialize  the value of v like the code
        name = name;
        cout << "first constructor called" << endl;
    }

    void showDetails() {
        cout << " Name: " << name << endl;
        cout << " Value: " << *value << endl;
    }


    // the below function or contructor is a destructor because it do the cleanup in the code of dynamic memory allocation and called as destructor
    // ( ~ ) this sign in used in the starting to show that it is a destructor
    ~copyConstructor() {
        cout << "destructor called " << endl;
        delete value;
    }

    // copy constructor
    copyConstructor(const copyConstructor &obj) { // look here in the params we are using (&) which stores the whole reference or deep copy of the first constructor so that each and every thing of the first constructor get copied to the copy constructor including the destructor (main objective and most important thing of the copy constructor)
        value = new int(*obj.value);
        name = obj.name;
        cout << "Copy constructor called" << endl;
    }
};
int main() {
    copyConstructor obj1(10, "obj1");

    obj1.showDetails();
    copyConstructor obj2 = obj1; // here we are doing all the work of the copy constructor but there is only one issue by which the copy constructor exists
    // when the pointer is exist or kind of dynamically allocated memory is there  then the copy constructor is needed
    // check above copy constructor comments
    obj2.showDetails();

    return 0;
}