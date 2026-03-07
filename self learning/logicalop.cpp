#include<iostream> 
using namespace  std;

int main(){
int a=5;
int b=10;

cout<<"logical oprater impletatio\n";

if(a<5 && b<10){

    cout<<" && logical oprator when both condion is ture they return\n  "<<endl;
}

if( a<10 || b<5){
   
    cout<< "  || logical when one condition is true the return\n"<<endl;


}
if (!(a>5)){

    cout<<" != or operator when its false they true and viceversa\n"<<endl;
}

    return 0;
}
