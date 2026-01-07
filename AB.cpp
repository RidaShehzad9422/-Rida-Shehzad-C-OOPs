#include <iostream>
#include<conio.h>
#include <fstream>
#include<string>
using namespace std;
class ATM {
    string  accNo, pin;
    double balance;
public:
    bool login() {
        ofstream file("accounts.txt");
        string a, p;
        double b;
        cout << "Enter Account Number: ";
        cin >> accNo;
        cout << "Enter PIN: ";
        cin >> pin;
        if (a==accNo&&p== pin) {
                balance = b;
                return true;
            }
        }
    void checkBalance() {
        cout << " Enter Current Balance: "<< endl;
		cin>> balance;
    }
    void deposit() {
        double amount;
        cout << "Enter amount to deposit: ";
        cin >> amount;
        balance += amount;
        saveTransaction("Deposit", amount);
        updateFile();
        cout << "Deposit Successful\n";
    }
    void withdraw() {
        double amount;
        cout << "Enter amount to withdraw: ";
        cin >> amount;
        if (amount > balance) {
            cout << "Insufficient Balance\n";
        } else {
            balance -= amount;
            saveTransaction("Withdraw", amount);
            updateFile();
            cout << "Withdrawal Successful\n";
        }
    }
    void changePin() {
        string newPin;
        cout << "Enter new PIN: ";
        cin >> newPin;
        pin = newPin;
        updateFile();
        cout << "PIN changed successfully!\n";
    }
    void saveTransaction(string type, double amount) {
        ofstream file("transactions.txt",ios::app);
        file << accNo << " " << type << " " << amount << endl;
        file.close();
    }
    void updateFile() {
        ifstream in("accounts.txt");
        ofstream out("temp.txt");
        string a, p;
        double b;
        while (in >> a >> p >> b) {
            if (a==accNo)
                out<<accNo<< " "<<pin<< " "<<balance<<endl;
            else
                out<<a<< " " <<p<< " " <<b<<endl;
        }
        in.close();
        out.close();
        remove("accounts.txt");
        rename("temp.txt", "accounts.txt");
    }
    void menu() {
        int choice;
        do {
            cout << "\n ATM MENU \n";
            cout << "1.  checkBalance \n";
            cout << "2. Deposit\n";
            cout << "3. Withdraw\n";
            cout<<"4.change Pin\n";
            cout << "0. Exit\n";
            cout << "Enter choice: ";
            cin >> choice;
            switch (choice) {
                case 1: checkBalance(); 
				break;
                case 2: deposit();
				 break;
                case 3: withdraw(); 
				break;
				case 4: changePin();
				break;
                case 0: cout << "Thank you\n";
				 break;
                default: cout << "Invalid Choice\n";
            }
        } while (choice!= 0);
    }
};
int main() {
    ATM atm;
    cout << "SMART ATM SYSTEM\n";
    if (atm.login()) {
        cout << "Login Successful\n";
        atm.menu();
    } else {
        cout << "Invalid Account or PIN\n";
    }
    getch();
    return 0;
}
