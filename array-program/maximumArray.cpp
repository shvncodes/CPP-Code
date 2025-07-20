#include<iostream>
#include<climits>
using namespace std;

int maximumElementOfArray(int arr[], int size) {
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
    cout<<"Enter the size of an arry: ";
    cin>>size;
    int arr[100];
    for(int i = 0; i < size; i++) {
        cin>>arr[i];
    }


    cout<<"Maximum value of array: "<<maximumElementOfArray(arr, size);
    return 0;
}