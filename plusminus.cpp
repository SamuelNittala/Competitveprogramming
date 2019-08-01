#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void plusMinus(vector<int> arr) {
    float s = arr.size();
    float p=0,z=0,n=0;
    for(auto i:arr){
        if(i>0) p++;
        else if(i<0) n++;
        else z++;
    }
    cout << p/s << '\n';
    cout << n/s << '\n';
    cout << z/s << '\n';
}
int main(){
    vector<int> v{-4,3,-9,0,4,1};
    plusMinus(v);
    return 0;
}