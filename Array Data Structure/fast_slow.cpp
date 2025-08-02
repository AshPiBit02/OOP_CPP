#include<iostream>
#include<vector>
using namespace std;
void middle(vector<int>&vec)
{
    int fast=0,slow=0;
    int n=vec.size();
    while(fast!=n-1 && fast!=n)
    {
        slow++;
        fast=fast+2;
    }
    cout<<"The middle index is :"<<slow<<" whose value is: "<<vec[slow]<<endl;


}
int main()
{
    vector<int>vec={1,2,3,4,5,6,9,45,2,3,4};
    middle(vec);
    return 0;
}