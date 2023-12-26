#include <iostream>
#include <string>
#include <vector>
using namespace std;

string randomItem1(const vector<string> &v);
const string &randomItem2(const vector<string> &v); // return by constant reference

int main(){
    vector<string> v1 {"Hello", "World"};
    
    string item1 = randomItem1(v1); // copy
    const string &item2 = randomItem2(v1); //no copy
    cout << item1 << endl;
    cout << item2 << endl;

    return 0;
}

string randomItem1(const vector<string> &v){
    int index = rand() % v.size();
    return v[index];
}

const string &randomItem2(const vector<string> &v){
    int index = rand() % v.size();
    return v[index];
}