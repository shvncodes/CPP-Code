#include<iostream>
using namespace std;

int main() {
    char letter;
    cout<<"Enter the single alphabetic character: ";
    cin>>letter;

    if(letter < 'A' || letter >'z') {
        cout<<"Invalid character.";
        return 0;
    }

    if(letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u'
        || letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U' ) {
        cout<<letter<<" is vowel. ";
    } else {
        cout<<letter<<" is consonant.";
    }

    return 0;
}