#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int jumpingOnClouds(vector<int> c) {
    int jump = 0;
    int s = c.size();
    int i=0;
    while(i < s){
        if(c[i+2] == 0) i+=2;
        else i+=1;
        jump++;
    }
    return jump;
}

int main(){
    vector<int> v {
        0 ,0 ,1 ,0 ,0 ,1, 0
    };
    int x = jumpingOnClouds(v);
    cout << x << '\n';
    return 0;
}