#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> vec = {1,2,3,4,5,6,7,8,9,10};
                            //Forward loop:-
    cout<<"Forward loop:- ";

    for(auto i = vec.begin(); i != vec.end(); i++) {
        cout<<*(i)<<" ";
    }
    cout<<endl;
                            //Backward loop:-
    cout<<"Backward loop:- ";

    for(auto it = vec.rbegin(); it != vec.rend(); it++) {
        cout<<*(it)<<" ";
    }

                                                // OR

    //                      //Forward loop:-
    // vector<int>::iterator i;

    // cout<<"Forward loop:- ";

    // for(i = vec.begin(); i != vec.end(); i++) {
    //     cout<<*(i)<<" ";
    // }
    // cout<<endl;
    //                     //Backward loop:-
    // vector<int>::reverse_iterator it;

    // cout<<"Backward loop:- ";

    // for(it = vec.rbegin(); it != vec.rend(); it++) {
    //     cout<<*(it)<<" ";
    // }
  
    return 0;
}