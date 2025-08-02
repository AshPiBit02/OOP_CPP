// Sum of all numbers from 1 to N which are divisible by 3.
#include<iostream>
using namespace std;
int main()
{
    int n,i,sum=0;
    cout<<"Enter the value of n: ";
    cin>>n;
    cout<<endl;
    for(i=1;i<=n;i++)
    {
        if(i%3==0)
        {
            cout<<i<<"\t";
            sum=sum+i;
        }
    }
    cout<<endl<<"Sum: "<<sum;
    return 0;

}