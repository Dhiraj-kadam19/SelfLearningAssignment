#include <iostream>
using namespace std;

// Abstract Base Class
class Printer {
protected:
    string brand;

public:
    Printer(string b) {
        brand = b;
    }

    // Pure Virtual Function
    virtual void print() = 0;

    // Virtual Function
    virtual void show() {
        cout << "Brand: " << brand << endl;
    }

    // Virtual Destructor
    virtual ~Printer() {}
};

// Derived Class 1
class InkjetPrinter : public Printer {
public:
    InkjetPrinter(string b) : Printer(b) {}

    void print() {
        cout << "Printing using Inkjet Printer" << endl;
    }
};

// Derived Class 2
class LaserPrinter : public Printer {
public:
    LaserPrinter(string b) : Printer(b) {}

    void print() {
        cout << "Printing using Laser Printer" << endl;
    }
};

// Derived Class 3
class DotMatrixPrinter : public Printer {
public:
    DotMatrixPrinter(string b) : Printer(b) {}

    void print() {
        cout << "Printing using Dot Matrix Printer" << endl;
    }
};

int main() {
    Printer *p;  // Base class pointer

    InkjetPrinter i("HP");
    LaserPrinter l("Canon");
    DotMatrixPrinter d("Epson");

    cout << "--- Inkjet ---" << endl;
    p = &i;
    p->show();
    p->print();

    cout << "\n--- Laser ---" << endl;
    p = &l;
    p->show();
    p->print();

    cout << "\n--- Dot Matrix ---" << endl;
    p = &d;
    p->show();
    p->print();

    return 0;
}