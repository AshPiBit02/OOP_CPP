#include<iostream>
using namespace std;
void uniqueVal(int arr[], int size)
{
    cout << "Unique values: ";
    for(int i = 0; i < size; i++)
    {
        int x = 0;
        for(int j = 0; j < size; j++)
        {
            if(arr[i] == arr[j])
            {
                x++;
            }
        }
        if(x == 1)
        {
            // Check if already printed
            bool alreadyPrinted = false;
            for(int k = 0; k < i; k++)
            {
                if(arr[k] == arr[i])
                {
                    alreadyPrinted = true;
                    break;
                }
            }
            if(!alreadyPrinted)
                cout << arr[i] << " ";
        }
    }
    cout << endl;
}

int main()
{
    int arr[] = {1,2,1,2,3,4,5,6,7,8,9,9};
    int size = sizeof(arr)/sizeof(int);
    uniqueVal(arr, size);
    return 0;
}