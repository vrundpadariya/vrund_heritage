#include <iostream>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    void readPersonInfo() {
       cout << "Enter name: ";
       getline(cin, name);

        cout << "Enter age: ";
        cin >> age;
    }

    void printPersonInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Employee {
protected:
    string empId;
   int  salary;

public:
     readEmployeeInfo() {
        cout << "Enter employee ID: ";
        cin >> empId;
        
        cout << "Enter salary: ";
        cin >> salary;
    }

     printEmployeeInfo() {
        cout << "Employee ID: " << empId << endl;
        cout << "Salary: $" << salary << endl;
    }
};

class EmployeeDetails : public Person, public Employee {
public:
     readDetails() {
        readPersonInfo();
        readEmployeeInfo();
    }

     printDetails() {
        printPersonInfo();
        printEmployeeInfo();
    }
};

int main() {
    EmployeeDetails emp;

    cout << "Enter employee details:" << endl;
    emp.readDetails();

    cout << "\nEmployee Information:" << endl;
    emp.printDetails();

    return 0;
}

