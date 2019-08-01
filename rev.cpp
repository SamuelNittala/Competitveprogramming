#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    string  s;
    cin >> s;
    reverse(s.begin(),s.end());
    string t;
    t.push_back(s[0]);
    t.push_back(' ');
    t.push_back(s[1]);
    cout << t << '\n';
    return 0;
}