#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> v;
    for(int i=0;i<n;++i){
        int t;
        cin>>t;
        v.push_back(t);
    }
    sort(v.begin(),v.end());
    int i=0,j=1,res=0;
    while(i<n and j<n-1){
        if(v[i] == v[j]){
            res++;
            i+=2,j+=2;
        }
        else{
            i+=1,j+=1;
        }
    }
    cout << res << '\n';
}