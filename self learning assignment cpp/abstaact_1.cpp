#include <iostream>
using namespace std;

// Abstract Class
class Employee {
protected:
    string name;

public:
    Employee(string n) {
        name = n;
    }

    // Pure Virtual Function
    virtual void calculateSalary() = 0;

    // Normal Function
    void showName() {
        cout << "Employee Name: " << name << endl;
    }
};

// Derived Class 1
class Manager : public Employee {
    int salary;

public:
    Manager(string n, int s) : Employee(n) {
        salary = s;
    }

    void calculateSalary() {
        cout << "Manager Salary: " << salary << endl;
    }
};

// Derived Class 2
class Developer : public Employee {
    int hours, rate;

public:
    Developer(string n, int h, int r) : Employee(n) {
        hours = h;
        rate = r;
    }

    void calculateSalary() {
        cout << "Developer Salary: " << hours * rate << endl;
    }
};

int main() {
    Employee *e;   // Abstract class pointer

    Manager m("Sakshi", 50000);
    Developer d("Rahul", 100, 500);

    e = &m;
    e->showName();
    e->calculateSalary();

    cout << endl;

    e = &d;
    e->showName();
    e->calculateSalary();

    return 0;
}