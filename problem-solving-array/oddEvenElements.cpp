#include<iostream>
using namespace std;

void evenOddElemnts(int arr[], int size) {
    int evenCount = 0, oddCount = 0;
    for(int i = 0; i < size; i++) {
        if(arr[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    int evenArr[evenCount] = {0};
    int oddArr[oddCount] = {0};
    for(int i = 0, j = 0 , k = 0; i < size; i++) {
        if(arr[i] % 2 == 0) {
            evenArr[j] = arr[i];
            j++;
        } else {
            oddArr[k] = arr[i];
            k++;
        }
    }

    cout<<"Even elements : ";
    for(int i = 0; i < evenCount; i++) {
    cout<<evenArr[i]<<" "; 
    }
    cout<<endl;
    cout<<"Odd elements : ";
    for(int i = 0; i < oddCount; i++) {
        cout<<oddArr[i]<<" "; 
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

    evenOddElemnts(arr, size);

    return 0;
}