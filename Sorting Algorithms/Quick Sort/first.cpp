#include<iostream>
using namespace std;
/*Function that considers the first element as the pivot,
places the pivot at its exact position,
places smaller elements to the left of the pivot
and greater elements to the right of the pivot.*/
int partition(int arr[],int start,int end)
{
    int pivot=arr[start]; //pivot element (first element)
        int i=start;
        for(int j=start+1;j<=end;j++)//start from the second element
        {
            //If current element is smaller than the pivot
            if(arr[j]<pivot)
            {
                i++; //increment the index of smaller element
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
//Place the pivot in its correct position(index i)
int temp=arr[i];
arr[i]=arr[start];
arr[start]=temp;
return i;//Return the index of the pivot
}
//Function to implement quick sort
void QuickSort(int arr[],int start,int end)
{
    if(start<end)
    {
        int p=partition(arr,start,end);//p is the partitioning index
        QuickSort(arr,start,p-1);//Recurse on the left of pivot
        QuickSort(arr,p+1,end);//Recurse on the right of pivot
    }
}
//Function to print an array
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
    int arr[]={12,36,22,98,96,31,56,71,92,63,45};
    int n=sizeof(arr)/sizeof(int);
    cout<<"Before Sorting"<<endl;
    printArr(arr,n);
    QuickSort(arr,0,n-1);//Call QuickSort function to sort the arry
    cout<<"After Sorting"<<endl;
    printArr(arr,n);
    return 0;

}