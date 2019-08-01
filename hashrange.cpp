#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    map<int,bool> m;
    vector<int> v;
    int l;
    cin >> l;
    for(int i=0 ; i<l; ++i){
        int t;
        cin >> t;
        v.push_back(t);
        m[t] == true;
    }
    for(int i=0;i<v.size();++i){
        vector<int> res;
        if(m[v[i]] == true){
            while(m[v[--i]] == true){
                res.push_back(v[i]);            }
        }
    }
}