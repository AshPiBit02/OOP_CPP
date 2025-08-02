#include<iostream>
#include<vector>
using namespace std;
void GetEle(vector<int>&vec,int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<"Enter Element vec["<<i<<"]: ";
        cin>>vec[i];
    }
}
void InsertionSort(vector<int>&vec,int n)
{
    int i,pos,key;
    for(i=1;i<n;i++)
    {
        pos=i-1;
        key=vec[i];
        while(pos>=0 && vec[pos]>key)
        {
            vec[pos+1]=vec[pos];
            pos--;
        }
        vec[pos+1]=key;
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
    int n;
    cout<<"Enter number of elements: ";
    cin>>n;
    vector<int>vec(n);
    GetEle(vec,n);
    cout<<"Before Sorting"<<endl;
    display(vec,n);
    cout<<"After Sorting"<<endl;
    InsertionSort(vec,n);
    display(vec,n);
    return 0;
}