#include <iostream>
using namespace std;

// Base Class
class Person {
public:
    string name;

    Person() {
        name = "Unknown";
    }

    void display() {
        cout << "Name: " << name << endl;
    }
};

// Derived Class 1
class Teacher : virtual public Person {
public:
    void teach() {
        cout << "Teaching students..." << endl;
    }
};

// Derived Class 2
class Student : virtual public Person {
public:
    void study() {
        cout << "Studying..." << endl;
    }
};

// Derived Class (Diamond Shape)
class TeachingAssistant : public Teacher, public Student {
public:
    void show() {
        display();  // No ambiguity due to virtual inheritance
        teach();
        study();
    }
};

int main() {
    TeachingAssistant ta;

    ta.name = "Sakshi";

    ta.show();

    return 0;
}