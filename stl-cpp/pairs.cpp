#include<iostream>
#include<vector>
using namespace std;

int main() {
    // pair<char, int> p = {'A',3};
    // cout<<p.first<<endl;
    // cout<<p.second<<endl;
    // cout<<endl;

    // pair<int,pair<char, int>> a = {1, {'B',5}};
    // cout<<a.first<<endl;        // 1
    // cout<<a.second.first<<endl; // 'B'
    // cout<<a.second.second<<endl;// 5

    vector<pair<int, int>> v = {{1,2}, {2,3}, {3,4}, {4,5}, {5,6}};
    v.push_back({6,7});

    for(pair<int, int> i : v) {
        cout<<i.first<<" "<<i.second<<endl;
    }
    
    return 0;
}