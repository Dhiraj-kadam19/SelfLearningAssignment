#include <iostream>
using namespace std;

// ----------- DATE CLASS -----------
class Date {
    int d, m, y;

public:
    void read() {
        cout << "Enter date (dd mm yyyy): ";
        cin >> d >> m >> y;
    }

    void print() {
        cout << d << "/" << m << "/" << y << endl;
    }

    // Add days
    Date operator+(int days) {
        Date temp = *this;
        temp.d += days;

        // Simple logic (not handling leap year/month days properly)
        while (temp.d > 30) {
            temp.d -= 30;
            temp.m++;
        }
        while (temp.m > 12) {
            temp.m -= 12;
            temp.y++;
        }
        return temp;
    }

    // Subtract days
    Date operator-(int days) {
        Date temp = *this;
        temp.d -= days;

        while (temp.d <= 0) {
            temp.d += 30;
            temp.m--;
        }
        while (temp.m <= 0) {
            temp.m += 12;
            temp.y--;
        }
        return temp;
    }
};

// ----------- TIME CLASS -----------
class Time {
    int h, m, s;

public:
    void read() {
        cout << "Enter time (hh mm ss): ";
        cin >> h >> m >> s;
    }

    void print() {
        cout << h << ":" << m << ":" << s << endl;
    }

    // Add seconds
    Time operator+(int sec) {
        Time t = *this;
        t.s += sec;

        while (t.s >= 60) {
            t.s -= 60;
            t.m++;
        }
        while (t.m >= 60) {
            t.m -= 60;
            t.h++;
        }
        while (t.h >= 24) {
            t.h -= 24;
        }
        return t;
    }

    // Subtract seconds
    Time operator-(int sec) {
        Time t = *this;
        t.s -= sec;

        while (t.s < 0) {
            t.s += 60;
            t.m--;
        }
        while (t.m < 0) {
            t.m += 60;
            t.h--;
        }
        while (t.h < 0) {
            t.h += 24;
        }
        return t;
    }
};

// ----------- MAIN FUNCTION -----------
int main() {
    Date d1, d2;
    Time t1, t2;

    d1.read();
    cout << "Original Date: ";
    d1.print();

    d2 = d1 + 5;  // Add 5 days
    cout << "After Adding 5 days: ";
    d2.print();

    d2 = d1 - 3;  // Subtract 3 days
    cout << "After Subtracting 3 days: ";
    d2.print();

    cout << endl;

    t1.read();
    cout << "Original Time: ";
    t1.print();

    t2 = t1 + 120; // Add 120 seconds
    cout << "After Adding 120 seconds: ";
    t2.print();

    t2 = t1 - 90; // Subtract 90 seconds
    cout << "After Subtracting 90 seconds: ";
    t2.print();

    return 0;
}