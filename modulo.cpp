#include<iostream>
#include<bits/stdc++.h>
#define lli long long int
using namespace std;

lli power(lli x,lli y,lli p){
    lli res = 1;
    x = x%p;
    while(y > 0){
        if(y&1) res = (res*x)%p;
        y = y>>1;
        x = (x*x)%p;
    }
    return res;
}
bool millertest(lli d, lli n){
    lli a = 2 + rand()%(n-4);
    lli x = power(a,d,n);
    if(x == 1 or x == n-1) return true;

    while(d != n-1){
        x = (x*x) % n;
        d = d*2;
        if(x==1) return false;
        else if(x==n-1) return true;
    }
    return false;
}
bool isprime(lli n,int k){
    if(n<=1 or n==4) return false;
    else if(n <=3) return true;

    int d = n-1;
    while(d%2 == 0) d /= 2;

    for(int i=0;i<k;++i){
        if(!millertest(d,n)) return false;
    }
    return true;
}
int main(){
    int t;
    int k = 3;
    scanf("%d",&t);
    while(t--){
        lli m,n;
        scanf("%lld %lld",&m,&n);
        for(lli temp=m;temp <=n;++temp){
            if(isprime(temp,k)) printf("%lld\n",temp);
        }
    }
}
