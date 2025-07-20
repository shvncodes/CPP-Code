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

int secondMaximumElement(int arr[], int size) {
    int maxi = maximumElement(arr, size);
    int secondMaxi = INT_MIN;

    for(int j = 0; j < size; j++) {
        if(maxi != arr[j] && secondMaxi < arr[j] && secondMaxi < maxi) {
            secondMaxi = arr[j];
        }
    }

    if (secondMaxi == INT_MIN) {
        return -1;
    }
    
    return secondMaxi;
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

    cout<<"Second maximum element: "<<secondMaximumElement(arr, size);

    return 0;
}