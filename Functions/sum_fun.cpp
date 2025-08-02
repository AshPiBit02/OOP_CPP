#include<iostream>
using namespace std;
int sumN(int n)
{
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        sum+=i;
    }
    return sum;

}
int main()
{
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    cout<<"The sum is "<<sumN(n)<<endl;
    return 0;
}