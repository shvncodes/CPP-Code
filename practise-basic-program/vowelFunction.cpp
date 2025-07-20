#include<iostream>
using namespace std;

int countVowel(char array[], int size) {
    int count = 0;
    for(int i = 0; i < size; i++ ) {
        char ch = array[i];
        if(ch == 'a'|| ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'
             ||ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' )
            {
                count++;
             }
    } 
    return count;
}

int main() {
    char array[] = {'r', 'b', 'p', 'A', 'I', 'R'};
    cout<<countVowel(array, 6);
    return 0;
}