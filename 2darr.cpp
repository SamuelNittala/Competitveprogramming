#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    vector< vector<int> > vv;
    vector<int> v{12,13,14};
    vector<int> v1{14,15,16};

    vv.push_back(v1);
    vv.push_back(v);

    cout << vv.size() << '\n';
    return 0;
}