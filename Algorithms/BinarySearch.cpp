//Using for loops, used for short arrays
#include<iostream>
#include<algorithm>
using namespace std;
void getElement(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<"Enter element arr["<<i<<"]: ";
        cin>>arr[i];
    }
}
void BinSrch(int arr[],int n,int target)
{
    sort(arr,arr+n);// sort function automatically sort the arry
    int start=0,end=n-1;
    bool isFound=false;
    for(int i=0;i<n;i++)
    {
        int mid=(start+end)/2;
        if(arr[mid]==target)
        {
            cout<<target<<" Found....."<<endl;
            isFound=true;
            break;
        }
        else if(arr[mid]>target)
        {
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }
    } 
    if(!isFound)
    {
        cout<<target<<" not found!"<<endl;
    } 
}
int main()
{
    int n,target;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    int arr[n];
    getElement(arr,n);
    cout<<"Enter the target element: ";
    cin>>target;
    BinSrch(arr,n,target);
    return 0;
}