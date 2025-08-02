#include<iostream>
#include<vector>
using namespace std;
//This function is only applicable when the vector consist single unique value and the frequency of the repeated element are equal
int SingleNum1(vector<int>&vect)//& for pass by reference
{
    int ans=0;//initailize inorder to first xor opertion with first index element
    for(int i: vect)
    {
        ans^=i;
    }
    return ans;
}
int main()
{
    vector<int>vect={1,2,3,1,2};
    cout<<SingleNum1(vect);
    return 0;

}