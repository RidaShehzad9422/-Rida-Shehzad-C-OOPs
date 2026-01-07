#include <iostream>
#include <conio.h>
using namespace std;

class PasswordManager {
private:
    string presetPassword = "admin123";     // ? PRESET PASSWORD
    string defaultPassword = "12345";       // ? DEFAULT PASSWORD (auto-used if user enters nothing)
    string inputPass;

public:
    void inputPassword() {
        char ch;
        inputPass = "";
        cout << "Enter Password (Press Enter for default): ";

        while (true) {
            ch = _getch();

            if (ch == 13) { // Enter key
                break;
            }
            else if (ch == 8) { // Backspace
                if (!inputPass.empty()){
                    cout << "\b \b";
                }
            }
            else {
                inputPass += ch;
                cout << '*';
            }
        }
        cout << endl;

        // ? If user enters nothing ? use default password
        if (inputPass.empty()) {
            inputPass = defaultPassword;
        }
    }

    void checkPassword() {
        if (inputPass == presetPassword) {
            cout << "Access Granted!" << endl;
        } else {
            cout << "Incorrect Password!" << endl;
        }
    }

    void showEnteredPassword() {
        cout << "Entered/Default Password was: " << inputPass << endl;
    }
};

int main() {
    PasswordManager pm;

    pm.inputPassword();      // Take password with masking
    pm.showEnteredPassword(); // Show what password was used
    pm.checkPassword();      // Compare with preset password

    return 0;
}





