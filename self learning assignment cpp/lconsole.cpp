#include <iostream>
using namespace std;

int main() {
    int rollNo;
    float marks;
    char grade;
    string name;

    // Console Input
    cout << "Enter Roll Number: ";
    cin >> rollNo;

    cout << "Enter Name: ";
    cin >> name;

    cout << "Enter Marks: ";
    cin >> marks;

    cout << "Enter Grade: ";
    cin >> grade;

    // Console Output
    cout << "\n--- Student Details ---" << endl;
    cout << "Roll Number: " << rollNo << endl;
    cout << "Name: " << name << endl;
    cout << "Marks: " << marks << endl;
    cout << "Grade: " << grade << endl;

    return 0;
}