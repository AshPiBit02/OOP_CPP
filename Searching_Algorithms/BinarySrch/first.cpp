//Binary Search using iterative approach
#include<iostream>
#include<vector>
using namespace std;
void GetEle(vector<int>&vec,int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<"Enter Element Vec["<<i<<"]: ";
        cin>>vec[i];
    }
    cout<<endl;
}
void Bubblesort(vector<int>&vec,int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(vec[i]>vec[j])
            {
                int temp;
                temp=vec[i];
                vec[i]=vec[j];
                vec[j]=temp;
            }
        }
    }
}
int BinarySrch(vector<int>&vec,int start,int end,int key)
{
    while(start<=end)
    {
        int mid=start+(end-start)/2;
        if(vec[mid]==key)
        {

            return mid+1;
        }
        else if(vec[mid]>key)
        {
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }
    }
    return -1;
}
int main()
{
    int n,start=0,key;
    cout<<"Enter number of element: ";
    cin>>n;
    vector<int>vec(n);
    GetEle(vec,n);
    Bubblesort(vec,n);
    cout<<"Enter the key to be searched: ";
    cin>>key;
    int res=BinarySrch(vec,start,n-1,key);
    if(res==-1)
    {
        cout<<key<<" doesn't exist int the vector!"<<endl;
    }
    else
    {
        cout<<key<<" found at position "<<res<<endl;
    }
    return 0;

}