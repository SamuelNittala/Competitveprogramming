#include<iostream>
#include<bits/stdc++.h>

using namespace std;

map<int,vector<char>> m;

int main(){
    int t;
    cin >> t;
    while(t--){
        int c;
        string inp;
        cin >> c >> inp;
        int curr_col = 0;
        for(auto ch:inp){
            if(ch >= 'a' and ch <= 'z'){
                vector<char> tmp = m[curr_col];
                tmp.push_back(ch);
                sort(tmp.begin(),tmp.end());
                m[curr_col] = tmp;
            }
            else if(ch == '('){
                curr_col--;
            }
        }
    }
    return 0;
}