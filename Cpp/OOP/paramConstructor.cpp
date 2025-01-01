#include <iostream>
using namespace std;

class paramConstructor
{

public:
    string name;
    int value;

    paramConstructor(string n, int v) // see the operations which are performed in the below function are taking some value which are empty but now in the constructor we initialize the values with the parameter of the constructor 
    {
        name = n;
        value = v;
    }

    void showDetails()
    {
        cout << "Name: " << name << endl;
        cout << "Value: " << value << endl;
    };
};

int main(){
    paramConstructor obj("paramConstructor", 20);

    obj.showDetails();

    return 0;
}