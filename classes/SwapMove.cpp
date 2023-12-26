#include <iostream>
#include <string>
#include <vector>
using namespace std;

void swap1(vector<string> &x, vector<string> &y); // Using static_cast
void swap2(vector<string> &x, vector<string> &y); // Using std::move

int main(){
    vector<string> v1 {"Hello", "World"};
    vector<string> v2 {"Goodbye", "World"};
    swap1(v1, v2);
    for (auto x : v1)
        cout << x << " ";
    cout << endl;
    for (auto x : v2)
        cout << x << " ";
    cout << endl;

    swap2(v1, v2);
    for (auto x : v1)
        cout << x << " ";
    cout << endl;
    for (auto x : v2)
        cout << x << " ";
    cout << endl;

    return 0;
}

void swap1(vector<string> &x, vector<string> &y){
    vector<string> tmp = static_cast<vector<string> &&>(x);
    x = static_cast<vector<string> &&>(y);
    y = static_cast<vector<string> &&>(tmp);
}

void swap2(vector<string> &x, vector<string> &y){
    vector<string> tmp = std::move(x);
    x = std::move(y);
    y = std::move(tmp);
}