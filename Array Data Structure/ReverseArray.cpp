#include<iostream>
using namespace std;
void RevArr(int arr[],int size)
{
    int start=0,end=size-1;
    while(start<=end)
    {
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
    cout<<"After reversing: ";
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }

}
int main()
{
    int arr[]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(int);
    cout<<"Before reversing: ";
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    RevArr(arr,size);
    return 0;  
}