#include<iostream>
#include<vector>
using namespace std;
void PairSum(vector<int>&nums,int target)
{
    int start=0,end=nums.size()-1;
    bool isPossible=false;
    while(start<end)
    {
        int sum=nums[start]+nums[end];
        if(sum==target)
        {
            cout<<"The sum of pair vec["<<start<<"] i.e. "<<nums[start]<<" and vec["<<end<<"] i.e. "<<nums[end]<< " is equal to target i.e. "<<target<<endl;
            isPossible=true;
            break;
        }
        else if(sum>target)
        {
            end--;
        }
        else
        {
            start++;
        }
    }
    if(!isPossible)
    {
        cout<<"Not possible!"<<endl;
    }
}

int main()
{
    vector<int>nums={1,2,4,5,6,9,12,27,31};
    int target;
    cout<<"Enter the target integer: ";
    cin>>target;
    PairSum(nums,target);
    return 0;
}