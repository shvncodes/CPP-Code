#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> v;
                                // Input and print a vector - 

    int n ;
    cout<<"Enter the size of array: ";
    cin>>n;

    vector<int> vec(n);
    cout<<"Enter the elements of array: ";
    for(int i = 0; i < n; i++) {
        cin>>vec[i];
    }
                                // Print vector :-
    for(int i = 0; i < n; i++) {
        cout<<vec[i]<<" ";
    }


    return 0;
}