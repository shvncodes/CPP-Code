#include<iostream>
#include<vector>
using namespace std;

int main() {
    //                     // Way-1 :-
    // vector<int> v = {1,2,3,4,5,6};

    // for(int i = 0; i < v.size(); i++) {
    //     cout<<v[i]<<" ";
    // }


    //                         // Way-2 :- (For same element at all indecies)
    // vector<int> v(10, 1); // v(size, element)
    // v[3] = 99;
    // v[6] = 77;
    // v[9] = 89;

    // for(int i = 0; i < v.size(); i++) {
    //     cout<<v[i]<<" ";
    // }


                            // Way-3 :- (vector2 ko vector1 se intilise karna )
    vector<char> v1 = {'a','b','c','d','e'};
    vector<char> v2(v1);

    for(int i = 0; i < v2.size(); i++) {
        cout<<v2[i]<<" ";
    }

    return 0;
}