#include "Square.h"
#include <iostream>
#include <vector>
using namespace std;

template <typename Comparable>
const Comparable &findMax(const vector<Comparable> &a);

int main(){
    vector<Square> v1{Square{1.0}, Square{2.0}, Square{3.0}};
    cout << "Max of v1 is " << findMax(v1) << endl;
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