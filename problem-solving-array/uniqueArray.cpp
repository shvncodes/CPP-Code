#include<iostream>
using namespace std;

int uniqueElement(int arr[], int size) {
    int ans = 0;
    for(int i = 0; i < size; i++) {
        ans = ans^arr[i];
    }
    return ans;
}

int main() {
    int size;
    cout<<"Enter the size of array: ";
    cin>>size;
    int arr[101];
    cout<<"Enter the elements of array: ";
    for(int i = 0; i < size; i++) {
        cin>>arr[i];
    } 

    cout<<"Unique element in array: "<<uniqueElement(arr, size);
    return 0;
}