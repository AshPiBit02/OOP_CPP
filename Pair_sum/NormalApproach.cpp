#include<iostream>
#include<vector>
using namespace std;

int PairSumBrute(vector<int>&vec,int target)
{
    bool Isprinted =false;
    for(int i=0;i<vec.size();i++)
    {
        for(int j=i+1;j<vec.size();j++)
        {
            if(vec[i]+vec[j]==target)
            {

                cout<<"The sum of pair vec["<<i<<"] and vec["<<j<<"] equal to target i.e. "<<target<<endl;
                Isprinted=true;
            }
        }
    }
    if(!Isprinted)
    {
        cout<<"Not possible";
    }
}
int main()
{
    vector<int>vec={1,2,4,5,6,9,12,27,31};
    int target;
    cout<<"Enter the target integer: ";
    cin>>target;
    PairSumBrute(vec,target);
    return 0;
}