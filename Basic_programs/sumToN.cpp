//Sum of natural numbers upto n
#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<"Enter the value of n:"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    cout<<"The sum of natural numbers upto "<<n<<" is "<<sum<<endl;

}