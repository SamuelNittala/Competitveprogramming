#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;
    unordered_set<char> slide;
    int l = s.length();
    int res = 0;
    int i=0,j=0;
    while(i<l && j<l){
        if(slide.find(s[j]) == slide.end()){
            slide.insert(s[j++]);
            res = max(res,j-i);
        }
        else{
            slide.erase(s[i]);
            i++;
        }
    }
    cout << res << '\n';
    return 0;
}