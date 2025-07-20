#include<iostream>
using namespace std;

int evenElementsSum(int arr[], int size) {
    int sum = 0;
    for(int i = 0; i < size; i++) {
        if(arr[i] % 2 == 0) {
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

    cout<<"SUm of all even elements in array: "<<evenElementsSum(arr, size);

    return 0;
}