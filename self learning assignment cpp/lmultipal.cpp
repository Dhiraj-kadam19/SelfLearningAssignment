#include <iostream>
using namespace std;

// Base Class 1
class Machine {
protected:
    string brand;

public:
    Machine(string b) {
        brand = b;
    }
};

// Base Class 2
class Features {
protected:
    bool color;
    bool duplex;

public:
    Features(bool c, bool d) {
        color = c;
        duplex = d;
    }
};

// Derived Class (Multiple Inheritance)
class Printer : public Machine, public Features {
private:
    int speed; // pages per minute

public:
    Printer(string b, bool c, bool d, int s)
        : Machine(b), Features(c, d) {
        speed = s;
    }

    void display() {
        cout << "Brand: " << brand << endl;
        cout << "Color Printing: " << (color ? "Yes" : "No") << endl;
        cout << "Duplex: " << (duplex ? "Yes" : "No") << endl;
        cout << "Speed: " << speed << " ppm" << endl;
    }

    // Friend Function
    friend void showDetails(Printer p);

    // Friend Class
    friend class Technician;
};

// Friend Function Definition
void showDetails(Printer p) {
    cout << "\n[Friend Function Access]" << endl;
    cout << "Speed: " << p.speed << " ppm" << endl;
}

// Friend Class
class Technician {
public:
    void service(Printer p) {
        cout << "\n[Technician Access]" << endl;
        cout << "Brand: " << p.brand << endl;
        cout << "Speed: " << p.speed << " ppm" << endl;
    }
};

int main() {
    Printer p1("HP", true, true, 25);

    cout << "--- Printer Details ---" << endl;
    p1.display();

    // Friend Function Call
    showDetails(p1);

    // Friend Class Access
    Technician t;
    t.service(p1);

    return 0;
}