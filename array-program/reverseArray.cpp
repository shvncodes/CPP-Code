#include<iostream>
using namespace std;


void reverseElementsOfArray1(int arr1[], int size) {
    int arr2[size];
    for(int i = 0; i < size; i++) {
        arr2[i] = arr1[size-(1+i)];
    }

    for(int i=0;i<size;i++) {
        arr1[i] = arr2[i];
    }
}

void reverseElementsOfArray2(int arr1[], int size) {
    for(int i = 0; i < size/2; i++) {
        int temp = arr1[i];
        arr1[i] = arr1[size-(1+i)];
        arr1[size-(1+i)] = temp;
    }
}

// 5,4,3,2,1


int main() {
    int size;
    cout<<"Enter the size of array1: ";
    cin>>size;
    int arr1[100];
    for(int i = 0; i < size; i++) {
        cin>>arr1[i];
    }
    reverseElementsOfArray2(arr1, size);

    for(int i=0;i<size;i++) {
        cout<<arr1[i]<<" ";
    }
    return 0;
}