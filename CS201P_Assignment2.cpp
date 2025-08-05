// CS201P - Introduction to Programming (Practical)
// Assignment No. 2 - Spring 2025
// Student Name: Muhammad Arsalan Ahmed
// VUID: BC240405549

#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string accountHolderName;
    string accountNumber;
    double balance;

public:
    BankAccount(string name, string accNum, double initialBalance) {
        accountHolderName = name;
        accountNumber = accNum;
        balance = initialBalance;
    }


    void deposit(double amount) {
        balance += amount;
        cout << "\nAmount " << amount << " deposited successfully." << endl;
    }

    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "\nAmount " << amount << " withdrawn successfully." << endl;
        } else {
            cout << "\nInsufficient Balance." << endl;
        }
    }

    void displayDetails() {
        cout << "\n----- Account Summary -----" << endl;
        cout << "Account Holder Name: " << accountHolderName << endl;
        cout << "Account Number     : " << accountNumber << endl;
        cout << "Current Balance    : " << balance << endl;
    }
};

int main() {
    string name = "Muhammad Arsalan Ahmed";
    string vuid = "BC240405549";

    double initialBalance = 10000;       
   double depositAmount = 5549;    
double withdrawAmount = 2404;      

    BankAccount account(name, vuid, initialBalance);

    account.deposit(depositAmount);
    account.withdraw(withdrawAmount);


    account.displayDetails();

    return 0;
}
