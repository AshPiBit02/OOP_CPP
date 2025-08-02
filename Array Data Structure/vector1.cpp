#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>vec(5,1);
    for(int val:vec)
    {
        cout<<val<<" ";
    }
    return 0;


}