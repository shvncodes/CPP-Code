#include<iostream>
using namespace std;

int main() {
    int arr1[] = {};
    int arr2[]= {2,3,4,5,6};
    int size1 = sizeof(arr1)/sizeof(int);
    int size2 = sizeof(arr2)/sizeof(int);

    int size = size1 + size2;
    int arr[size];

    int i = 0, j = 0, k = 0;
    while(i < size1 || j < size2) {
        if(arr1[i] <= arr2[j]) {
            arr[k] = arr1[i];
            i++; 
            k++;
        } else {
            arr[k] = arr2[j];
            j++;
            k++;
        }
    }

    while(i < size1) {
        arr[k] =arr1[i];
        i++;
        k++;
    }
    while(j < size2) {
        arr[k] = arr2[j];
        j++;
        k++;
    }
    for(int m = 0; m < size; m++) {
        cout<<arr[m]<<" ";
    }
    
    
    return 0;
}