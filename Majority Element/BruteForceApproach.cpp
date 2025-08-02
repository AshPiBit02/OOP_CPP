#include<iostream>
#include<vector>
using namespace std;
void MajorEle(vector<int>& nums)
{
    int maj = nums.size() / 2;
    for(int i = 0; i < nums.size(); i++)
    {
        int freq = 0;
        for(int j = 0; j < nums.size(); j++)
        {
            if(nums[i] == nums[j])
                freq++;
        }
        if(freq > maj)
        {
            cout <<"The Majority Element is: "<< nums[i] << endl;
            return; // Stop after finding the majority element
        }
    }
    cout << "No majority element" << endl;
}
int main()
{
    vector<int>nums={1,1,3,1,9,1,1,5,4,1};
    MajorEle(nums);
    return 0;
}