#include <iostream>
using namespace std;

// Custom Exception Class
class MyException {
    string message;

public:
    MyException(string msg) {
        message = msg;
    }

    void showError() {
        cout << "Exception: " << message << endl;
    }
};

int main() {
    try {
        int age;
        cout << "Enter your age: ";
        cin >> age;

        if (age < 18) {
            throw MyException("You are not eligible (age must be >= 18)");
        }

        cout << "Access granted!" << endl;
    }
    catch (MyException e) {
        e.showError();
    }

    cout << "Program continues..." << endl;

    return 0;
}