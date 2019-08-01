#include<iostream>
#include<bits/stdc++.h>

using namespace std;

string convert(string s,int numRows){
    int len = s.length();
    if(numRows == 1) return s;
    string res;
    int t = 0;
    int s2=(2*numRows)-2,s1 = s2-2;
    for(int i=0; i<numRows;++i){
        int j = i;
        if(i==0 or i==numRows-1){
            while(j < len){
                res.push_back(s[j]);
                j += s2;
            }
        }
        else{
            while(j < len){
                res.push_back(s[j]);            
                if((j+s1) < len) res.push_back(s[j+s1]);
                j = j + s2;
            }
            s1 = s1-2;
        }
        
    }
    return res;
}
int main(){
    string s;
    int rows;
    cin >> s >> rows;
    cout << convert(s,rows) << '\n';
    return 0;
}