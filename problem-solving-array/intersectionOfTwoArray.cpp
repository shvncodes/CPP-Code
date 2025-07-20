#include<iostream>
using namespace std;

/*
1.Check the element of arr1 is already present or not in arr2
2.Make a function which check the element is already present or not
3.Make another functon in which we call the first function and make newArr 
4.If element is already present then put in newArr
5.else move to next element for check
*/

bool isElementAlreadyPresent(int arr[], int size, int element) {
    for(int i = 0; i < size; i++) {
        if(arr[i] == element) {
            return true;
        }
    }
    return false;
}

void intersectionOfTwoArrays(int arr1[], int arr2[], int size1, int size2) {
    int newArr[size1] = {0};
    int x = 0;
    for(int i = 0; i < size2; i++) {
        bool yes = isElementAlreadyPresent(arr2, size2, arr1[i]);
        if(yes) {
            newArr[x] = arr1[i];
            x++;
        }
    }

    for(int i = 0; i < x; i++) {
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

    intersectionOfTwoArrays(arr1, arr2, size1, size2);

    return 0;
}