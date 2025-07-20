#include<iostream>
using namespace std;

bool isSorted(int arr[], int size) {
    int prev = arr[0];
    for (int i = 0; i < size; i++) {
        if(prev <= arr[i]) {
            prev = arr[i];
        } else {
            return false;
        }
    }
    return true;
}

int main() {
    int arr[] = {1,2,3,4,5,6,7,10};
    int size = sizeof(arr)/sizeof(int);
    
    // bool isSorted = true;
    // int prev = arr[0];
    // for(int i = 0; i < size; i++) {
    //     if(prev <= arr[i]) {
    //         prev = arr[i];
    //     } else {
    //         isSorted = false;
    //         break;
    //     }
    // }
    
    if (isSorted(arr, size)){
        cout<<"Sorted";
    } else {
        cout<<"Not Sorted";
    }

    return 0;
}