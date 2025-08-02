#include <iostream>
#include <vector>
using namespace std;

int Partition(vector<int>& vec, int low, int high) {
    int pivot = vec[high]; // pivot is the value at high index
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (vec[j] < pivot) {
            i++;
            swap(vec[i], vec[j]);
        }
    }
    swap(vec[i + 1], vec[high]);
    return i + 1; // return pivot index
}

void QuickSort(vector<int>& vec, int low, int high) {
    if (low < high) {
        int pi = Partition(vec, low, high);
        QuickSort(vec, low, pi - 1);
        QuickSort(vec, pi + 1, high);
    }
}

int main() {
    vector<int> vec = {12, 32, 1, 56, 98, 2, 7, 33, 65, 17, 66, 23};
    int size = vec.size();
    cout << "Original Array : ";
    for (int val : vec) {
        cout << val << " ";
    }
    cout << endl;

    QuickSort(vec, 0, size - 1);

    cout << "Sorted array: ";
    for (int val : vec) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}