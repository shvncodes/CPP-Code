#include<iostream>
using namespace std;
                        // OUTPUT 1 :- 
// void update(int a) {
//     a /= 2;
// }

// int main() {
//     int a = 10;
//     update(a);
//     cout<<a<<endl;
//     return 0;
// }
                        // OUTPUT 2 :-  
int update(int a) {
    a -= 5;
    return a;
}

int main() {
    int a = 15;
    int b = update(a);
    cout<<a<<endl;

    return 0;
}