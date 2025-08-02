#include<iostream>
using namespace std;
void smallest(int arr[],int size)
{
    int smal=arr[0];
    for(int i=0;i<size;i++)
    {
        if(arr[i]<smal)
        {
            smal=arr[i];
        }
    }
    cout<<"Smallest integer in the arry is "<<smal<<endl;
}
void largest(int arr[],int size)
{
    int lar=arr[0];
    for(int i=0;i<size;i++)
    {
        if(arr[i]>lar)
        {
            lar=arr[i];
        }
    }
    cout<<"Largest integer in the array is "<<lar<<endl;
}
int main()
{
    int arr[]={5,-15,1,8,0,78};
    int size=sizeof(arr)/sizeof(int);
    smallest(arr,size);
    largest(arr,size);
    return 0;
}