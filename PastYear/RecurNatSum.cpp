#include<iostream>
using namespace std;
int NatSum(int n)
{
   if(n==1)
   {
    return 1;
   }
   else
   {
    return n+NatSum(n-1);
   }
}
int main()
{
    int n,sum=0;
    cout<<"Enter the value of n: ";
    cin>>n;
    if(n<1)
    {
        cout<<"Invalid Input! "<<endl;
        return 1;
    }
    cout<<NatSum(n)<<" is the sum"<<endl;
    return 0;
}