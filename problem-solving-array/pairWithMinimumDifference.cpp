#include<iostream>
#include<climits>
using namespace std;

int pairWithMinimumDifference(int arr[], int size) {
    int minDiff = INT_MAX;
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            int diff = arr[i]-arr[j];
            if((i != j) && (diff < minDiff) && (diff >= 0)) {
                minDiff = diff;
            }
        }
    }
    return minDiff;
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

    cout<<"Minimum diffrence: "<<pairWithMinimumDifference(arr, size);

    return 0;
}