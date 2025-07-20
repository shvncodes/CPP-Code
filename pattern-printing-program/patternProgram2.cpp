#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
                        // for same number of rows and columns :-
          
        // Print row number -  
    // int i = 1;
    // while(i <= n) {
    //     int j = 1;
    //     while(j <= n) {
    //         cout<<i<<" ";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

            // Print column number -
    // int i = 1;
    // while(i <= n) {
    //     int j = 1;
    //     while(j <= n) {
    //         cout<<j<<" ";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

        // Print last column number first -
    int i = 1;
    while(i <= n) {
        int j = 1;
        while(j <= n) {
            cout<<(n-j+1)<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}
