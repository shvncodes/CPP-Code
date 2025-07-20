#include<iostream>
#include<climits>
using namespace std;

int minimumElement(int arr[], int size) {
    int mini = INT_MAX;
    for(int i = 0; i < size; i++) {
        if(mini > arr[i]) {
            mini = arr[i];
        }
    }
    return mini;
}

int main() {
    int size;
    cout<<"Enter the size of an array: ";
    cin>>size;

    int arr[100];
    cout<<"Enter the elements of array: ";
    for(int i = 0; i < size; i++) {
        cin>>arr[i];
    }

    cout<<"Minimum element: "<<minimumElement(arr, size);
    
    return 0;
}