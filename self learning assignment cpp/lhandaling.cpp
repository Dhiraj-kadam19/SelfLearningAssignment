#include <iostream>
using namespace std;

class Test {
    int *arr;
    int size;

public:
    // Constructor
    Test(int s) {
        size = s;

        if (size <= 0) {
            throw "Invalid size! Size must be > 0";
        }

        arr = new int[size];
        cout << "Memory allocated successfully\n";
    }

    // Function to take input
    void input() {
        cout << "Enter " << size << " elements:\n";
        for (int i = 0; i < size; i++) {
            cin >> arr[i];
        }
    }

    // Function to display
    void display() {
        cout << "Array elements: ";
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    // Destructor (proper memory management)
    ~Test() {
        delete[] arr;
        cout << "Memory released successfully\n";
    }
};

int main() {
    try {
        int n;
        cout << "Enter size of array: ";
        cin >> n;

        Test t(n);   // may throw exception

        t.input();
        t.display();
    }
    catch (const char *msg) {
        cout << "Exception Caught: " << msg << endl;
    }

    cout << "Program continues safely..." << endl;

    return 0;
}