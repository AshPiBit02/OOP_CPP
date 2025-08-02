#include<iostream>
#include<vector>
using namespace std;
int LinSrc(vector<int>&vec,int target)//pass by reference
{
    for(int i: vec)
    {
        if(i==target)
        {
            return i;
        }

    }
    return 1;

}
int main()
{
    vector<int>vec={0,5,9,8,6,3,7,11,10};
    int target;
    cout<<"Enter the target number: ";
    cin>>target;
    if(LinSrc(vec,target)==1)
    {
        cout<<target<<" not found!"<<endl;
    }
    else
    {
        cout<<target<<" found"<<endl;
    }
    // LinSrc(vec,target);
    return 0;

}
