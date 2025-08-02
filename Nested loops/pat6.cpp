#include<iostream>
using namespace std;
int main()
{

    for(int i=0;i<5;i++)
    {
        // for space
        for(int j=0;j<5-1-i;j++)
        {
            cout<<" ";
        }
        // for first section number
        for(int j=1;j<=i+1;j++)
        {
            cout<<j;
        }
        // for second section number
        for(int j=i;j>0;j--)
        {
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}