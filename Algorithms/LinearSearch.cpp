#include<iostream>
using namespace std;
void getEle(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<"Enter element["<<i<<"]: ";
        cin>>arr[i];
    }
}
void getAns(int target,int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==target)
        {
            cout<<target<<" found"<<endl;
            return;
        }
    }
    cout<<target<<" not found!"<<endl;

}
int main()
{
    int n,target;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int arr[n];
    getEle(arr,n);
    cout<<"Enter target element: ";
    cin>>target;
    getAns(target,arr,n);
    return 0;
}