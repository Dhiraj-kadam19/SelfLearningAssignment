#include<iostream>
using namespace std;
int main(){
int arr[5]={12,33,44,55,6};
cout<<"print the arry value "<<endl;
for(int i=1;i<=5;i++){
if(arr[i]%2==0){
    cout<<"even number"<<arr[i]<<endl;

}else{
    cout<<"odd number"<<arr[i]<<endl;
}
    
}
return 0;
}
