#include<iostream>
using namespace std;

int countEven(int array[], int size) {
    int countEven = 0;
    for(int i = 0; i < size; i++) {
        if(array[i] % 2 == 0) {
            countEven++;
        }
    }
    return countEven;
}

int countOdd(int array[], int size) {
    int countOdd = 0;
    for(int i = 0; i < size; i++) {
            if(array[i] % 2 == 1) {
            countOdd++;
        }
    }
    return countOdd; 
}

int main() {
    int array[] = {1, 0, 5};
    cout<<"Total number of even elemnets: "<<countEven(array, 3)<<endl;
    cout<<"Total number of odd elemnets: "<<countOdd(array, 3)<<endl;

    return 0;
}