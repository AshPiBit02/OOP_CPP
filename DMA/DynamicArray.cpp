#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of array:";
    cin>>n;
    int *ptr=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>*(ptr+i); //Or we can use prt[i]
    }
    for(int i=0;i<n;i++)
{
    cout<<*(ptr+i)<<" ";
}
  
    delete []ptr;
    return 0;
}