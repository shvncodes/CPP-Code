#include<iostream>
using namespace std;

int indexOfTargetElement(int arr[], int size, int targetElement) {
    for(int i = 0; i < size; i++) {
        if(arr[i] == targetElement) {
            return i;
        }
    }
    return -1;
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

    int targetElement;
    cout<<"Enter the target element of array: ";
    cin>>targetElement;

    cout<<"Index of "<<targetElement<<" : "<<indexOfTargetElement(arr, size, targetElement);
    
    return 0;
}