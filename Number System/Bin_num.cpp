//This code converts a binary number to its decimal equivalent.
#include<iostream>
using namespace std;
void BinNum(int BN)
{
    int rem,pow=1,ans=0;
    while(BN>0)
    {
        rem=BN%2;
        BN=BN/2;
        ans+=(rem*pow);
        pow*=10;
    }
    cout<<ans<<endl;
}
int main()
{
    int n=111;
    for(int i=0;i<=n;i++)
    {
        BinNum(i);
    }
    return 0;
}