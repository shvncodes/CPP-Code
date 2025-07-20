#include<iostream>
using namespace std;

// void solve(int arr[], int size, int k) {
//     k = k%size;

//     int newArr[size];
//     int i = 0, j = k;
//     while(j < size) {
//         newArr[j] = arr[i];
//         j++;
//         i++;
//     }

//     j = 0;
//     while(i < size) {
//         newArr[j] = arr[i];
//         j++;
//         i++;
//     }

//     for(int indx=0;indx<size;indx++) {
//         cout<<newArr[indx]<<" ";
//     }
// }

void circularRightShift(int arr[], int size, int k) {
    k = k % size;
    int newArr[size];

    int i = 0, j = k;
    while(j < size) {
        newArr[j] = arr[i];
        j++;
        i++;
    }

    j = 0;
    while(i < size) {
        newArr[j] = arr[i];
        j++;
        i++;
    }

    for(int m = 0; m < size; m++) {
        cout<<newArr[m]<<" ";
    }
}

int main() {
    int size;
    cout<<"Enter the size of array: ";
    cin>> size;

    int arr[100];
    cout<<"Enter the elements of array: ";
    for(int i = 0; i < size; i++) {
        cin>>arr[i];
    }

    int k;
    cout<<"Enter the position for right shift: ";
    cin>>k;

    cout<<"Rotated array: "; 
    circularRightShift(arr, size, k);
    return 0;
}