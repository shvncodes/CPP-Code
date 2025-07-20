#include<iostream>
using namespace std;

void replaceOccurrencesOFValue(int arr[], int size, int targetElement, int replaceValue) {
    for(int i = 0; i < size; i++) {
        if(arr[i] == targetElement) {
            arr[i] = replaceValue;
        }
    }

    for(int i = 0 ; i < size; i++) {
        cout<<arr[i]<<" ";
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

    int targetElement;
    cout<<"Enter the element of array which is to be replace: ";
    cin>>targetElement;

    int replaceValue;
    cout<<"Enter the value which put on the place of teget element: ";
    cin>>replaceValue;

    replaceOccurrencesOFValue(arr, size, targetElement, replaceValue);
    return 0;
}