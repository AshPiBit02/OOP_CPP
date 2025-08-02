//This program returns the index of vector whose sum is equal to input number
#include<iostream>
#include<vector>
using namespace std;

void TwoSum(const vector<int>& num, int Inum)
{
    bool found = false;
    for(int i = 0; i < num.size(); i++)
    {
        for(int j = i + 1; j < num.size(); j++) // j = i+1 to avoid repeats and i==j
        {
            if(num[i] + num[j] == Inum)
            {
                cout << Inum << " is the sum of index " << i << " and " << j << endl;
                found = true;
            }
        }
    }
    if(!found)
    {
        cout << "Not possible" << endl;
    }
}

int main()
{
    vector<int> num = {0,1,2,3,8,9,4,6,7};
    int Inum;
    cout << "Enter the number :";
    cin >> Inum;
    TwoSum(num, Inum);
    return 0;
}