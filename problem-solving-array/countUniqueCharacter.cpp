#include<iostream>
using namespace std;

int uniqueCharactersCounts(char arr[], int size) {
    int freq[26] = {0};
    int count = 0;

    for(int i = 0; i < size; i++) {
        int element = arr[i] - 'a';
        freq[element]++;
    }

    for(int j = 0; j < 26; j++) {
        if(freq[j] == 1) {
            char ch = (j+'a');
            cout<<ch<<" ";
            count++;
        }
    }
    return count;
}

int main() {
    int size;
    cout<<"Enter the size of array: ";
    cin>>size;

    char arr[26];
    cout<<"Enter the elements of array: ";
    for(int i = 0; i < size; i++) {
        cin>>arr[i];
    }

    cout<<"Unique characters are: ";
    cout<<endl<<"Number of unique characters: "<<uniqueCharactersCounts(arr, size);

    return 0;
}