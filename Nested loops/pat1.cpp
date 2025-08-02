// 1 2 3 4
// 1 2 3 4
// 1 2 3 4
// 1 2 3 4
#include<iostream>
using namespace std;

int main()
{
    int i,j;
    for(i=1;i<=4;i++)
    {
        char ch='A';
        for(j=1;j<=4;j++)
        {
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
}