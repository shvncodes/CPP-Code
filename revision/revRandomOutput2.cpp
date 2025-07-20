#include<iostream>
using namespace std;

int main() {
                // Output 1 -
    // for(int i = 0; i <= 5; i++) {
    //     cout<<i<<" ";
    //     i++;
    // }

                // Output 2 -   (Infinite  loop)
    // for(int i = 0; i <= 5; i--) {
    //     cout<<i<<" ";
    //     i++;
    // }

                // Output 3 -   
    //  for(int i = 0; i <= 15; i += 2) {
    //     cout<<i<<" ";
    //     if(i & 1) {
    //         continue;
    //     }
    //     i++;
    // }

    //             // Output 4 -  
    //  for(int i = 0; i < 5; i++) {
    //     for(int j = 1; j <= 5; j++) {
    //         cout<<i<<" "<<j<<endl;
    //     }
    // }

                     // Output 5 -  
     for(int i = 0; i < 5; i++) {
        for(int j = 1; j <= 5; j++) {
            if(i + j == 7) {
                break;
            }
            cout<<i<<" "<<j<<endl;
        }
    }
    return 0;
}