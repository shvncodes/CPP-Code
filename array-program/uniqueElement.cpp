#include<iostream>
using namespace std;

void uniqueElements(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        bool isUnique = true;

        for(int j = 0; j < size; j++) {
            if(i != j && arr[i] == arr[j]) {
                isUnique = false;
                break;
            } 
        }
        if (isUnique) {
            cout<<arr[i]<<" ";
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

    cout<<"Unique elements of array: ";
    uniqueElements(arr, size);
 
    return 0;
}