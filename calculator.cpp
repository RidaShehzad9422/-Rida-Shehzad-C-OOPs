	class Calculator {
private:
    float num1, num2;

public:
    // Constructor
    Calculator(float n1, float n2) {
        num1 = n1;
        num2 = n2;
    }

    float add() {
        return num1 + num2;
    }

    float subtract() {
        return num1 - num2;
    }

    float multiply() {
        return num1 * num2;
    }

    float divide() {
        if (num2 == 0)
            return 0;   // simple handling
        return num1 / num2;
    }
};

int main() {

    float a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    Calculator c(a, b);

    cout << "Addition: " << c.add() << endl;
    cout << "Subtraction: " << c.subtract() << endl;
    cout << "Multiplication: " << c.multiply() << endl;
    cout << "Division: " << c.divide() << endl;

    return 0;
}

