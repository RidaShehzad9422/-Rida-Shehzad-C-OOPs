#include <iostream>
using namespace std;

int main() {
    int rows = 5; 

    for (int i = rows; i >= 1; i--) {
       
        for (int s = 0; s < rows - i; s++) {
            cout << "  "; 
        }

        for (char ch = 'A'; ch < 'A' + i; ch++) {
            cout << ch << " ";
        }
        cout << endl; 
    }

    return 0;
}





