#include<iostream>
using namespace std;

/*
Algorithm
-----------------------------------------------------------
    1. first insert all the arr1 elements into newArr
    2. Run a loop of arr2 
    3. Check if element of arr2 is already present in the arr1 or not
    4. if not then insert arr2's element into newArr then move to the next element
    5. else move to the next element
    6. then print the newArr elements
*/


// bool isElementPresent(int a[], int size, int element) {
//     for(int i = 0; i < size; i++) {
//         if(a[i] == element) {
//             return true;
//         } 
//     }
//     return false;
// }

void unionOfTwoArrays(int arr1[], int arr2[], int size1, int size2) {
    int newArr[size1 + size2] = {0};
    for(int i = 0; i < size1; i++) {
        newArr[i] = arr1[i];
    }

    // int x = size1;
    // for(int j = 0; j < size2; j++) {
    //     bool yes = isElementPresent(arr1, size1, arr2[j]);
    //     if(!yes) {
    //         newArr[x] = arr2[j];
    //         x++;
    //     } 
    // }

    int j = 0, x = 0;
    while(j < size2) {
        bool isElementPresent = false;
        int k = 0;
        while(k < size1) {
            if(arr1[k] == arr2[j]) {
                isElementPresent = true;
                break;
            } else {
                k++;
            }
        }

        if(isElementPresent == false) {
            newArr[size1+x] = arr2[j];
            x++;
        }
        j++;
    }

    for(int i = 0; i < size1+x; i++) {
        cout<<newArr[i]<<" ";
    }
}

int main() {
    int size1;
    cout<<"Enter the size of array1: ";
    cin>>size1;

    int arr1[100];
    cout<<"Enter the elements of array1: ";
    for(int i = 0; i < size1; i++) {
        cin>>arr1[i];
    }

    int size2;
    cout<<"Enter the size of array2: ";
    cin>>size2;

    int arr2[100];
    cout<<"Enter the elements of array2: ";
    for(int i = 0; i < size2; i++) {
        cin>>arr2[i];
    }

    unionOfTwoArrays(arr1, arr2, size1, size2);
    return 0;
}