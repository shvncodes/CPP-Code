#include<iostream>
using namespace std;

void updateElement(int arr[], int size) {
    arr[2] = 19;
    cout<<"In update function : "<<endl;
    for(int i = 0; i < size; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl<<endl;
}

int main() {
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(int);
 
    cout<<"In main function before using update function : "<<endl;
    for(int i = 0; i < size; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl<<endl;
    
    updateElement(arr, size);
    cout<<"In main function after using update function : "<<endl;
    for(int i = 0; i < size; i++) {
        cout<<arr[i]<<" ";
    }
    return 0;
}