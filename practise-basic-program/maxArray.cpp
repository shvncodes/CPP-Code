#include<iostream>
using namespace std;

int maximumValueInArray(int array[], int size) {
    int maxi = array[0];
    for(int i = 1; i < size; i++) {
        if(maxi < array[i]) {
            maxi = array[i];
        }
    }
    return maxi;
}

int main() {
    int array[] = {-12, -34, -23, 0, -1};

    cout<<maximumValueInArray(array, 5);

    return 0;
}