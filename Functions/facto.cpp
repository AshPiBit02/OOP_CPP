#include<iostream>
using namespace std;
int facto(int n)
{
    int fact=1,i=1;
    while(i<=n)
    {
        fact*=i;
        i++;
    }
    return fact;
}
int main()
{
    cout<<"The factorial is "<<facto(5)<<endl;
    return 0;
}