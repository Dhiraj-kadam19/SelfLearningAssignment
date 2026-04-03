#include <iostream>
using namespace std;
int main(){
// The reference varible is nothing but a new name is given to existing variable.
//Reference variable assigm to that variable that should be exist.
//due to referance varible we store the same address of existig varible and its value also.
//no memory is allocated to referance varible its just give a alternate name that varible
// syntax datatype &newname =varible name;
//example int &a=i:
int i;
char ch;
float f;
double d;
long l;
int &r=i;
char &c=ch;
float &fl=f;
double &d1=d;
long &l1=l;
i=2;
ch='v';
f=2.02f;
d=25.02;
l=123456;

cout<<"Enter the value of r is "<<r<<endl;
cout<<"Enter the value of c is "<<c<<endl;
cout<<"Enter the value of f1 is "<<fl<<endl;
cout<<"Enter the value of d1 is "<<d1<<endl;
cout<<"Enter the value of l1 is "<<l1<<endl;












}