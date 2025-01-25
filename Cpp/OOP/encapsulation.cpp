#include <iostream>

using namespace std;

class Bank {
  private :
    string accountNumber;
    double balance;
  public :
    Bank(string accountNum, double bal) {
        accountNumber = accountNum;
        balance = bal;
        cout << "account created successfully " << endl;
    }
    //getter
    double getBalance() const {
        cout << "Your current account balance is :" << balance << endl ;
        return balance;
    }

    //deposit function
    void deposit(double amount) {
        if(amount > 0) {
            balance += amount;
        } else {
            cout << "invalid deposit amount";
        }
    }

    //withdraw function
    void withdraw(string accNum, double amount) {
        if(amount < 0) {
            cout << "invalid withdrawn amount " << endl ;
        } else if(accNum != accountNumber) {
            cout << "account does not exist" << endl;
        } else {
            balance -= amount ;
            cout << " amount withdrawn successfully " << endl;
        }
    }
};
int main() {
    Bank myAccount("12345", 1000);

    myAccount.getBalance();

    myAccount.deposit(200);
    myAccount.getBalance();
    myAccount.withdraw("12345", 400);
    myAccount.getBalance();
    return 0;
}
