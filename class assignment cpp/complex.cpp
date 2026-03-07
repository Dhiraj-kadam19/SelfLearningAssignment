 #include<iostream>
 using namespace std;
 class complex{

   private:
      int real ,img;

   public:
      void accept(){

        cout<<"\n accept real and img value\n ";
        cin>>real>>img<<endl;
    }
      void dispaly(){
   cout<<"dispay real and imag number"<<real<<"+"<<img<<"i"<<endl;

 }
void setReal(int r){
      real= r;
}

int getReal(){
cout<<"GET the real";
      return real;
}
void setImg(int m)
 {
cout<<"set value of image"<<endl;
 img=m;

 }
 
 };

 int main()
 {    
    complex m1;
    cout<<""<<sizeof(m1); 
    c1.accept();
    c1.dispaly();
    c1.setReal(2);
    c1.dispaly();  
   

    return 0;
 }




 
