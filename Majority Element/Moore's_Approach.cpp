#include<iostream>
#include<vector>
using namespace std;

int MajorEle(vector<int>& num)
{
    int freq = 0, ans = 0;
    for(int i = 0; i < num.size(); i++)
    {
        if(freq == 0)
            ans = num[i];
        if(ans == num[i])
            freq++;
        else
            freq--;
    }
    // Second pass: verify
    freq = 0;
    for(int i = 0; i < num.size(); i++)
    {
    if(num[i] == ans)
    {
         freq++;
    }
    if(freq > num.size() / 2)
    {
        return ans;
    }
    else
    {
        return -1; // or handle "no majority" as you wish
    }
    }
}

int main()
{
    vector<int> num = {1,2,2,1,1,1};
    int res = MajorEle(num);
    if(res != -1)
        cout << "The Majority Element is: " << res << endl;
    else
        cout << "No majority element" << endl;
    return 0;
}