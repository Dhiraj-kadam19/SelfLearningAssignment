#include <iostream>
using namespace std;

class StringDemo {
    char *str;

public:
    // Constructor
    StringDemo(const char *s) {
        cout << "Constructor called..." << endl;

        int len = 0;
        while (s[len] != '\0') len++;

        str = new char[len + 1];

        for (int i = 0; i < len; i++) {
            str[i] = s[i];
        }
        str[len] = '\0';
    }

    // Display function
    void display() {
        cout << "String: " << str << endl;
    }

    // Destructor
    ~StringDemo() {
        cout << "Destructor called... Memory released" << endl;
        delete[] str;
    }
};

int main() {
    StringDemo obj1("Hello");
    obj1.display();

    {
        StringDemo obj2("World");
        obj2.display();
    } // obj2 destroyed here

    cout << "Back to main function" << endl;

    return 0;
}