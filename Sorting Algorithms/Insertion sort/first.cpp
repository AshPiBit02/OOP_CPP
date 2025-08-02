#include<iostream>
using namespace std;
//function to sort an array using insertion sort
void insertionSort(int arr[],int n)
{
    int i,pos,key;
    for(i=1;i<n;i++)
    {
        key=arr[i];
        pos=i-1;
        //Move elements greater than key to one position ahead
        while(pos>=0 && arr[pos]>key)
        {
            arr[pos+1]=arr[pos];
            pos--;
            
        }
        arr[pos+1]=key;
    }
}
void display(int arr[],int n)
{
    cout<<"The elements are : ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<< " ";
    }
    cout<<endl;
}
int main()
{
    int arr[]={99,85,12,-89,12,65,52,69,36,12,55,89};
    int n=sizeof(arr)/sizeof(int);
    cout<<"Before Sorting "<<endl;
    display(arr,n);
    insertionSort(arr,n);
    cout<<"After Sorting"<<endl;
    display(arr,n);
    return 0;

}