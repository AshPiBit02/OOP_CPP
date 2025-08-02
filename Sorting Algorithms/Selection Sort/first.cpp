#include<iostream>
using namespace std;
void SelectionSort(int arr[],int n)
{
    int pos;
    for(int i=0;i<n-1;i++)
    {
        pos=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[pos]>arr[j])
            {
                pos=j;
            }
        }
        int temp=arr[pos];
        arr[pos]=arr[i];
        arr[i]=temp;
    }
}
void display(int arr[],int n)
{
    cout<<"The Elements are: ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int arr[]={12,69,53,89,99,45,22,16,56,77};
    int n=sizeof(arr)/sizeof(int);
    cout<<"Before Sorting"<<endl;
    display(arr,n);
    cout<<"After Sorting"<<endl;
    SelectionSort(arr,n);
    display(arr,n);
    return 0;
}