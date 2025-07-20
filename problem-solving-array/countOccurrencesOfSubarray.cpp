#include<iostream>
using namespace std;

int countOccurrenceOfSubarray(int arr[], int subarr[], int size1, int size2) {
    int count = 0;
    for(int i = 0; i < size1; i += size2) {
        bool isPatternSame = false;
        for(int j = 0; j < size2; j++) {
            if(arr[j] == arr[i]) {
                isPatternSame = true;
            }
        }
        if(isPatternSame) {
            count++;
        }
    }
    return count;
}

int main() {
    int size1;
    cout<<"Enter the size of large array: ";
    cin>>size1;
    
    int arr[100];
    cout<<"Enter the elements of array: ";
    for(int i = 0; i < size1; i++) {
        cin>>arr[i];
    }

    int size2;
    cout<<"Enter the size of subarray: ";
    cin>>size2;
    
    int subarr[100];
    cout<<"Enter the elements of array: ";
    for(int i = 0; i < size2; i++) {
        cin>>subarr[i];
    }

    if(size2 > size1) {
        cout<<"0";
        return 0;
    }

    cout<<"Occurrences: "<<countOccurrenceOfSubarray(arr, subarr, size1, size2);

    return 0;
}