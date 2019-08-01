#include<iostream>
#include<bits/stdc++.h>

using namespace std;
double bs(vector<int>& v1,vector<int>& v2,int imin,int imax){
    int m = v1.size();
    int n = v2.size();
 
    int i = (imin+imax)/2;
    int j = (m+n+1)/2 - i;

    if(v1[i-1] > v2[j]){
        return bs(v1,v2,--i,imax);
    }
    else if(v1[i-1] >= v2[j-1] && v1[i-1] <= v2[j]){
        if((m+n)%2 == 0){
            return (double)(v1[i-1] + v2[j])/2.0;
        }
        else return v1[i-1];    
    }
    else if(v2[j-1] >= v1[i-1] && v2[j-1] <= v1[i]){
        if((m+n)%2 ==0) return (double) (v2[j-1] + v1[i])/2.0;
        else return v2[j-1];
    }
    else if(v2[j-1] > v1[i]) return bs(v1,v2,++i,imax);

}
int main(){
    vector<int> v1,v2;
    int m,n;
    cin >> m >> n ;
    for(int i=0; i<m ; ++i) {
        int t;
        cin >> t;
        v1.push_back(t);
    }
    for(int i=0; i<n ; ++i) {
        int t;
        cin >> t;
        v2.push_back(t);
    }
    if(m>n) cout << bs(v2,v1,0,n);
    else cout << bs(v1,v2,0,m);
    return 0;
}