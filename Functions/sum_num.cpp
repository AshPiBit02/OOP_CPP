#include<iostream>
using namespace std;
int sumNum(int num)
{
    int sum=0,rem;
    while(num!=0)
    {
    rem=num%10;
    num/=10;
    sum+=rem;
    }
    return sum;
}
int mulNum(int num)
{
    int mul=1,rem;
    while(num!=0)
    {
    rem=num%10;
    num/=10;
    mul*=rem;
    }
    return mul;
}
int main()
{
    cout<<"The sum is "<<sumNum(144)<<endl;
    cout<<"The product is "<<mulNum(144)<<endl;
    return 0;
}