#include<iostream>
using namespace std;

void duplicateExistOrNot(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            if((i != j) && arr[i] == arr[j]) {
                cout<<"Duplicates exist.";
                return;
            }
        }
    }
    cout<<"Duplicate doesn't exist.";
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

    duplicateExistOrNot(arr, size);

    return 0;
}