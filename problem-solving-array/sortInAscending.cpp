#include<iostream>
using namespace std;

void isArraySortedInAscending(int arr[], int size) {
    bool isArraySorted = true;

    int prev = arr[0];
    for(int i = 1; i < size; i++) {
        if(prev <= arr[i]) {
            prev = arr[i];
        } else {
            isArraySorted = false;
        }
    }
    if(isArraySorted) {
        cout<<"Sorted in ascending order.";
    } else {
        cout<<"Not sorted in ascending order.";
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

    isArraySortedInAscending(arr, size);

    return 0;
}