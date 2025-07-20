#include<iostream>
using namespace std;

int evenElementsCount(int arr[], int size) {
    int count = 0;
    for(int i = 0; i < size; i++) {
        if(arr[i] % 2 == 0) {
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

    cout<<"Total even elements in array: "<<evenElementsCount(arr, size);

    return 0;
}