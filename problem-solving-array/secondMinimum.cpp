#include<iostream>
#include<climits>
using namespace std;

int minimumElement(int arr[], int size) {
    int mini = INT_MAX;
    for(int i = 0; i < size; i++) {
        if(mini > arr[i]) {
            mini = arr[i];
        }
    }
    return mini;
}   

int secondMinimumElement(int arr[], int size) {
    int mini = minimumElement(arr, size);
    int secondMini = INT_MAX;

    for(int j = 0; j < size; j++) {
        if(mini != arr[j] && secondMini > arr[j] && secondMini > mini) {
            secondMini = arr[j];
        }
    }

    if (secondMini == INT_MAX) {
        return -1;
    }
    
    return secondMini;
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

    cout<<"Second minimum element: "<<secondMinimumElement(arr, size);

    return 0;
}