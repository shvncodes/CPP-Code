#include<iostream>
using namespace std;

/*
1.run a loop in which the elements of arr check the difference with another elements of that arr
2.if difference between two element of arr = k then print that pair of elements 
*/

void pairWithGivenDifference(int arr[], int size, int k) { 
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            if(arr[j]-arr[i] == k) {
                cout<<"("<<arr[i]<<", "<<arr[j]<<") "<<" ";
            }
        }
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

    int k;
    cout<<"Enter the difference: ";
    cin>>k;

    cout<<"Pairs with differnce "<<k<<": ";
    pairWithGivenDifference(arr, size, k);

    return 0;
}