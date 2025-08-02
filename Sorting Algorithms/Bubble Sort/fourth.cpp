#include<iostream>
#include<vector>
using namespace std;
void BubbleSort(vector<int>&vec,int n)
{
    for(int i=0;i<n-1;i++)
    {
        bool isSwap=false;
        for(int j=0;j<n-i-1;j++)
        {
            if(vec[j]>vec[j+1])
            {
                int temp=vec[j];
                vec[j]=vec[j+1];
                vec[j+1]=temp;
                isSwap=true;
            }
        }
        if(!isSwap)
        {
            return;
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
    BubbleSort(vec,n);
    display(vec,n);
    return 0;
}