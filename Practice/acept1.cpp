#include<iostream>
using namespace std;
int main()
{
    int arr[10]={1,2,3,4,5};
    int n;
    cout<<"Enter index and get element: ";
    cin>>n;
    try{
        if(n>4)
        {
            throw n;
        }
        cout<<"Element: "<<arr[n]<<endl;
    }
    catch(int n)
    {
        cout<<"Exception: No element at index "<<n<<endl;
    }
}