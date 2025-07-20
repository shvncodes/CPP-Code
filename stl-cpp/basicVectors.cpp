#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> v;    // Vector ---> Dyanmic array
            //push_back:- Array ke last mai data insert karne ka kaam karte hai
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);
    v.push_back(8);

            //emplace_back:- Array ke last mai data insert karne ka kaam karte hai
    v.emplace_back(9);

                        // Print the element of array-
    cout<<"Before any method initial array:- ";
    for(int i = 0; i < v.size(); i++) {
        cout<<v[i]<<" ";
    }
    cout<<endl;

            //pop_back:- Array ke last se data ko remove karvane ka kaam karte hai
    v.pop_back();

            //We can change the value at any index:-
    v[4] = 99;

            //Index value:-
    cout<<"Value at index 2: "<<v[2]<<endl;
    cout<<"Value at index 3: "<<v.at(3)<<endl;

            //Front and Back element:-
    cout<<"Front element of array: "<<v.front()<<endl;
    cout<<"Back element of array: "<<v.back()<<endl;

            //erase:- To remove any element from the array 
                    //(Its change the size of an array but not capacity)
    v.erase(v.begin()); // It remove the element at index 0;
    v.erase(v.begin() + 2); // It remove the element at index 2; 
    // It remove the range of element from start to end (start include but end not include);
    v.erase(v.begin() + 1,v.begin() + 3 );

            //insert:- To insert any value at specific position
    v.insert(v.begin()+3, 101);  // (position, value)

            //clear:- It remove all the elements from array (size: 0, capacity: remains same)
    v.clear();

                //empty:- Return true ya false agr humara array empty hoga to true(1) return karega
                                    // otherwise false(0) return karega
    cout<<"Is array is empty: "<<v.empty()<<endl;

                                    // Print the element of array-
    cout<<"After all methods final array:- ";
    for(int i = 0; i < v.size(); i++) {
        cout<<v[i]<<" ";
    }
    cout<<endl;

                                    // Size & Capacity :-
            // size => number of elements in the vector
            // capacity => total reserved space of the vector

            // initial capacity = 0
            // then 1
            // then 2
            // then 4
            // then 8

    cout<<"Size of array: "<<v.size()<<endl;
    cout<<"Capacity of array: "<<v.capacity()<<endl;              

    return 0;
}