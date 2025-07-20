#include<iostream>
using namespace std;

int oddElementsSum(int arr[], int size) {
    int sum = 0;
    for(int i = 0; i < size; i++) {
        if(arr[i] % 2 == 1) {
            sum += arr[i];
        }
    }
    return sum;
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

    cout<<"SUm of all odd elements in array: "<<oddElementsSum(arr, size);

    return 0;
}