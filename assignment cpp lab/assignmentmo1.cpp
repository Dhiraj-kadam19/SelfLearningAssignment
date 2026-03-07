#include<iostream>
#include<string>
using namespace std;
class Student
{
  private:
    int rollno;
    int totalmarks;
    string dob;
  public:
    Student(int r,int m,string d)
    {
      rollno=r;
      totalmarks=m;
      dob=d;
      
    }
    void display()
    {
      cout<<"Roll number: "<<rollno<<endl;
      cout<<"Total Marks: "<<totalmarks<<endl;
      cout<<"Date of Birth: "<<dob<<endl;
    }
};
int main()
{
  Student students[10] = {
    {101, 50, "Rohan"},
    {102, 60, "OM"},
    {103, 40, "Sohan"},
    {104, 90, "Rohit"},
    {105, 10, "Yohan"},
    {106, 80, "John"},
    {107, 10, "Doe"},
    {108, 30, "Toy"},
    {109, 60, "Roy"},
    {110, 20, "Boy"}
  };
  for(int i=0;i<10;i++)
  {
    students[i].display();
    cout<<" ";
  }
return 0;
}