#include<iostream>
#include<climits>
using namespace std;

int main() {
    int array[] = {5,4,3,2,1};
    int size = 5;

    int max = INT_MIN;
    for(int i = 0; i < size; i++) {
        if(max < array[i]) {
            max = array[i];
        }
    }

    int secondMax = INT_MIN;
    for(int i = 0; i < size; i++) {
        if(array[i] != max && secondMax < array[i]) {
            secondMax = array[i];
        }
    }
    
    cout<<secondMax;
    return 0;
}