#include<iostream>
using namespace std;

/*
1.make a newArr of same size
2.make a variable sum = 0
3.run a loop in which the sum increase with previous element of sum;
*/

void cumulativeSumArray(int arr[], int size) {
    int newArr[size] = {0};
    int sum = 0;
    for(int i = 0; i < size; i++) {
        sum += arr[i];
        newArr[i] = sum;
    }

    for(int i = 0; i < size; i++) {
        cout<<newArr[i]<<" ";
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

    cumulativeSumArray(arr, size);

    return 0;
}