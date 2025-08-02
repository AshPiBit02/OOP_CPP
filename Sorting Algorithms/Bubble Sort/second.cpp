#include<iostream>
using namespace std;
void BubbleSort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        bool isSwap=false;
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1] =temp;
                isSwap=true;
            }
        }
        if(!isSwap)
        {
            return;
        }
    }
}
void display(int data[],int n)
{
    cout<<"The Elements are : ";
    for(int i=0;i<n;i++)
    {
        cout<<data[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int data[]={7,3,6,9,8,4,6,5,1,0,5,9,9,10};
    int n=sizeof(data)/sizeof(int);
    cout<<"Before Sorting"<<endl;
    display(data,n);
    cout<<"After Sorting"<<endl;
    BubbleSort(data,n);
    display(data,n);
    return 0;
}