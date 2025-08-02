#include<iostream>
using namespace std;
void beforesorting(int arr[],int n)
{
    cout<<"Before sorting: ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
void SelectionSorting(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int si=i;//smallest index 
        for(int j=i+1;j<n;j++)
        {
        if(arr[j]<arr[si])
        {
            si=j;
        }
        }
        swap(arr[i],arr[si]);
    }
}
void AfterSorting(int arr[],int n)
{
    cout<<endl<<"After sorting: ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[]={4,5,1,3,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    beforesorting(arr,n);
    SelectionSorting(arr,n);
    AfterSorting(arr,n);
    return 0;
}