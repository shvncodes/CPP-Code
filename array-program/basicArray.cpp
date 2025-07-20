#include<iostream>
using namespace std;

int main() {
                //Declaring and Indexing of an array:-  
    // int arr[5];
    // cout<<"Value at 0 index: "<<arr[0]<<endl;
    // cout<<"Value at 1 index: "<<arr[1]<<endl;
    // cout<<"Value at 2 index: "<<arr[2]<<endl;
    // cout<<"Value at 3 index: "<<arr[3]<<endl;
    // cout<<"Value at 4 index: "<<arr[4]<<endl;
    // cout<<"Value at 5 index: "<<arr[5]<<endl;   // Garbage value


                //Initilazing and Indexing of an array:-
    // int arr[10] = {1,2,3,4,5};
    // for(int i = 0; i < 10; i++) {
    //     cout<<"Value at "<<i<<" index: "<<arr[i]<<endl;
    // }


            //Print all vlues of an array:-
    // int arr[15] = {'A','B','C','D','E','F','G','H','I','J','K','L','M',' '};
    // for(int i = 0; i < 15; i++) {
    //     cout<<"Value at "<<i<<" index: "<<arr[i]<<endl;
    // }


            //Initilazing with zero:-
    int arr[5] = {};
    for(int i = 0; i < 5; i++) {
        cout<<"Value at "<<i<<" index: "<<arr[i]<<endl;
    }

    return 0;
}