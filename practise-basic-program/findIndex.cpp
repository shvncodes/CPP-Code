#include<iostream>
using namespace std;

int findIndex(int array[], int size, int digit) {
    for(int i = 0; i < size; i++) {
       if(array[i] == digit) {
            return i;
       }
    } 
    return -1;
}

int main() {
    int array[] = {1, 2, 3, 4, 5, 6};
    int digit = 0;
    cout<<findIndex(array, 6, digit);
    return 0;
}