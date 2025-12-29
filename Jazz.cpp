#include <iostream>
#include <string>
using namespace std;
class JazzCash {
private:
    string mobileNumber;
    int pin;
    double balance;
public:
    // Constructor
    JazzCash(string mob, int p, double bal) {
        mobileNumber = mob;
        pin = p;
        balance = bal;
    }
    // Login
    bool login(string mob, int p) {
        if (mob == mobileNumber && p == pin) {
            cout << "\nLogin Successful!\n";
            return true;
        } else {
            cout << "\nInvalid Mobile Number or PIN!\n";
            return false;
        }
    }
    // Check Balance
    void checkBalance() {
        cout << "\nCurrent Balance: Rs " << balance << endl;
    }
    // Deposit Money
    void depositMoney(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "\nAmount Deposited Successfully!\n";
        } else {
            cout << "\nInvalid Amount!\n";
        }
    }
    // Withdraw Money
    void withdrawMoney(double amount) {
        if (amount <= balance && amount > 0) {
            balance -= amount;
            cout << "\nWithdrawal Successful!\n";
        } else {
            cout << "\nInsufficient Balance or Invalid Amount!\n";
        }
    }
    // Send Money
    void sendMoney(string receiver, double amount) {
        if (amount <= balance && amount > 0) {
            balance -= amount;
            cout << "\nMoney Sent Successfully to " << receiver << endl;
        } else {
            cout << "\nTransaction Failed!\n";
        }
    }
    // Change PIN
    void changePIN(int oldPin, int newPin) {
        if (oldPin == pin) {
            pin = newPin;
            cout << "\nPIN Changed Successfully\n";
        } else {
            cout << "\nIncorrect Old PIN!\n";
        }
    }
    // Mini Statement
    void miniStatement() {
        cout << "\nMINI STATEMENT";
        cout << "\nMobile Number:" << mobileNumber;
        cout << "\nAvailable Balance:Rs " << balance << endl;
    }
};
int main() {
    // Create JazzCash account
    JazzCash user("03001234567", 1234, 10000);
    string mob, receiver;
    int pin, choice;
    double amount;
    cout << "JAZZCASH APP\n";
    cout << "Enter Mobile Number: ";
    cin >> mob;
    cout << "Enter PIN: ";
    cin >> pin;
    if (user.login(mob, pin)) {
        do {
            cout << "\n MENU \n";
            cout << "1. Check Balance\n";
            cout << "2. Deposit Money\n";
            cout << "3. Withdraw Money\n";
            cout << "4. Send Money\n";
            cout << "5. Change PIN\n";
            cout << "6. Mini Statement\n";
            cout << "0. Exit\n";
            cout << "Enter your choice:";
            cin >> choice;
            switch (choice) {
            case 1:
                user.checkBalance();
                break;
            case 2:
                cout << "Enter deposit amount: ";
                cin >> amount;
                user.depositMoney(amount);
                break;
            case 3:
                cout << "Enter withdrawal amount: ";
                cin >> amount;
                user.withdrawMoney(amount);
                break;
            case 4:
                cout << "Enter receiver mobile number: ";
                cin >> receiver;
                cout << "Enter amount: ";
                cin >> amount;
                user.sendMoney(receiver, amount);
                break;
            case 5:
                int oldPin, newPin;
                cout << "Enter old PIN:";
                cin >> oldPin;
                cout << "Enter new PIN:";
                cin >> newPin;
                user.changePIN(oldPin, newPin);
                break;
            case 6:
                user.miniStatement();
                break;
            case 0:
                cout << "\nThank you for using JazzCash\n";
                break;
            default:
                cout << "\nInvalid Choice\n";
            }
        } while (choice != 0);
    }
    return 0;
}

