#include <iostream>
#include<string>
#include <vector>
using namespace std;

class Tea {
  protected:
    string teaName;
    int servings;
  public:
    Tea(string tea, int serve) : teaName(tea), servings(serve) {
        cout << "the constructor called for " << teaName << endl;
    }

    virtual void brew() const {
        cout << " brew " << teaName << " for 5 minutes" << endl;
    }

    virtual void serve() const {
        cout << "serve " << servings << " of " << teaName << endl;
    }

    virtual ~Tea() {
        cout << "destructor called for " << teaName << endl;
    }

};

class GreenTea : public Tea {
  public:
    GreenTea(int serving) : Tea("Green tea", serving) {
        cout << "constructor of green tea class called for " << teaName  << endl;
    }

    void brew() const override {
        cout << " brew " << teaName << " for 5 minutes" << endl;
    }

    ~GreenTea() {
        cout << "green tea destructor called" << endl;
    }
};

class masalaTea : public Tea {
  public:
    masalaTea(int serving) : Tea("masala tea", serving) {
        cout << "constructor of masala tea class called for " << teaName  << endl;
    }

    void brew() const override final{
        cout << " brew " << teaName << " for 9 minutes" << endl;
    }

    ~masalaTea() {
        cout << "masala tea destructor called" << endl;
    }
};

//here this code is raising up an issue because the brew method which is inherit from masala tea cant be override because it is finalize using final keyword
// class SpicyMasalaTea: public masalaTea{
//     public:
//         void brew() const override{
//             cout << "Brewing" << teaName << " with spices and milk" << endl;
//         }
// };


int main() {

    Tea* tea1 = new GreenTea(4);
    Tea* tea2 = new masalaTea(10);

    tea1->brew();
    tea1->serve();

    tea2->brew();
    tea2->serve();

    delete tea1;
    delete tea2;

    return 0;
}