#include<iostream>
using namespace std;

int main() {
    char ch;
    cout<<"Enter the character: ";
    cin>>ch;

    if(ch >= 'A' && ch <= 'Z') {
        cout<<"This is uppercase letter.";
    } else if(ch >= 'a' && ch <= 'z') {
        cout<<"This is lowercase letter.";
    } else if(ch >= 0 && ch <= 9) {
        cout<<"This is numeric.";
    } else {
        cout<<"Unknown character.";
    }
    return 0;
}