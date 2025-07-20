#include<iostream>
using namespace std;

bool isPrimeOrNot(int num) {
    for(int i = 2; i < num; i++) {
        if(num % i == 0) {
            return false;
        }
    }
    return true;
}

void primeNumbersCount(int arr[], int size) {
    int count = 0;
    for(int i = 0; i < size; i++) {
        bool isPrime = isPrimeOrNot(arr[i]);

        if(isPrime) {
            cout<<arr[i]<<" ";
            count++;
        }
    } 
    cout<<endl;
    cout<<"Number of prime elements: "<<count;
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

    cout<<"Primes in the array: ";
    primeNumbersCount(arr, size);

    return 0;
}