#include<iostream>
#include<vector>
using namespace std;
void ExchangeSort(vector<int>&vec,int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(vec[i]>vec[j])
            {
                int temp=vec[i];
                vec[i]=vec[j];
                vec[j]=temp;
            }
        }
    }
}
void display(vector<int>&vec,int n)
{
    cout<<"The Elements are : ";
    for(int i=0;i<n;i++)
    {
        cout<<vec[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    vector<int>vec={7,3,6,9,8,4,6,5,1,0,5,9,9,10};
    int n=vec.size();
    cout<<"Before Sorting"<<endl;
    display(vec,n);
    cout<<"After Sorting"<<endl;
    ExchangeSort(vec,n);
    display(vec,n);
    return 0;
}