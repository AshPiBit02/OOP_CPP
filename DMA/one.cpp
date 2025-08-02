#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number of elements in the array: ";
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++)
    {
        arr[i]=(i+1)*10;
    }
    cout<<"The elements are: ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    delete []arr;
    return 0;
}