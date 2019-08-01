#include<iostream>
#include<bits/stdc++.h>
#define lli long long int
using namespace std;

lli f(string s){
    lli arr[s.length()];
    arr[0] = 1;
    for(lli i=1; i <s.length() ; ++i){
        int t1 = (int) s[i] -48 ;int t2 = (int) s[i-1] -48;
        if((t2*10+t1) < 27) {
            if(t2 == 0 and t1 == 0) arr[i] = 0;
            else if(t1 == 0) {
                if(i>1)
                arr[i] = arr[i-2];
                else arr[i] = 1;
            }
            else if(t2 == 0) arr[i] = arr[i-1];
            else if(i > 1)arr[i] = arr[i-1] + arr[i-2];
            else arr[i] = 1 + arr[i-1];
        }
        else arr[i] = arr[i-1];
    }
    return arr[s.length()-1];
}

int main(){
    string s;
    while(true){
        cin >> s;
        if(s == "0") break;
        else cout << f(s) << '\n';
    }
    return 0;
}