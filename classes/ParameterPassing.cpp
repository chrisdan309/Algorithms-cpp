#include <iostream>
#include <vector>
using namespace std;

double average(double a, double b); // call by value
void swap(int &a, int &b); // call by lvalue reference
string randomItem(const vector<string> &v); // call by reference to a constant
string randomItem(vector<string> &&v); // call by rvalue reference

int main(){
    vector<string> v1 {"Hello", "World"};
    cout << randomItem(v1) << endl;
    cout << randomItem({"Hello","World"}) << endl;
    return 0;
}

double average(double a, double b){
    return (a + b) / 2;
}

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

string randomItem(const vector<string> &v){
    int index = rand() % v.size();
    return v[index];
}

string randomItem(vector<string> &&v){
    int index = rand() % v.size();
    return v[index];
}