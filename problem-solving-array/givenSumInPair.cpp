#include<iostream>
using namespace std;

void givenSumInPair(int arr[], int size, int targetSum) {
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            if(i != j && (arr[i] + arr[j] == targetSum)) {
                cout<<"Sum of "<<arr[i]<<" and "<<arr[j]<<" equals to "<<targetSum<<endl;
                break;
            }
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

    int targetSum;
    cout<<"Enter the target the sum: ";
    cin>>targetSum;

    givenSumInPair(arr, size, targetSum);

    return 0;
}