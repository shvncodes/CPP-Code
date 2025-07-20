#include<iostream>
using namespace std;

// void allZeroAtEnd(int arr[], int size) {
//     int newArr[size];
//     int j = 0; 
//     for(int i = 0; i < size; i++) {
//         if(arr[i] != 0) {
//             newArr[j] = arr[i];
//             j++;
//         }
//     }

//     int m = size-1; 
//     for(int i = 0; i < size; i++) {
//         if(arr[i] == 0) {
//             newArr[m] = arr[i];
//             m--;
//         }
//     }

//     for(int k = 0; k < size; k++) {
//         cout<<newArr[k]<<" ";
//     }
// }


void allZeroAtEnd(int arr[], int size) {
    int newArr[size];
    int start = 0, end = size-1; 
    for(int i = 0; i < size; i++) {
        if(arr[i] != 0) {
            newArr[start] = arr[i];
            start++;
        } else {
            newArr[end] = arr[i];
            end--;
        }
    }

    for(int k = 0; k < size; k++) {
        cout<<newArr[k]<<" ";
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

    allZeroAtEnd(arr, size);

    return 0;
}