#include<iostream>
#include<bits/stdc++.h>

#define ipv(v,s) for(int i=0;i<s;++i){int t;cin>>t;v.push_back(t);}
#define lli unsigned long long int
#define MAX 1000000000

using namespace std;
lli* v = new lli[MAX];
void btland(){
    for(lli i=0; i<=MAX;++i){
        v[i] = i;
        if(i >= 12){
            lli fs = v[i/2] + v[i/3] + v[i/4];
            v[i] = max(v[i],fs);
        }
    }
}
int main(){
    lli n;
    btland();
    while(cin>>n){
        cout << v[n] << '\n';
    }
    return 0;
}