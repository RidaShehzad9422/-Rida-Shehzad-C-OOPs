#include <iostream>
using namespace std;
class Student {
private:
    string name;
    int rollNo;
    float marks;
public:
    Student() {
        name = "Unknown";
        rollNo = 0;
        marks = 0;
        cout << "Default Constructor called." << endl;
    }
    Student(string n, int r, float m) {
        name = n;
        rollNo = r;
        marks = m;
        cout << "Parameterized Constructor" << endl;
    }
    Student(const Student &s) {
        name = s.name;
        rollNo = s.rollNo;
        marks = s.marks;
        cout << "Copy Constructor" << endl;
    }
    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Marks: " << marks << endl << endl;
    }
    ~Student() {
        cout << "Destructor called " << name << endl;
    }
};
int main() {
    cout << "Creating object s1 using Default Constructor:" << endl;
    Student s1;
    s1.display();
    cout << "Creating object s2 using Parameterized Constructor:" << endl;
    Student s2("Rida", 30, 95.5);
    s2.display();
    cout << "Creating object s3 using Copy Constructor (copy of s2):" << endl;
    Student s3(s2);
    s3.display();
    cout<<"Rida"
    return 0;
}

