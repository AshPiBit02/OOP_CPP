#include<iostream>
#include<algorithm>
using namespace std;

void BinSrch(int arr[], int n, int target, int start, int end, bool &isfound)
{
    if(start > end)
        return;
    int mid = start + (end - start) / 2;
    if(arr[mid] > target)
    {
        BinSrch(arr, n, target, start, mid - 1, isfound);
    }
    else if(arr[mid] < target)
    {
        BinSrch(arr, n, target, mid + 1, end, isfound);
    }
    else
    {
        cout << target << " found at index " << mid << endl;
        isfound = true;
        return;
    }
}

int main()
{
    int arr[] = {3, 4, 5, -5, 13, 7, 1, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + n);
    int start = 0, end = n - 1;
    int target;
    cout << "Enter the target element: ";
    cin >> target;
    bool isfound = false;
    BinSrch(arr, n, target, start, end, isfound);
    if(!isfound)
    {
        cout << target << " not found!" << endl;
    }
    return 0;
}