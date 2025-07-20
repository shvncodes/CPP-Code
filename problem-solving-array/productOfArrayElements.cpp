#include<iostream>
using namespace std;

int productOfarrayElements(int arr[], int size) {
    int product = 1;
    for(int i = 0; i < size; i++) {
        product *= arr[i];
    }
    return product;
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

    cout<<"Product of all elements of array: "<<productOfarrayElements(arr, size);

    return 0;
}