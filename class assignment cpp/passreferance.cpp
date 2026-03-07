
#include<iostream>
using namespace std;

int swap(int& ,int&);

int main(){

    int a,b;
    cout<<"print the value of a and b"<<endl;
    cin>>a>>b;
    cout<<"before swap  a and b.="<<a<<"="<<b<<endl;
swap(a,b);
cout<<"after swaping the value"<<a<<b<<endl;
return 0;

}
int  swap(int &x,int &y){
     int x,y;
    int  temp;
    temp=x;
    x=y;
    y=temp;

    cout<<"swap the value of x and y"<<x<<y<<endl;
}





