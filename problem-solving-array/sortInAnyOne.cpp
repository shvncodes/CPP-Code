#include<iostream>
using namespace std;

bool isArraySortedInDescending(int arr[], int size) {
    bool isArraySorted = true;

    int prev = arr[0];
    for(int i = 1; i < size; i++) {
        if(prev >= arr[i]) {
            prev = arr[i];
        } else {
            isArraySorted = false;
        }
    }

    return isArraySorted;
}

bool isArraySortedInAscending(int arr[], int size) {
    bool isArraySorted = true;

    int prev = arr[0];
    for(int i = 1; i < size; i++) {
        if(prev <= arr[i]) {
            prev = arr[i];
        } else {
            isArraySorted = false;
        }
    }

    return isArraySorted;
}

void sortedArray(int arr[], int size) {
    bool isAccOrder = isArraySortedInAscending(arr, size);
    bool isDesSorted = isArraySortedInDescending(arr, size);

    if(isAccOrder && isDesSorted) {
        cout<<"Both"<<endl;
    } else if(isAccOrder) {
        cout<<"The array is sorted in ascending order.";
    } else if(isDesSorted) {
        cout<<"The array is sorted in descending order.";
    } else {
        cout<<"The array is not sorted.";
    }
}

int main() {
    int size;
    cout<<"Enter the size of array: ";
    cin>>size;
    int arr[100];
    cout<<"Enter the elements of array: ";
    for(int i = 0; i < size; i++) {
        cin>>arr[i];
    } 

    sortedArray(arr, size);
    return 0;
}