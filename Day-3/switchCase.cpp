#include<iostream>
using namespace std;

int main()
{
     // SECOND WAY TO IMPLEMENT SELECTION STRUCTURE IN PROGRAM - SWITCH CASE STATEMENT // 


    // int studentClass;
    // cin>>studentClass;

    // switch (studentClass) {
    //     case 10:
    //         cout<<"Class 10th Board Result";
    //         break;
    //     case 12:
    //         cout<<"Class 12th Board Result";
    //         break;
    //     default:
    //         cout<<"You're not eligible for Board result";
    // }


    int standard;
    cin>>standard;
    switch(standard) {
        case 9:
            cout<<"Your room number is 101."<<endl;
            break;
        case 10: 
            cout<<"Your room number is 102."<<endl;
            break; 
        case 11:
            cout<<"Your room number is 103."<<endl;
            break;
        case 12:
            cout<<"Your room number is 104."<<endl;
            break;
        default:
            cout<<"Only 9th,10th,11th and 12th standard students are allowed."<<endl;
    }
    return 0;
}