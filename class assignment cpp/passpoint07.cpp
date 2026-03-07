#include<iostream>
using namespace std;


void increment(int *p){
 *p=*p + 1;
}


int main(){

int a=5;
    cout<<"before pass the pointer value "<<a<<"  "<<endl;
increment(&a);
cout<<"after pass the pointer value"<<"  "<<endl;
return 0;
}
