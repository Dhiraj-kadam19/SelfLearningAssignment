#include<iostream>
using namespace std;

void swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x = 10, y = 20;

    cout << "before swap " << x << " " << y << endl;

    swap(x, y);

    cout << "after swap " << x << " " << y << endl;

    return 0;
}