
//static variable problem=========
//===========================
#include<iostream>
 using namespace std;
 void show();
 
 int main()
 {
   show();
   show();
   show();
    show();
     show();
     

return 0;
 }
 void show()
 {
    static int x=5;
   cout<<x<<endl;
   x++;
 }