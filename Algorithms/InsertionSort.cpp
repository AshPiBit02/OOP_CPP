#include<iostream>
using namespace std;
void InsertionSort(int arr[],int n)
{
    cout<<"After Insertion Sorting: ";
    for(int i=1;i<n;i++)
    {
        int current=arr[i];
        int prev=i-1;
        while(prev>=0 && arr[prev]>current)
        {
            arr[prev+1]=arr[prev];
            prev--;
        }
        arr[prev+1]=current;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[]={6,4,8,2,-3,0,9,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Orginal array: ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    InsertionSort(arr,n);
    return 0;
}