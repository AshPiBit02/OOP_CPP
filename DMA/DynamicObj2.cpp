#include<iostream>
#include<vector>
using namespace std;
class Product{
    public:
    vector<int>nums;
    void set()
    {
        int n;
        cout << "Enter number of elements: ";
        cin >> n;
        nums.resize(n);
        for(int i = 0; i < n; i++)
        {
            cout << "Enter element " << i << " : ";
            cin >> nums[i];
        }
    }
    void get()
    {
        cout << "The double of each elements are: ";
        for(int i = 0; i < nums.size(); i++)
        {
            cout << nums[i] * 2 << " ";
        }
        cout << endl;
    }
};
int main()
{
    Product *ptr=new Product;//pointer to class
    ptr->set();//Dynacmic object
    ptr->get();//Dynamic object
    delete ptr;
    return 0;
}