#include<iostream>
using namespace std;
void display(int arr[],int n)
{
    cout<<"Array before sorting: ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void BubbleSort(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
void print(int arr[],int n)
{
        cout<<"Array after sorting: ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int arr[]={3,4,-9,0,-1,5,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    display(arr,n);
    BubbleSort(arr,n);
    print(arr,n);
    return 0;
}