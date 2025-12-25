#include <iostream>
using namespace std;
class Company {
protected:
    string companyName;
public:
    void getCompanyData() {
        cout << "Enter Company Name: ";
        cin >> companyName;
    }
    void showCompanyData() {
        cout << "\nCompany Name: " << companyName;
    }
};
class Manager : public Company {
protected:
    int managerId;
    string managerName;

public:
    void getManagerData() {
        cout << "Enter Manager ID: ";
        cin >> managerId;
        cout << "Enter Manager Name: ";
        cin >> managerName;
    }
    void showManagerData() {
        cout << "\nManager ID: " << managerId;
        cout << "\nManager Name: " << managerName;
    }
};
class Employee : public Manager {
private:
    int employeeId;
    string employeeName;
public:
    void getEmployeeData() {
        cout << "Enter Employee ID: ";
        cin >> employeeId;
        cout << "Enter Employee Name: ";
        cin >> employeeName;
    }
    void showEmployeeData() {
        showCompanyData();
        showManagerData();
        cout << "\nEmployee ID: " << employeeId;
        cout << "\nEmployee Name: " << employeeName;
    }
};
int main() {
    Employee emp;

    emp.getCompanyData();
    emp.getManagerData();
    emp.getEmployeeData();

    cout << "\n--- Employee Details ---";
    emp.showEmployeeData();

    return 0;
}

