#include <iostream>
using namespace std;

// Abstract Class
class Shape {
public:
    // Pure Virtual Function
    virtual void area() = 0;

    // Normal function
    void display() {
        cout << "This is a Shape" << endl;
    }
};

// Derived Class 1
class Rectangle : public Shape {
    int length, width;

public:
    Rectangle(int l, int w) {
        length = l;
        width = w;
    }

    void area() {
        cout << "Area of Rectangle: " << length * width << endl;
    }
};

// Derived Class 2
class Circle : public Shape {
    float radius;

public:
    Circle(float r) {
        radius = r;
    }

    void area() {
        cout << "Area of Circle: " << 3.14 * radius * radius << endl;
    }
};

int main() {
    Shape *s;  // Abstract class pointer

    Rectangle r(5, 4);
    Circle c(3);

    s = &r;
    s->display();
    s->area();

    s = &c;
    s->display();
    s->area();

    return 0;
}