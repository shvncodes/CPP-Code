#include<iostream>
using namespace std;

void swapAlternateElements(int arr[], int size) {
    for(int i = 0, j = 0; i < size/2; i++, j++) {
        int x = (i+j);
        int temp = arr[x];
        arr[x] = arr[x+1];
        arr[x+1] = temp;
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

    swapAlternateElements(arr, size);
    cout<<"Swaping Alternate elements of array: ";

    for(int i = 0; i < size; i++) {
        cout<<arr[i]<<" ";
    }
    return 0;
}