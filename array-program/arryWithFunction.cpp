#include<iostream>
using namespace std;

// void printElementsOfArray(int arr[], int size) {
//         for(int i = 0; i < size; i++) {
//             cout<<"Value of "<<i<<" index: "<<arr[i]<<endl;
//         } 
// }

void printElementsOfArray(char arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout<<"Value of "<<i<<" index: "<<arr[i]<<endl;
    } 
}

int main() {
    // int arr[15] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    // int size = sizeof(arr)/sizeof(int);
    // printElementsOfArray(arr, size);

    char arr[15] = {'A','B','C','D','E','F','G','H','I','J','K','L','M',' '};
    int size = sizeof(arr)/sizeof(char);
    printElementsOfArray(arr, size);

    return 0;
}