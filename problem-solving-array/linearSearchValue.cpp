#include<iostream>
using namespace std;

void linearSearchValue(int arr[], int size, int targetNum) {
    bool isTargetNumFound = false;
    for(int i = 0; i < size; i++) {
        if(arr[i] == targetNum) {
            isTargetNumFound = true;
        }
    }
    if(isTargetNumFound) {
        cout<<targetNum<<" found at indices: ";
    } else {
        cout<<targetNum<<" not found.";
        return ;
    }

    for(int i = 0; i < size; i++) {
        if(arr[i] == targetNum) {
            cout<<i<<" ";
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
        cin>> arr[i];
    } 

    int targetNum;
    cout<<"Enter the number to find out: ";
    cin>>targetNum;

    linearSearchValue(arr, size, targetNum);
    return 0;
}