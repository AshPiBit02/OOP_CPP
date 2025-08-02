//This code swaps all occurrences of the maximum and minimum elements in an array.
#include<iostream>
using namespace std;
void swap_all_max_min(int arr[], int size)
{
    int max = arr[0], min = arr[0];
    // Find min and max values
    for(int i = 1; i < size; i++)
    {
        if(arr[i] < min) min = arr[i];
        if(arr[i] > max) max = arr[i];
    }
    // Swap all occurrences
    for(int i = 0; i < size; i++)
    {
        if(arr[i] == max)
            cout << min << " ";
        else if(arr[i] == min)
            cout << max << " ";
        else
            cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[] = {1,1,1,2,3,4,5,6,9,9,8,7};
    int size = sizeof(arr)/sizeof(int);
    swap_all_max_min(arr, size);
    return 0;
}