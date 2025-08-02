#include<iostream>
using namespace std;
int  partition(int arr[],int left,int right)
{

    int pivotIdx=left+(right-left)/2;//for median pivot index
    int pivot=arr[pivotIdx];
    int i=left;//index of the smaller element assumed
    int j=right;//index of the largest element assumed
    while(i<=j)
    {
        //Find element on left that should be on right
        while(arr[i]<pivot)
        {
            i++;
        }
        //Find element on right that should be on left
        while(arr[j]>pivot)
        {
            j--;
        }
        if(i<=j)
        {
            //Swap
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            i++;
            j--;
        }
    }
    //Now, i is the partition point
    return i;
}
void QuickSort(int arr[],int left,int right)
{
    if(left<right)
    {
        int p=partition(arr,left,right);//p is the partitioning index
        QuickSort(arr,left,p-1);//Recurse on the left of pivot
        QuickSort(arr,p,right);//Recurse on the right of pivot
    }
}
void printArr(int arr[],int n)
{
    cout<<"The Elements are : ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int arr[]={12,23,25,55,10,56,94,12,36,56,42,33};
    int n=sizeof(arr)/sizeof(int);
    cout<<"Before Sorting"<<endl;
    printArr(arr,n);
    QuickSort(arr,0,n-1);
    cout<<"After Sorting"<<endl;
    printArr(arr,n);
    return 0;
}