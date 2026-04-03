#include <iostream>
using namespace std;

void changeValue(int *p);

int main()
{
    int num = 10;

    cout << "Before Function Call: " << num << endl;

    
    changeValue(&num);

    cout << "After Function Call: " << num << endl;

    return 0;
}


void changeValue(int *p)
{
    *p = 50;   
}