#include<iostream>
using namespace std;
class balance{
  public:
    int acc_no,balance ;
public:
  void accept(){
   cout<<"accept the value of accno and balance"<<endl;
  cin>>acc_no>>balance;
  } 
  
  void display(){
   cout<<"display balance data"<<acc_no<<balance<<endl;
  }

void deposit(int a){
int acc_no ;
 int amount;
    cout<<"enter avcc no";
cin>>acc_no;

if (amount>0){
 cout<<"enter amount of deposite"<<endl;
  cin>>amount;
}
else {
cout<<" correct output "<<endl;

}
  
}
};


int main(){
balance b1;
b1.accept();
b1.deposit(500);
b1.display();
return 0;

}