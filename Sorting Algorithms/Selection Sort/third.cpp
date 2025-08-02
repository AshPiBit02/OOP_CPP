#include<iostream> 
#include<vector>
using namespace std;
void SelectionSort(vector<int>&vec,int n)
{
    for(int i=0;i<n-1;i++)
    {
        int pos=i;
        for(int j=i+1;j<n;j++)
        {
            if(vec[pos]>vec[j])
            {
                pos=j;
            }
        }
        int temp=vec[i];
        vec[i]=vec[pos];
        vec[pos]=temp;
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
    vector<int>vec={11,89,56,22,63,48,77,52,12,56};
    int n=vec.size();
    cout<<"Before Sorting "<<endl;
    display(vec,n);
    cout<<"After Sorting"<<endl;
    SelectionSort(vec,n);
    display(vec,n);
    return 0;
}