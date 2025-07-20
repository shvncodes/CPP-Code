#include<iostream>
using namespace std;

void newArray(int arr[], int size, int position) {
    for(int i = position; i < size; i++) {
        arr[i] = arr[i+1];
    }
    
    for(int i = 0; i <(size-1); i++) {
        cout<<arr[i]<<" ";
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

    int position;
    cout<<"Enter the position at which element should be remove: ";
    cin>>position;

    if(position >= size) {
        cout<<"Invalid position.";
        return 1;
    }

    newArray(arr, size, position);
    return 0;
}