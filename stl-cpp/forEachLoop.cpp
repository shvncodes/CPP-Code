#include<iostream>
#include<vector>
#include<list>
using namespace std;

int main() {
    vector<int> a = {1,2,3,4,5,6,7,8,9,10};

/* "for each loop" hum bs vector aur list ke liye use karte hai 
      - Ye hum tab use karte hai jab hume index ka kaam nhi hota aur pura last tak loop chalana hota hai 
 */
    cout<<"All elements of array: ";
    // is loop ko "for each loop" bolte hai
    for(int data: a) { // for(int i=0;i<a.size();i++)
                       // data = a[i];
        cout<<data<<" ";
    }

    int sum = 0;
    for(int data: a) { 
        sum += data;
    }
    cout<<endl<<"Sum of all elements in array: "<<sum<<endl;

    list<char> l = {'a','b','c','d','e'};
    cout<<"All elements of list: ";
    for(char val: l) {
        cout<<val<<" ";
    }

    return 0;
}