#include<iostream>
using namespace std;

template <class T>
void sortArray(T arr[], int n) {
    for(int i=0; i<n; i++) {
        for(int j=i+1; j<n; j++) {
            if(arr[i]>arr[j]) {
                T temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<"\t";
    }
}

int main() {
    int n;
    cout<<"Enter number of values: ";
    cin>>n;
    int arr[n];
    cout<<"Enter values: "<<endl;
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    sortArray(arr, n);
    return 0;
}