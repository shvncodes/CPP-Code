#include<iostream>
using namespace std;

int duplicateElementsCount(int arr[], int size) {
    int freq[101] = {0};
    int count = 0;

    for(int i = 0; i < size; i++) {
        int element = arr[i];
        freq[element]++;
    }

    for(int j = 0; j < 101; j++) {
        if(freq[j] > 1) {
            cout<<j<<" appears "<<freq[j]<<" times"<<endl;
            count++;
        }
    }
    return count;
}

int main() {
    int size;
    cout<<"Enter the size of array : ";
    cin>>size;

    int arr[100];
    cout<<"Enter the elements of array : ";
    for(int i = 0; i < size; i++) {
        cin>>arr[i];
    }

    cout<<"Duplicate elements are: ";
    cout<<endl<<"Number of times it repeat: "<<duplicateElementsCount(arr, size);

    return 0;
}