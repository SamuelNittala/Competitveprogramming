#include<iostream>
#include<bits/stdc++.h>
#define ipv(v,s) for(int i=0;i<s;++i){int t;cin>>t;v.push_back(t);}
using namespace std;

int f(int x,vector<int>& barns,int c){
    int lpos = barns[0];
    int cplaced = 1;
    for(int i=1;i<barns.size();++i){
        if(barns[i]-lpos >= x) {cplaced++;lpos = barns[i];}
        if(cplaced == c) return 1;
    }
    return 0;
}
int minlarge(vector<int>& v,int c){
    sort(v.begin(),v.end());
    int s=0,end=v[v.size()-1]-v[0]+1,mid=0;
    while(end-s>1){
        mid = (s+end)>>1;
        if(f(mid,v,c) == 0 ) end = mid;
        else s = mid;
    }
    return s;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,c;
        cin >> n >> c;
        vector<int> barns;
        ipv(barns,n);
        cout << minlarge(barns,c) << '\n';
    }
    return 0;
}