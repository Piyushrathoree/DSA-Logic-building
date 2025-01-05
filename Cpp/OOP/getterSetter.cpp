#include <iostream>
using namespace std;

class one {

  public:
    string name;
    int value;
    one() {
        cout << "constructor called" << endl;
    }
    one(string name, int value) {
        cout << " main constructor called" << endl;
    }
    void showDetails() {
        (name == "") ? cout << " name : xxx" << endl : cout << " Name: " << name << endl; 
        cout << " Value: " << value << endl;
    }
    void getName() {
        cout << "Name: " << name << endl;
    }

    void setName(string newName) {
        name = newName;
    }
    void getValue() {
        cout << "Value: " << value << endl;
    }
    void setValue(int newValue) {
        value = newValue;
    }



};
int main() {
    one obj;
    obj.showDetails();
    obj.setName("one");
    obj.setValue(10);
    obj.showDetails();
    obj.getName();


    return 0;
}