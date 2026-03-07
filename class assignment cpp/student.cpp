
//memory allocation of array of  object
#include<iostream>
using namespace std;
class student{
int rollno;
char name[20];
public:
void accept();
void display();

};
  void student::accept(){
    cout<<"accept the value of rollno \n:"<<endl;
    cin>>rollno;
    cout<<"accept the value of name:";
    cin>>name;
}
void student::display(){
    cout<<"dispaly the number \n: "<<endl;
    cout<<rollno<<"=="<<name;

}
int main(){
 int n, i;
cout<<"inter student number\n: " ;
cin>>n;
student *ptr=new student[n];
for(i=0;i<n;i++){
   ptr[i].accept();
}
for(i=0;i<n;i++){

    ptr[i].display();
}

}