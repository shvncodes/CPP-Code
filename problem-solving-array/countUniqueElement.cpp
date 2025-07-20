#include<iostream>
using namespace std;

int uniqueElementsCount1(int arr[], int size) {
    int count = 0;

    for(int i = 0; i < size; i++) {
        bool isUnique = true;
        for(int j = 0; j < size; j++) {
            if(i != j && arr[i] == arr[j]) {
                isUnique = false;
                break;
            }
        }
        if(isUnique) {
            cout<<arr[i]<<" ";
            count++;
        }
    }
    return count;
}


// freq[101] => 0
// loop to the array elements
// for each element, freq[element]++;
// freq == 1 -> unique elems -> print
// count++ => total unique elems

int uniqueElementsCount2(int arr[], int size) {
    int freq[101] = {0};
    int count = 0;

    for(int i = 0; i < size; i++) {
        int element = arr[i];
        freq[element]++;
    }
    
    for(int j = 0; j < 101; j++) {
        if(freq[j] == 1) {
            cout<<j<<" ";
            count++;
        }
    }
    
    return count;
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

    cout<<"Unique elements are: ";

    // uniqueElementsCount2(arr, size);

    cout<<endl<<"Number of unique elements: "<<uniqueElementsCount2(arr, size);

    return 0;
}