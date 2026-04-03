
#include<iostream>
using namespace std;
int swap(int,int);
int main()
{
	int a,b,z; //actual argument
	cout<<"enter value of a and b\n";
	cin>>a>>b; //10//20
	cout<<"before swapping value of a and b\n";
	cout<<"value of a = "<<a<<"  "<<"value of b = "<<b<<endl;  //10/20
	z=swap(a,b);//function calling
	cout<<"value of z is  "<<z<<endl;
	cout<<"after calling swap () value of a and b\n";
	cout<<"value of a = "<<a<<"  "<<"value of b = "<<b<<endl;
}
int swap(int p,int q)
{
	int x=100,y=200;  //formal argument
	int temp;
	temp=p;
	p=q;
	q=temp;
	cout<<"after swapping value of p and q\n";
	cout<<"value of p = "<<p<<"  "<<"value of q = "<<q<<endl;
	return x,y,1,2,5,6;
}
//if pass by value we use the there is no change in actual argument and formal argument
