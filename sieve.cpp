#include<iostream>
#include<bits/stdc++.h>

#define ipv(v,s) for(int i=0;i<s;++i){int t;cin>>t;v.push_back(t);}
#define ull unsigned long long int
#define MAX 1000

using namespace std;

map <bool,ull> arr;

void sieve(){

    arr.insert(pair<bool,ull>(false,0));
    arr.insert(pair<bool,ull>(false,1));

    for(ull i=2;i<sqrt(MAX);++i){
        for(ull j=2;j<=MAX;j++) arr.insert(pair<bool,ull>(false,i*j));
    }
}

int main(){
    sieve();
    int t;
    cin >> t;
    while(t--){
        ull m,n;
        cin >> m >> n;
        for(ull k=m;k<=m;++k){
            if(arr[k]) cout << k << '\n';
        }
    }
    return 0;
}