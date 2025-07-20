#include<iostream>
using namespace std;

int maxElement(int array[], int size) {
    int max = array[0];
    for(int i = 1; i < size; i++) {
        if(max < array[i]) {
            max = array[i];
        }
    }
    return max;
}

int minElement(int array[], int size) {
    int min = array[0];
    for(int i = 1; i <  size; i++) {
        if(min > array[i]) {
            min = array[i];
        }
    }
    return min;
}

int main() {
    int array[] = {15, 10, 91, 30, 0, -5};

    cout<<"Largest Element - "<<maxElement(array, 6)<<endl;
    cout<<"Smallest Element - "<<minElement(array, 6);

    return 0;
}