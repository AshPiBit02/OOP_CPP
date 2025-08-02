#include<iostream>
using namespace std;
int main()
{
    int i,count=0, n;
    cout<<"Enter a number to check whether the number is prime or not:"<<endl;
    cin>>n;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count>0)
    {
        cout<<n<<" is not a prime number"<<endl;
    }
    else
    {
        cout<<n<<" is a prime numebr"<<endl;
    }
    return 0;
    
}