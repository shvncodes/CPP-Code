#include<iostream>
#include<climits>
using namespace std;

int minimumElementOfArray(int arr[], int size) {
    int mini = INT_MAX;
    for(int i = 0; i < size; i++) {
        mini = min(mini, arr[i]);
        
        // if(mini > arr[i]) {
        //     mini = arr[i];
        // }
    }
    return mini;
}
 
int main() {
    int size;
    cout<<"Enter the size of an arry: ";
    cin>>size;
    int arr[100];
    for(int i = 0; i < size; i++) {
        cin>>arr[i];
    }

    cout<<"Minimum value of array: "<<minimumElementOfArray(arr, size);
    return 0;
}