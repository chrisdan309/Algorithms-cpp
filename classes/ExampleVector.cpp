#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    vector<int> squares (100); // 100 elements with value 0
    for (int i = 0; i < squares.size(); i++)
        squares[i] = i * i;
    
    // for (int i = 0; i < squares.size(); i++)
    //     cout << i << " " << squares[i] << endl;

    // Different ways to iterate over a vector or array
    int sum = 0;
    for (int i = 0; i < squares.size(); i++)
        sum += squares[i];

    sum = 0;
    for (int x : squares)
        sum += x;

    sum = 0;
    for (auto x : squares)
        sum += x;
    
    vector<int> daysInMonth1 {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    vector<int> daysInMonth2 {12}; // 1 element with value 12
    vector<int> daysInMonth3 (12); // 12 elements with value 0

    for (int x : daysInMonth1)
        cout << x << " ";
    cout << endl;

    for (int x : daysInMonth2)
        cout << x << " ";
    cout << endl;

    for (int x : daysInMonth3)
        cout << x << " ";
    cout << endl;

    string s1 = "Hello";
    string s2 = "World";
    string s3 = s1 + " " + s2;
    cout << s3 << endl;

    s2 = "Hello";
    cout << (s1 == s2) << endl;
    return 0;
}