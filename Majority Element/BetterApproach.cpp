#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void MajorEle(vector<int>&nums)
{
    sort(nums.begin(),nums.end());
    int freq = 1, ans = nums[0];
    for(int i = 1; i < nums.size(); i++)
    {
        if(nums[i-1] == nums[i])
        {
            freq++;
        }
        else
        {
            if(freq > (nums.size()/2))
            {
                cout << "The majority element is " << ans << endl;
                return;
            }
            freq = 1;
            ans = nums[i];
        }
    }
    // Check the last group
    if(freq > (nums.size()/2))
        cout << "The majority element is " << ans << endl;
    else
        cout << "No majority element" << endl;
}
int main()
{
    vector<int>nums={1,1,3,1,0,9,1,0,0,4,1,0,0,0,0,0,0,0};
    MajorEle(nums);
    return 0;
}