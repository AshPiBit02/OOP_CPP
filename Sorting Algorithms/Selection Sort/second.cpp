#include<iostream>
using namespace std;
void SelectionSort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int pos=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[pos]>arr[j])
            {
                pos=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[pos];
        arr[pos]=temp;
    }
}
void display(int arr[],int n)
{
    cout<<"The Elements are : ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
        }
        cout<<endl;
}
int main()
{
    int arr[]={12,36,99,78,52,45,66,11,9};
    int n=sizeof(arr)/sizeof(int);
    cout<<"Before Sorting"<<endl;
    display(arr,n);
    cout<<"After Sorting"<<endl;
    SelectionSort(arr,n);
    display(arr,n);
    return 0;
}