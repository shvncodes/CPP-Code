#include<iostream>
#include<climits>
using namespace std;

int maximumFrequency(int arr[], int size) {
    int maxi = INT_MIN;
    for(int i = 0; i < size; i++) {
        if(maxi < arr[i]) {
            maxi = arr[i];
        }
    }
    return maxi;
}

void mostFrequentElement(int arr[], int size) {
    int freq[100] = {0};
    for(int i = 0; i < size; i++) {
        int element = arr[i];
        freq[element]++;
    }

    int maxFreq = maximumFrequency(freq, size);

    for(int i = 0; i < 100; i++) {
        if(freq[i] == maxFreq) {
            cout<<"Most frequent element: "<<i<<" (appears "<<freq[i]<<" times)"<<endl;
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

    mostFrequentElement(arr, size);

    return 0;
}