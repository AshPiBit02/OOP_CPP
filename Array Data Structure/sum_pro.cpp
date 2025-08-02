#include<iostream>
using namespace std;
void sum(int arr[],int size)
{
    int sum=0;
    for(int i=0;i<size;i++)
    {
        sum+=arr[i];
    }
    cout<<"The sum is "<<sum<<endl;

}
void product(int arr[],int size)
{
     int pro=1;
    for(int i=0;i<size;i++)
    {
        pro*=arr[i];
    }
    cout<<"The product is "<<pro<<endl;
}
int main()
{
    int arr[]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(int);
    sum(arr,size);
    product(arr,size);
    return 0;
}