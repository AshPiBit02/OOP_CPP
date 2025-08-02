#include<iostream>
#include<vector>
using namespace std;
void InsertionSort(vector<int>&vec,int n)
{
    int i,key,pos;
    for(i=1;i<n;i++)
    {
        key=vec[i];
        pos=i-1;
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
int main(){
    vector<int>vec={12,65,99,56,32,54,26,13,88,91};
    int n=vec.size();
    cout<<"Before Sorting"<<endl;
    display(vec,n);
    cout<<"After Sorting"<<endl;
    InsertionSort(vec,n);
    display(vec,n);
    return 0;
}