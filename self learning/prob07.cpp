
//pass by refance it means change the value

#include<iostream>
using namespace std;

void changethevalue(int &x){

     x=50;
}
int main(){
int a =100;

 cout<<"before the value of a"<<a<<endl;

changethevalue(a);
cout<<"after change the value of a="<<a<<endl;

    return 0;

}