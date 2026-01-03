#include <iostream>
using namespace std;

class Count {
    int value;

public:
    // Default constructor
    Count() {
        value = 5;
    }

    // Prefix increment
    Count operator ++ () {
        Count temp;
        temp.value = ++value;
        return temp;
    }

    // Postfix increment
    Count operator ++ (int) {
        Count temp;
        temp.value = value++;
        return temp;
    }

    void display() {
        cout << "Value: " << value << endl;
    }
};

int main() {
    Count c1, result;

    cout << "Prefix Increment:" << endl;
    result = ++c1;
    result.display();

    cout << "Postfix Increment:" << endl;
    result = c1++;
    result.display();

    cout << "Name: Rida Shehzad" << endl;
    cout << "Roll No: 030" << endl;

    return 0;
}

