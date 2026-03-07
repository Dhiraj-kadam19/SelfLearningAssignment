#include<iostream>
using namespace std;
int main(){
int arr[5]={12,23,44,55,66};
int max=arr[0];
for(int i=1;i<=5;i++){
    
    if(arr[i]<max){
        max=arr[i] ;
    }
cout<<"print largest number"<<arr[i]<<endl;


}

return 0;
}