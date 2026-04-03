#include<iostream>
using namespace std;
int main()
{
    int arr[5] ={1,5,7,3,9};
    int size =5;
    int largest = arr[0];
    for(int i = 1;i<size;i++)
    {
        if(arr[i] >largest)
        {
            largest =arr[i];
        }
    }
    cout<<"largest element is:"<<largest<<endl;
    return 0;
}