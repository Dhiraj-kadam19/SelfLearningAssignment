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
    virtual void printType() = 0;

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

    void printType() {
        cout << "Type: Inkjet Printer" << endl;
    }
};

// Derived Class 2
class LaserPrinter : public Printer {
public:
    LaserPrinter(string b) : Printer(b) {}

    void printType() {
        cout << "Type: Laser Printer" << endl;
    }
};

// Derived Class 3
class DotMatrixPrinter : public Printer {
public:
    DotMatrixPrinter(string b) : Printer(b) {}

    void printType() {
        cout << "Type: Dot Matrix Printer" << endl;
    }
};

int main() {
    Printer *p;

    InkjetPrinter i("HP");
    LaserPrinter l("Canon");
    DotMatrixPrinter d("Epson");

    // Runtime Polymorphism
    p = &i;
    p->show();
    p->printType();

    cout << endl;

    p = &l;
    p->show();
    p->printType();

    cout << endl;

    p = &d;
    p->show();
    p->printType();

    return 0;
}