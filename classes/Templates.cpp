#include "IntCell.h"
#include <iostream>
#include <vector>
using namespace std;

template <typename Comparable>
const Comparable &findMax(const vector<Comparable> &a);

int main(){
    vector<int> v1{1, 2, 3, 4, 5};
    vector<double> v2{1.1, 2.2, 3.3, 4.4, 5.5};
    vector<string> v3{"A", "B", "C", "D", "E"};
    vector<IntCell> v4{IntCell{1}, IntCell{2}, IntCell{3}, IntCell{4}, IntCell{5}};
    
    cout << "Max of v1 is " << findMax(v1) << endl;
    cout << "Max of v2 is " << findMax(v2) << endl;
    cout << "Max of v3 is " << findMax(v3) << endl;
    // cout << "Max of v4 is " << findMax(v4) << endl; operator< not defined for IntCell
    return 0;
}

template <typename Comparable>
const Comparable &findMax(const vector<Comparable> &a){
    int maxIndex = 0;
    for(int i = 1; i < a.size(); i++){
        if(a[maxIndex] < a[i]){
            maxIndex = i;
        }
    }
    return a[maxIndex];
}