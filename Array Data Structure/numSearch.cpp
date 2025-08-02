#include<iostream>
#include<algorithm>
using namespace std;

void setArr(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<"Enter element["<<i<<"]:";
        cin>>arr[i];
    }
    cout<<endl;
}

void getArr(int arr[],int n)
{
    cout<<"The elements in the array are : ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void sortArr(int arr[],int n) // Renamed to avoid conflict
{
    sort(arr, arr+n);
    cout<<"The sorted elements in ascending order are: ";
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}

void SearchNum(int arr[], int n, int num)
{
    int start = 0, end = n - 1;
    int mid = (start + end) / 2;
    while(start <= end)
    {
        if(arr[mid] == num)
        {
            cout << "Element is at index :" << mid << endl;
            return;
        }
        else if(arr[mid] > num)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = (start + end) / 2; // update mid after changing start/end
    }
    cout << "Element not found!" << endl;
}

int main()
{
    int n;
    cout<<"Enter number of Elements: ";
    cin>>n;
    int arr[n];
    setArr(arr,n);
    getArr(arr,n);
    sortArr(arr,n); // Use the renamed function
    int num;
    cout<<"Enter element for searching it: ";
    cin>>num;
    SearchNum(arr,n,num);
    return 0;
}