#include<iostream>
using namespace std;

int isNumPresent(int arr[], int num, int size) {
    for(int i = 0; i < size; i++) {
        if(num == arr[i]) {
            return true;
        }
    }
    return false;
}

int main() {
    int arr[] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,15,16,17,19,20};
    int size = sizeof(arr)/sizeof(int);
    int num;
    cin>>num;

    bool yes = isNumPresent(arr, num, size);
    if(yes) {
        cout<<"Element is present in array.";
    } else {
        cout<<"Element is not present in array.";
    }
    return 0;
}