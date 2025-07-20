#include<iostream>
using namespace std;
int main() {

    enum students { Shivani, Nisha, Simran, Trisha };
        cout<<Shivani<<endl;
        cout<<Simran<<endl;

    enum Colours { Red = 5, Green = 10, Blue = -6, Pink = 0 };
        cout<<Red<<endl;
        cout<<Pink<<endl;
        cout<<Blue;  

    enum Meal { Breakfast, Lunch, Dinner};
    cout<<Breakfast<<endl;
    cout<<(Dinner == 2)<<endl;
    cout<<(Lunch == 0);

    return 0;
}