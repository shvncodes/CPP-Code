#include<iostream>
using namespace std;

int main() {
    int array[] = {1, 2, 3};
    int size = 3;
    int start = 0;
    int end = (size-1);
    while(start < end) {
        int temp =  array[start];
        array[start] = array[end];
        array[end] = temp;
            start++;
            end--;
    }
    

    for(int i=0;i<size;i++) {
        cout<<array[i]<<" ";
    }

    return 0;
}