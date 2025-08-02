#include<iostream>
using namespace std;
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9};
    for(int st=0;st<9;st++)
    {
        for(int end=st;end<9;end++)
        {
            for(int i=st;i<=end;i++)
            {
                cout<<arr[i];
            }
            cout<<" ";
        }
        cout<<endl;
    }
}