#include<iostream>
using namespace std;

int sumOfElementsInArray(int array[], int size) {
    int sum = 0;
    for(int i = 0; i < size; i++) {
        sum += array[i];
    }
    return sum;
}

int main() {
    int array[] = {10, 20, 30};
    
    cout<<sumOfElementsInArray(array, 3);

    return 0;
}