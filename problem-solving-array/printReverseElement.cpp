#include<iostream>
using namespace std;

int main() {
    int size;
    cout<<"Enter the size of array: ";
    cin>>size;
    int arr[100];
    cout<<"Enter the elements of array: ";
    for(int i = 0; i < size; i++) {
        cin>>arr[i];
    } 

    for(int i = (size-1); i >= 0; i--) {
        cout<<"Index "<<i<<" : "<<arr[i]<<endl;
    }

    return 0;
}