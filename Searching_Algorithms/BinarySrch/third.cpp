//Binary Search using recursive approach(more optimized)
#include<iostream>
using namespace std;
#include<vector>
void GetEle(vector<int>&vec,int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the Element Vec["<<i<<"]: ";
        cin>>vec[i];
    }
}
void BubbleSort(vector<int>&vec,int n)
{
    for(int i=0;i<n;i++)
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
int BinarySrch(vector<int>&vec,int start,int end,int key)
{
    if(start>end)
    {
        return -1;
    }
    int mid=start+(end-start)/2;
    if(vec[mid]==key)
        {
            return mid+1;
        }
    else if(vec[mid]<key)
        {
            return BinarySrch(vec,mid+1,end,key);
        }
    else
        {
            return BinarySrch(vec,start,mid-1,key);
        }

}
int main()
{
    int n,key;
    cout<<"Enter the number of elements in the vector: ";
    cin>>n;
    vector<int>vec(n);
    GetEle(vec,n);
    BubbleSort(vec,n);
    cout<<"Enter the key value to be searched: ";
    cin>>key;
    int res=BinarySrch(vec,0,n-1,key);
    if(res==-1)
    {
        cout<<key<<" doesn't exist in the vector!"<<endl;
    }
    else
    {
        cout<<key<<" is found at position "<<res<<endl;
    }
    return 0;
}