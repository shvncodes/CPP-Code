#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
                    
    // char ch = 'A';
    // for(int i=0;i<n;i++) {
    //     for(int j=0;j<n;j++) {
    //         cout<<ch<<" ";
    //     }
    //     ch++;
    //     cout<<endl;
    // }
                            //OR
    // int i = 1;
    // char ch = 'A';
    // while(i <= n) {
    //     int j = 1;
    //     while(j <= n) {
    //         cout<<ch<<" ";
    //         j++;
    //     } 
    //     cout<<"\n";
    //     i++;
    //     ch = ch + 1;
    // }

            //Opposite from above pattern-

    for(int i = 1; i <= n; i++) {
        char ch = 'A';
        for(int j = 1; j <= n; j++) {
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }   

    return 0;
}