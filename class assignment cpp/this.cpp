#include<iostream>
using namespace std;

class complex {
  int real, img;
public:
complex(int real,int img ){
    
    this->real=real;//this function not required 
    this->img=img;

}
void display(){
    
    cout<<"print the value real and img"<<this->real<<"+"<<this->img<<"i"<<endl;
}


};

int main(){

complex c1(1,2);
c1.display();
complex c2(12,2);
c2.display();
return 0;
}