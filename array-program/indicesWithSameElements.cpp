#include<iostream>
using namespace std;

void indicesWithEqualElements(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            if(i != j && arr[i] == arr[j] && j > i) {
                cout<<"Pair indices for value "<<arr[i]<<": "<<"("<<i<<", "<<j<<")"<<endl;
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

    indicesWithEqualElements(arr, size);

    return 0;
}