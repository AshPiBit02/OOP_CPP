#include<iostream>
#include<vector>
using namespace std;
void Merge(vector<int>&arr,int start,int mid,int end)
{
    vector<int>temp;
    int i=start,j=mid+1;
    while(i<=mid && j<=end)
    {
        if(arr[i]<=arr[j])
        {
            temp.push_back(arr[i]);
            i++;
        }else{
            temp.push_back(arr[j]);
            j++;
        }
    }
    while(i<=mid)
    {
        temp.push_back(arr[i]);
        i++;
    }
    while(j<=end)
    {
        temp.push_back(arr[j]);
        j++;
    }
    for(int idx=0;idx<temp.size();idx++)
    {
        arr[start+idx]=temp[idx];
    }
    
}
void MergeSort(vector<int>&arr,int start,int end)
{
    if(start<end)
    {
        int mid=start+(end-start)/2;
        MergeSort(arr,start,mid);//left half
        MergeSort(arr,mid+1,end);//Right half
        Merge(arr,start,mid,end);
    }
}
int main()
{
    vector<int>arr={5,7,8,1,11,4,3,9,10,0,-3,6};
    cout<<"Before Sorting: ";
    for(int i:arr)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    MergeSort(arr,0,arr.size()-1);
    cout<<"After Merge Sorting: ";
    for(int i:arr)
    {
        cout<<i<<" ";
    }
    return 0;
}