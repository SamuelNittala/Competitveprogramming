#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<int> v;
    int l;
    cin >> l;
    for(int i=0 ; i<l; ++i){
        int t;
        cin >> t;
        v.push_back(t);
    }
    sort(v.begin(),v.end());
    int startmax,rmax=0;
    for(int i=0 ; i<v.size()-1; ++i){
        int start = v[i];
        for(int j=i;j<v.size();++j){
            if(v[j+1]-v[j] != 1){
                if(j-i+1 > rmax){
                    startmax = start;
                    rmax = v[j];
                    i = j;
                }
                break;
            }
        }    
    }
    cout << startmax << ' ' << rmax << '\n';
    return 0;
}