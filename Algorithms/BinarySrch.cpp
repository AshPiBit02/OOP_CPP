//Using while loops, used for short arrays
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
    bool isFound=false;
    int start=0,end=n-1;
    while(start<=end)
    {
        int mid=start+(end-start)/2;
        if(arr[mid]==target)
        {
            cout<<target<<" found and is at index "<<mid<<endl;
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