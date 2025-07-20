#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> v = {1,2,3,4,5,6,7};
                //v.begin() :- ye 0 index ke address ko pointout karta hai
                    //*(v.begin()) :- ye us address ki value deta hai
    cout<<"Value at index 0: "<< *(v.begin())<<endl;   
    cout<<"Value at index 2: "<< *(v.begin() + 2)<<endl;

                //v.end() :- ye last index ke next wale ke address ko pointout karta hai
                        //*(v.end()) :- ye us address ki value deta hai(garbage value)
    cout<<"Value at index 7: "<< *(v.end())<<endl;   
    cout<<"Value at index 9: "<< *(v.end() + 2)<<endl;

                //v.rbegin() :- ye array ke last ke 0 index ke address ko pointout karta hai
                    //*(v.rbegin()) :- ye us address ki value deta hai
    cout<<"Value at index 0: "<< *(v.rbegin())<<endl;   
    cout<<"Value at index 2: "<< *(v.rbegin() + 2)<<endl;

                //v.rend() :- ye first index ke aage wale ke address ko pointout karta hai
                        //*(v.rend()) :- ye us address ki value deta hai(garbage value)
    cout<<"Value at index 7: "<< *(v.rend())<<endl;   
    cout<<"Value at index 9: "<< *(v.rend() + 2)<<endl;
    return 0;
}