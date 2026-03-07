
#include<iostream>
using namespace std;
// Q.
// Write overloaded functions to find area of:
// -Square
// -Rectangle

// Example

// area(int side)
// area(int length, int breadth)


int area(int side){
    return side*side;

}
int area(int length,int breadth){
    return length*breadth;
}


int main(){

cout<<"Square of num "<<area(4)<<endl;
cout<<"area of rectangle"<<area(4,6)<<endl;

    return 0;
}
