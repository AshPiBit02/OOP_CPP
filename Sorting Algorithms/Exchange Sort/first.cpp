#include<iostream>
using namespace std;
void ExchangeSort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
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
    ExchangeSort(data,n);
    display(data,n);
    return 0;
}