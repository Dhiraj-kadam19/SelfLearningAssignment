#include <iostream>
using namespace std;

// Base Class 1
class Device {
protected:
    string brand;

public:
    Device(string b) {
        brand = b;
    }
};

// Base Class 2
class Connectivity {
protected:
    string type;

public:
    Connectivity(string t) {
        type = t;
    }
};

// Derived Class (Multiple Inheritance)
class Printer : public Device, public Connectivity {
private:
    int speed;

public:
    Printer(string b, string t, int s) : Device(b), Connectivity(t) {
        speed = s;
    }

    void display() {
        cout << "Brand: " << brand << endl;
        cout << "Connectivity: " << type << endl;
        cout << "Speed: " << speed << " ppm" << endl;
    }

    // Friend Function
    friend void showSpeed(Printer p);

    // Friend Class
    friend class ServiceCenter;
};

// Friend Function Definition
void showSpeed(Printer p) {
    cout << "Printing Speed (via friend function): " << p.speed << " ppm" << endl;
}

// Friend Class
class ServiceCenter {
public:
    void repair(Printer p) {
        cout << "Service Center Accessing Private Data..." << endl;
        cout << "Brand: " << p.brand << endl;
        cout << "Speed: " << p.speed << " ppm" << endl;
    }
};

int main() {
    Printer p1("HP", "WiFi", 20);

    cout << "--- Printer Details ---" << endl;
    p1.display();

    cout << "\n--- Friend Function ---" << endl;
    showSpeed(p1);

    cout << "\n--- Friend Class ---" << endl;
    ServiceCenter sc;
    sc.repair(p1);

    return 0;
}