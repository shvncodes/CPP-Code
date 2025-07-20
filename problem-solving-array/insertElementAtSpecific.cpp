#include<iostream>
using namespace std;

void newArray1(int arr[], int size, int num, int position) {
    int temp = arr[position]; 
    arr[position] = num;

    for (int i = position+1; i <= size; i++) {
        int currNum = arr[i];
        arr[i] = temp;
        temp = currNum;
       
    }

    for(int i = 0; i <= size; i++) {
        cout<<arr[i]<<" ";
    }
}

void newArray2(int arr[], int size, int num, int position) {
    int end = size;
    while(end != position) {
        arr[end] = arr[end-1];
        end--;
    }
    arr[end] = num;
    
    // for(int i = (size-1); i >= 0 ; i--) {
    //     arr[i+1] = 0;
    //     if(i != position) {
    //         arr[i+1] = arr[i];
    //     } else if(i == position) {
    //         arr[i+1] = arr[i];
    //         arr[i] = num;
    //         break;
    //     }
    // }

    for(int i = 0; i <= size; i++) {
        cout<<arr[i]<<" ";
    }
}

int main() {
    int size;
    cout<<"Enter the size of array: ";
    cin>>size;

    int arr[100];
    cout<<"Enter the elements of array: ";
    for(int i = 0; i < size; i++) {
        cin>>arr[i];
    }

    int num;
    cout<<"Enter the number to insert in array: ";
    cin>>num;

    int position;
    cout<<"Enter the position at which the new element should be inserted: ";
    cin>>position;

    if(position >= size) {
        cout<<"Invalid position.";
        return 1;
    }

    newArray2(arr, size, num, position);

    return 0;
}