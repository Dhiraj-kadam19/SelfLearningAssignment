/*Q.
WAP to print Reverse Alphabet Pattern

A B C D E
A B C D
A B C
A B
A                            */


#include<iostream>
using namespace std;
int main(){
  int n=5;
for(int i=1;i<=5;i++){
     for(int j=1;j<=i;j++){
        cout<<char('A'+j-1)<<endl;
     }
cout<<"\n";
}
return 0;
}