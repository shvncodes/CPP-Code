#include<iostream>
#include<climits>
using namespace std;

int maximumElement(int arr[], int size) {
    int maxi = INT_MIN;
    for(int i = 0; i < size; i++) {
        if(maxi < arr[i]) {
            maxi = arr[i];
        }
    }
    return maxi;
}

int minimumElement(int arr[], int size) {
    int mini = INT_MAX;
    for(int i = 0; i < size; i++) {
        if(mini > arr[i]) {
            mini = arr[i];
        }
    }
    return mini;
}

int differenceInMaxAndMin(int arr[], int size) {
    int max = maximumElement(arr, size);
    int min = minimumElement(arr, size);
    int difference = max - min;
    return difference; 
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

    cout<<"Difference between "<<maximumElement(arr, size)<<" and "<<minimumElement(arr, size)<<" is "
    <<differenceInMaxAndMin(arr, size);

    return 0;
}