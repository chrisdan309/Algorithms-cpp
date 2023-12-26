#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    string str = "Hell";
    string &lstr = str; // lvalue reference
    string &&rstr = str+""; // rvalue reference
    cout << str << endl;

    vector<int> v1 {1, 2, 3};

    for (auto x : v1)
        x++;

    for (auto x : v1)
        cout << x << " ";
    cout << endl;

    for (auto &x : v1) // lvalue reference 
        x++;

    for (auto x : v1)
        cout << x << " ";
    cout << endl;

    return 0;
}