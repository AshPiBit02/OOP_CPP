#include<iostream>
using namespace std;
int sum(int n)
{
    if(n==0)
    {
        return 0;
    }
    else
    {
        return n+sum(n-1);
    }
}
int main()
{
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    if(n<0)
    {
        cout<<"Invalid Input!"<<endl;
    }
    else
    {
        cout<<"The sum of Natural Numbers up to "<<n<<" is "<<sum(n)<<endl;
    }
    return 0;
}