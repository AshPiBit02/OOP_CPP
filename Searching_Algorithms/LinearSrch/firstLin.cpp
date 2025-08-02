//Linear Search in unsorted  applicable for both redudencing key
#include<iostream>
using namespace std;
void LinearSrch(int arr[],int n,int key)
{
    int pos=-1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            cout<<key<<" is found at indext "<<i<<" i.e. at position "<<i+1<<endl;
            pos++;
        }
    }
    if(pos==-1)
    {
        cout<<key<<" doesn't exit in the array!"<<endl;
    }
}
int main()
{
    int arr[]={2,56,0,-9,3,54,6,8,2,7,26,98,12,11};
    int n=sizeof(arr)/sizeof(int);
    int key;
    cout<<"Enter the element to be searched: ";
    cin>>key;
    LinearSrch(arr,n,key);
    return 0;
}