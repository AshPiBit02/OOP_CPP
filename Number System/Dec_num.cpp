//This program converts a binary number to decimal.
#include<iostream>
using namespace std;
void DecNum(int num)
{
    int rem,sum=0,pow=1;
    while(num>0)
    {
        rem=num%10;
        sum+=(rem*pow);
        num=num/10;
        pow*=2;
    }
    cout<<sum<<endl;
}
int main()
{
 DecNum(111);
 return 0;
}