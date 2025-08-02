//Linear search in sorted algorithm
#include<iostream>
using namespace std;
void GetEle(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the element Arr["<<i<<"]: ";
        cin>>arr[i];
    }
    cout<<endl;
}
void Sort(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int temp;
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}
void LinearSrch(int arr[],int n,int key)
{
    int pos=-1;
    Sort(arr,n);
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            cout<<key<<" is found at index "<<i<<" i.e. at position "<<i+1<<endl;
            pos++;
        }
        if(arr[i]>key)//If the index value is greater than the key value then the value doesn't exist.
        {
            cout<<arr[i]<<" is the correspond greater element then the "<<key<<" in the array."<<endl;
            break;
        }
    }
    if(pos==-1)
    {
        cout<<key<<" doesn't exist in the array!"<<endl;
    }
    cout<<endl;
}
void DisplayArr(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int n,key;
    cout<<"Enter number of elements in the array: ";
    cin>>n;
    int arr[n];
    GetEle(arr,n);
    cout<<"Enter the Element to be searched: ";
    cin>>key;
    Sort(arr,n);
    LinearSrch(arr,n,key);
    DisplayArr(arr,n);
    return 0;
}