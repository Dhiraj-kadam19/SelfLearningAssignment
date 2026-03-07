#include<iostream>
using namespace std;
class Exam{

 int a, b;
 public:

 void show(int a,int b){
   
 this->a=a;
 (*this).b=b;

 }
void display(){

    cout<<"print output "<<a<<b<<endl;
}


};


int main(){
  Exam e1;
  e1.show(10,12);
    e1.display();

    return 0;
}