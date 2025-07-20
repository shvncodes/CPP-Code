#include<iostream>
using namespace std;

void duplicateElements(int arr[], int size) {
    for(int i = 0; i < size; i++) {
    bool isDuplicate = false;

        for(int j = 0; j < size; j++) {
            if(i != j && arr[i] == arr[j]) {
                isDuplicate = true;
                break;
            }
        }
        if(isDuplicate) {
            cout<<arr[i]<<" ";
        }
    }
}

int main() {
    int size;
    cout<<"Enter the size of array: ";
    cin>>size;
    int arr[100];
    cout<<"Enter the elemnets of array: ";
    for(int i = 0; i < size; i++) {
        cin>>arr[i];
    }

    cout<<"Duplicate elements in array: ";
    duplicateElements(arr, size);
    return 0;
}