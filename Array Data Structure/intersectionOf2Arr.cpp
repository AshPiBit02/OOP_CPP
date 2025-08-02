// To print intersectioin of 2 arrays.
#include<iostream>
using namespace std;
//It doesn't consider duplicates in the arrays.
//It prints all the common elements in both arrays.
void intersection1(int arr1[],int size1,int arr2[],int size2)
{
    
    cout<<"The common elements are are: ";
    for(int i=0;i<size1;i++)
    {
        for(int j=0;j<size2;j++)
        {
            if(arr1[i]==arr2[j])
            {
                cout<<arr1[i]<<" ";
            }
        }
    }
    cout<<endl; 
}
//This function considers duplicates in the arrays.
void intersection2(int arr1[],int size1,int arr2[],int size2)
{
     cout << "The common elements are: ";
    for(int i = 0; i < size1; i++)
    {
        // Check if arr1[i] is already printed
        bool alreadyPrinted = false;
        for(int k = 0; k < i; k++)
        {
            if(arr1[k] == arr1[i])
            {
                alreadyPrinted = true;
                break;
            }
        }
        if(alreadyPrinted) continue;

        for(int j = 0; j < size2; j++)
        {
            if(arr1[i] == arr2[j])
            {
                cout << arr1[i] << " ";
                break; // Only print once per element
            }
        }
    }
    cout << endl;
}
int main()
{
    int arr1[]={1,2,3,4,4,5};
    int size1=sizeof(arr1)/sizeof(int);
    int arr2[]={4,5,6,7,8,9};
    int size2=sizeof(arr2)/sizeof(int);
    intersection2(arr1,size1,arr2,size2);
    return 0;
}
