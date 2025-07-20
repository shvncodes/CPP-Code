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

int main() {
    int size;
    cout<<"Enter the size of an array: ";
    cin>>size;

    int arr[100];
    cout<<"Enter the elements of array: ";
    for(int i = 0; i < size; i++) {
        cin>>arr[i];
    }

    cout<<"Maximum element: "<<maximumElement(arr, size);
    return 0;
}