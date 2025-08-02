#include<iostream>
using namespace std;
int main()
{
    int cs=0,MaxSum=INT_MIN;
    int arr[7]={-9,-2,-3,-4,-6,-1,-9};
    for(int i=0;i<7;i++)
    {
        cs+=arr[i];
        MaxSum=max(cs,MaxSum);
        if(cs<0)
        {
            cs=0;
        }
    }
    cout<<MaxSum;

}