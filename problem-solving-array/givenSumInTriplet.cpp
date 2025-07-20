#include<iostream>
using namespace std;

void givenSumInTriplet(int arr[], int size, int targetSum) {
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            for(int k = 0; k < size; k++) {
                if(i != j && j != k && (arr[i]+arr[j]+arr[k]) == targetSum) {
                    cout<<"Sum of "<<arr[i]<<" , "<<arr[j]<<"and "<<arr[k]<<" equals to "<<targetSum<<endl;
                break;
                }
            }
        }
    }
}

int main() {
    int size;
    cout<<"Enter the size of an array: ";
    cin>>size;

    int arr[100];
    cout<<"Enter the elements of array: ";
    for(int i = 0; i < size; i++) {
        cin>>arr[i];
    }

    int targetSum;
    cout<<"Enter the target sum: ";
    cin>>targetSum;

    givenSumInTriplet(arr, size, targetSum);
    return 0;
}