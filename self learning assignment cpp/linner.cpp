#include <iostream>
using namespace std;

class Outer {
private:
    int outerData;

public:
    // Constructor of Outer class
    Outer(int x) {
        outerData = x;
    }

    // Inner Class
    class Inner {
    private:
        int innerData;

    public:
        // Constructor of Inner class
        Inner(int y) {
            innerData = y;
        }

        void displayInner() {
            cout << "Inner Data: " << innerData << endl;
        }
    };

    void displayOuter() {
        cout << "Outer Data: " << outerData << endl;
    }
};

int main() {
    // Create Outer object
    Outer obj1(10);
    obj1.displayOuter();

    // Create Inner object using Outer class scope
    Outer::Inner obj2(20);
    obj2.displayInner();

    return 0;
}