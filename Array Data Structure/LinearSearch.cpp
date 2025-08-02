#include<iostream>
using namespace std;
void LinearSearch(int arr[],int size,int target)
{
    int x=0;
   for(int i=0;i<size;i++)
   {
    if(arr[i]==target)
    {
        cout<<target<<" is at the index "<<i<<endl;
        x++; 
    }
   }
   if(x==0)
   {
       cout<<"Element doesn't exist inside the array"<<endl;
   }
}
int main()
{
    int arr[]={4,2,7,8,1,5,8,2};
    int size=sizeof(arr)/sizeof(int);
    int target;
    cout<<"Enter the element to search in the array: ";
    cin>>target;
    LinearSearch(arr,size,target);
    return 0;
}