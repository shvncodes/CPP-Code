#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool cmp(pair<int,int> x, pair<int,int> y) {
    if(x.first == y.first) {
        return x.second > y.second;
    } else {
        return x.first < y.first;
    }
}

int main() {
    // int n;
    // cout<<"Enter the size of array: ";
    // cin>>n;

    //                          // FOR VECTOR:

    // vector<int> v(n);
    // cout<<"Enter the elements of array: ";
    // for(int  i = 0; i < n; i++) {
    //     cin>>v[i];
    // }

    // for ascending order: 
    // sort(v.begin(), v.end());

    // for descending order:
    // sort(v.begin(), v.end(), greater<int>());

    // for(int i = 0; i < n; i++) {
    //     cout<<v[i]<<" ";
    // }

                                // FOR ARRAY: 

    // int arr[n];
    // cout<<"Enter the elements of array: ";
    // for(int i = 0; i < n; i++) {
    //     cin>>arr[i];
    // }

    // for ascending order: 
    // sort(arr, arr+n);


    // for descending order: 
    // sort(arr, arr+n, greater<int>());

    // for(int i = 0; i < n; i++) {
    //         cout<<arr[i]<<" ";
    // }



    pair<int,int> a[] = {
        {2,1}, {-3,40}, {05,60}, {2,0}, {10,-1}, {5, 70}
    };
    sort(a, a+6, cmp);

    for(int i=0;i<6;i++) cout<<a[i].first<<" "<<a[i].second<<endl;

    return 0;
}

