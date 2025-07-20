#include<iostream>
using namespace std;

int main() {
            
            // Array with for loop -
    // int cls[] = {1,2,3,4,5,6,7,8,9,10,11,12};
    // int roomNo[] = {101,102,103,104,105,106,107,108,109,201,202,203};
    // for (int i=0; i<12; i++) {
    //     cout<<"Class "<<cls[i]<<" students sit in room number - "<<roomNo[i]<<endl;
    // }

            // Array with while loop -
    // char name[] = {'A','B','G','H','N','S'} ;
    // char section[] = {'A','B','C','D','E','F'};
    // int i=0;
    // while(i<=5) {
    //     cout<<"Those students whose name start with letter "<<name[i]<<" are going in section "<<section[i]<<endl;
    //     i++;
    // }

            // Array with do while loop -
    int rollNo1[] = {1,6,11,16,21};
    int rollNo2[] = {5,10,15,20,25};
    int date[] = {21,22,23,24,25};
    int i=0;
    do {
        cout<<"Roll number "<<rollNo1[i]<<" to "<<rollNo2[i]<<" prepare for the match on "<<date[i]<<" January."<<endl;
        i++;
    } while (i<5);

    return 0;
}