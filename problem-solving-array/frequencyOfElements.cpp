#include<iostream>
using namespace std;

void frequencyOfElements(int arr[], int size) {
    int freq[100] = {0};
    for(int i = 0; i < size; i++) {
        int element = arr[i];
        freq[element]++;
    }

    for(int i = 0; i < 100; i++) {
        if(freq[i] > 0) {
            cout<<i<<" : "<<freq[i]<<" times."<<endl;
        } 
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

    frequencyOfElements(arr, size);

    return 0;
}