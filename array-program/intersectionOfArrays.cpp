#include<iostream>
using namespace std;

void intersectionOfArrays(int arr1[], int arr2[], int size1, int size2) {
    bool isSameElement = false;

    for(int i = 0; i < size1; i++) {
        for(int j = 0; j < size2; j++) {
            if(arr1[i] == arr2[j]) {
                isSameElement = true;
                cout<<arr1[i]<<" ";
                break;
            }
        }
    } 
}

int main() {
    int size1;
    cout<<"Enter the size of array1: ";
    cin>>size1;

    int arr1[100];
    cout<<"Enter the elemnets of array: ";
    for(int i = 0; i < size1; i++) {
        cin>>arr1[i];
    }

    int size2;
    cout<<"Enter the size of array1: ";
    cin>>size2;

    int arr2[100];
    cout<<"Enter the elemnets of array2: ";
    for(int i = 0; i < size2; i++) {
        cin>>arr2[i];
    }


    cout<<"Intesection of array 1 and array 2 : ";
    intersectionOfArrays(arr1, arr2, size1, size2);
    return 0;
}