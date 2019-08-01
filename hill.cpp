#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    long long n,res=0;
    cin >> n;
    long long arr[n];
    for(long long i=0;i<n;++i){
        long long hill_h8;
        cin >> hill_h8;
        arr[i] = hill_h8;
    }
    for(long long i=0;i<n-1;++i){
        long long cmax = -1;
        for(long long j=i+1;j<n;j++){
            if(arr[j] >= cmax and arr[j] <= arr[i]){
                cmax = arr[j];
                res++;
            }
            else if(arr[j] >= arr[i]){
                res++;
                break;
            }
        }
    }
    cout << res << '\n';
}