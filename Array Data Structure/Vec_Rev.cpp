#include<iostream>
#include<vector>
using namespace std;

void rev(const vector<int>& vec)//use of & i.e. pass by reference avoid copy of vector which helps in memory management and time complexity.
{
    cout << "Reversed vector: ";
    for(int i = vec.size() - 1; i >= 0; i--)
    {
        cout << vec[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> vec = {1,2,3,4,5};
    rev(vec);
    return 0;
}