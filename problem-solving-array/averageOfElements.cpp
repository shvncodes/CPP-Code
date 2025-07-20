#include<iostream>
using namespace std;

double averageOfArrayElements(double arr[], int size) {
    double sum = 0;
    for(int i = 0; i < size; i++) {
        sum += arr[i];
    }
    double avg = sum / size;

    return avg;
}

int main() {
    int size;
    cout<<"Enter the size of array: ";
    cin>>size;

    double arr[100];
    cout<<"Enter the elements of array: ";
    for(int i = 0; i < size; i++) {
        cin>>arr[i];
    } 

    cout<<"Average of elements of array: "<<averageOfArrayElements(arr, size);
    return 0;
}