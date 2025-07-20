#include<iostream>
using namespace std;

int occuranceOfTargetNumber(int arr[], int size, int targetNum) {
    int count = 0;
    for(int i = 0; i < size; i++) {
        if(arr[i] == targetNum) {
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
    int targetNum;
    cout<<"Enter the target number: ";
    cin>>targetNum;

    cout<<"Occurance of "<<targetNum<<" in array: "<<occuranceOfTargetNumber(arr, size, targetNum);
    
    return 0;
}