#include<iostream>
using namespace std;

int main() {
    int array[] = {1,2,3,4,5,6};
    int size = sizeof(array)/sizeof(int);

    cout<<"size = "<<size<<endl;

    int temp = array[0];
    for(int i = 0, j = (i+1); i < size; i++) {
        if(i < (size-1))  {
            array[i] = array[j];   
        }
        if(i == (size-1)) {
           array[(size - 1)] = temp;
        }
        j++;
    } 

    // int temp = array[0];
    // for(int i=0;i<size-1;i++) {
    //     array[i] = array[i+1];
    // }
    // array[size-1] = temp;


    // array print
    for(int i = 0; i < size; i++) {
        cout<<array[i]<<" ";
    }
    
    return 0;
}