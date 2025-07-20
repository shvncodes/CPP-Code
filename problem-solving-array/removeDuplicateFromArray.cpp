#include<iostream> 
using namespace std;

void removeDuplicateElement(int arr[], int size) {
    int newArr[size];
    int freq[100] = {0};
    
    for(int i = 0; i < size; i++) {
        int element = arr[i];
        freq[element]++;
    }

    int x = 0;
    for(int i = 0; i < 100; i++) {
        if (freq[i] > 0) {
            newArr[x] = i;
            x++;
        }
    }

    for(int j = 0; j < x; j++) {
        cout<<newArr[j]<<" ";
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

    removeDuplicateElement(arr, size);

    return 0;
}