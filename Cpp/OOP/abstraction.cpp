#include <iostream>
using namespace std;

//this code refers to abstraction - part of cpp 

//this is abstract class refer to line no . 8
class Tea {
  public:
    virtual void collectIngreadient() = 0; // here i created a pure virtual function which is empty and used a single keyword virtual and if the virtual function is made then it mean the lcass becomes the abstract class
    virtual void brew() = 0;
    virtual void serve() = 0;

    void prepareTea() {
        collectIngreadient();
        brew();
        serve();
    }
};

//here is the derived classes which is using the virtual function which are override here 
class GreenTea : public Tea {

    void collectIngreadient() override {
        cout << "green tea , sugar collected" << endl;
    }

    void brew() override {
        cout << "brew tea for 5 minutes" << endl ;
    }

    void serve() override {
        cout << "4 cups served" << endl;
    }
};

class MasalaTea : public Tea {

    void collectIngreadient() override {
        cout << "tea leaves , masala , milk , sugar collected" << endl;
    }

    void brew() override {
        cout << "brew tea for 10 minutes" << endl ;
    }

    void serve() override {
        cout << "4 cups served" << endl;
    }
};


// main function 
//when all the virtual function are completely override then i will have the access of the main method from line no.13
int main() {
    GreenTea greenTea;
    MasalaTea MasalaTea;
    greenTea.prepareTea();
    cout << endl;
    MasalaTea.prepareTea();

}
