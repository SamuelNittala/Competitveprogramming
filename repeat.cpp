#include<iostream>
#include<bits/stdc++.h>

using namespace std;

long repeatedString(string s, long n) {
    long count=0;
    int strcount = 0;
    for(int i=0;i<s.length();++i){
        if(s[i] == 'a') strcount++;
    }
    long t = n/s.length();
    count += t*strcount;
    n = n%t;
    int i=0;
    while(n>0){
        if(s[i] == 'a') count++;
        n--,i++;
    }
    return count;
}

int main(){
    string s = "ababa";
    long l = repeatedString(s,10);
    cout << l << '\n';
    return 0;
}