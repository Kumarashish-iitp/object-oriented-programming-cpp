// Create a BankAccount class that stores account holder name, account number, and balance.
// Create member functions to deposit money, withdraw money, and display account details.
// Create an object and perform these operations.

#include <iostream>
#include <string>
using namespace std;

class BankAccount {
public:
    string name;
    string acc_Number;
    double balance;

    void deposit(double amount) {
        balance += amount;
        cout << "Deposited: " << amount << endl;
        cout << "Total Balance: " << balance << endl;
    }

    void withdraw(double amount) {
        if(amount <= 0) {
            cout << "Invalid Amount!" << endl;
        }
        else if (amount > balance) {
            cout << "Insufficient balance!" << endl;
        } 
        else{
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
            cout << "Total Balance: " << balance << endl;
        }
    }

    void display(){
        cout << "Account Holder Name : " << name << endl;
        cout << "Account Number : " << acc_Number << endl;
        cout << "Total Balance : " << balance << endl;
    }
};

int main(){
    BankAccount c1;
    c1.name = "Kumar Ashish";
    c1.acc_Number = 123456789;
    c1.balance = 1000.00;

    c1.deposit(600);
    cout << endl;
    c1.withdraw(100);
    cout << endl;
    c1.display();

    return 0;
}
