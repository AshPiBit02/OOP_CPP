#include<iostream>
using namespace std;
void insertionSort(int arr[],int n)
{
    int i,pos,key;
    for(i=1;i<n;i++)
    {
        key=arr[i];
        pos=i-1;
        while(pos>=0 && arr[pos]>key)
        {
            arr[pos+1]=arr[pos];
            pos--;
        }
        arr[pos+1]=key;
    }
}
void display(int arr[],int n)
{
    cout<<"The elements are : ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int arr[]={69,36,12,56,32,77,43,79,56,21,45,23,55};
    int n=sizeof(arr)/sizeof(int);
    cout<<"Before Sorting"<<endl;
    display(arr,n);
    cout<<"After Sorting"<<endl;
    insertionSort(arr,n);
    display(arr,n);
    return 0;

}