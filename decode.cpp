#include<iostream>
#include<bits/stdc++.h>
#define lli long long int
#define MAX 1000000
using namespace std;
lli* dparr = new lli[MAX];
int dp(string s,int size,int def_size){
    memset(dparr,-1,sizeof(dparr));
    if(size == 1) return 1;
    else{
        int index = def_size - size;
        dparr[index] = 1 + dp(s,--size,def_size);
        string t;
        t.push_back(s[index]);t.push_back(s[index+1]);
        if(stoi(t) < 27){
            dparr[index] += dparr[index+1];
        }
    }
}
int main(){
    lli n;
    cin >> n;
    string s = to_string(n);
    dp(s,s.length(),s.length());
    cout << dparr[0] << '\n';
    return 0;
}