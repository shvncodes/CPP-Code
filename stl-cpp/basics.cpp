#include<iostream>
#include<vector>
#include<list>
using namespace std;


vector<int> solve(vector<int> v) {  
    vector<int> ans;
    
    for(int i=0;i<v.size();i++) {
        ans.push_back(v[i]*10);
    }

    return ans;
}

int main() {
//     vector<int> vec;

//     vec.push_back(1);
//     vec.push_back(2);
//     vec.push_back(3);

//     cout<<vec.size()<<endl;
//     cout<<vec.capacity()<<endl;


// vector<int> v; // int v[0]
// v.push_back(1); // int v[1] = {1};
// v.push_back(2); // int v[2] = {1,2}


// // size => number of elements in the vector
// // capacity => total reserved space of the vector


// // initial capacity = 0
// // then 1
// // then 2
// // then 4
// // then 8


// vector<int> vecA(3, 7979); // int vecA[5] = {1}
// vecA.push_back(100); 
// vecA.push_back(100); 
// vecA.push_back(100); 
// vecA.push_back(100); 
// // vecA[0] = 101;
// // vecA.push_back(100);


// cout<<endl<<"vecA: "<<vecA.capacity();

    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    vector<int> v(n);
    // v.push_back(1);
    // v.push_back(2);
    // v.push_back(3);
    // v.push_back(4);
    // v.push_back(5);
    for(int i=0;i<n;i++) {
        cin>>v[i];
    }

    list<int> ls(10);

    pair<int,char> p;
    p.first = 10;
    p.second = 'A';

    pair<vector<int>,int> pv;
    pv.first = v;
    pv.second = 100;

    pair<pair<int,int>, int> pp;

    pp.first = make_pair(10, 11);
    pp.second = 100;

    cin>> pp.second;




    vector<int> a = solve(v);
    for(int i=0;i<a.size();i++) {
        cout<<a[i]<<" ";
    }


    return 0;
}