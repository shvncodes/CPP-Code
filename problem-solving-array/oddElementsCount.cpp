#include<iostream>
using namespace std;

int oddElementsCount(int arr[], int size) {
    int count = 0;
    for(int i = 0; i < size; i++) {
        if(arr[i] % 2 == 1) {
            count++;
        }
    }
    return count;
}

int main() {
    int size;
    cout<<"Enter the size of array: ";
    cin>>size;
    
    int arr[100];
    cout<<"Enter the elements of array: ";
    for(int i = 0; i < size; i++) {
        cin>> arr[i];
    } 

    cout<<"Total odd elements in array: "<<oddElementsCount(arr, size);

    return 0;
}