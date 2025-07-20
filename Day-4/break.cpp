#include<iostream>
using namespace std;

int main() {
                     // Print 0 to 10 -
        for ( int a=0; a<=20; a++ ) {
            cout<<a<<endl;   // Break se pehle value print ho rahi hai.
           if (a==10){
            break;           // Break statement stops the entire process of the loop.
           } 
        }

                     // Print 0 to 9
        for ( int a=0; a<=20; a++ ) {
           if (a==10){
            break;  
           } 
           cout<<a<<endl;  //Break ke baad value print ho rahi hai.
        }
    return 0;
}