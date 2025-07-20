#include<iostream>
using namespace std;

int main() {
                //Us value ko chod kar baki ka loop dubara chalayega
    for ( int a=0; a<=20; a++ ) {   
       if (a==10){
        continue;        //Continue statement only stops the current iteration of the loop.
       } 
       cout<<a<<endl;
    }
    return 0;
}