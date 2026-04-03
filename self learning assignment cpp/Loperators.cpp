#include<iostream>
using namespace std;
int main()
{
    
    int a =6,b=10;
    cout<<"enter a number a is"<<endl;
    cout<<"enter a number b is"<<endl;
    //logic
    cout<<"logic"<<endl;
    cout<<"(a<b)&&(b>0):"<<((a<b)&&(b>0))<<endl;
    cout<<"(a<b||b>0):"<<((a<b||b>0))<<endl;
    cout<<"!(a==b):"<<!(a==b)<<endl;

    //unary
     cout<<"\nunary"<<endl;
    int c = 5;
    cout<<"c = "<<c<<endl;
    cout << "++c = "<<++c<<endl;  
    cout<<"c++ = "<<c++<<endl;  
    cout<<"--c = "<<--c<<endl;  
    cout<<"c-- = "<<c--<<endl;


    // Ternary 
    cout<<"\nTernary Operator:"<<endl;
    int max = (a > b) ? a : b;
    cout<<"Maximum number is: "<<max<<endl;


    // Assignment 
    cout<<"Assignment Operators:"<<endl;
    int x = a;       
    x += b;          
    cout<<"x += b : "<<x<<endl;
     x -= b;          
    cout<<"x -= b : "<<x<<endl;
    x *= b;          
    cout<<"x *= b : "<<x<<endl;
    x /= b;          
    cout<< "x /= b : "<<x<<endl;


}
