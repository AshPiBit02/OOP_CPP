#include<iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n=7;
    int MaxSum=INT_MIN; // Initialize MaxSum to the smallest possible integer
    int arr[n]={1,-2,3,-4,5,6,-7};
    for(int st=0;st<n;st++)
    {
        int cs=0; //current sum
        for(int end=st;end<n;end++)
        {
            cs+=arr[end];
            MaxSum=max(cs,MaxSum);
        }
    }
    cout<<"The Maximum Sum is "<<MaxSum<<endl;
    return 0;
}