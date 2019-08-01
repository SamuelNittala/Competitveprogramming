#include<iostream>
#include<cstdio>
#include<bits/stdc++.h>
#define lli long long int
#define MAX 1000000000
using namespace std;

bool sieve[MAX+1];

void simplesieve(int limit,vector<int>& v,lli m){
    bool mark[limit+1];
    memset(mark,true,sizeof(mark));
    for(int i=2;i*i < limit;++i){
        if(mark[i] == true){
            for(int j=2*i; j<limit ; j+=i) mark[j] = false;
        }
    }
    for(int i=2;i<limit;++i){
        if(mark[i]){
            v.push_back(i);
            if(i>=m) cout << i << '\n';
        }
    }
}
void sigsieve(lli m,lli n){
    int limit = floor(sqrt(n)) + 1;
    vector<int> prime;
    simplesieve(limit,prime,m);

    lli low = limit;
    lli high = 2*limit;

    while(low < n){
        if(high >= n) high=n;
        bool mark[limit+1];
        memset(mark,true,sizeof(mark));
        for(int i=0;i<prime.size();++i){
            int lolim = floor(low/prime[i])*prime[i];
            if(lolim < low) lolim += prime[i];

            for(int j=lolim ; j<high ; j+=prime[i]) mark[j-low] = false; 
        }
        for(int i=low;i<high;i++){
            if(mark[i-low] == true && i>=m) cout << i << '\n';
        }
        low = low + limit;
        high = high + limit;
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        lli m,n;
        cin >> m >> n;
        sigsieve(m,n);
    }
    return 0;
}