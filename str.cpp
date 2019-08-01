#include<bits/stdc++.h>
using namespace std;
#define lli long long int 
string Find_It (int X, long long K, string S, int N) {
    vector< vector<int> > v;
    vector<int> index;
    if(N%X == 0){
        index.resize(N/X);
        fill(index.begin(),index.end(),0);
        for(lli i=0;i<N;++i){
            lli left = i*X+1;
            lli right = min(N,(int)((i+1)*X));
            if(left > right) break;
            vector<int> temp;
            for(int j=left;j<=right;++j) temp.push_back(S[j-1]-48);
            v.push_back(temp);
            temp.clear();
        }
        for(int i=0;i<v.size();++i){
            vector<int> t = v[i];
            sort(t.begin(),t.end());
            v[i] = t;
        }
        int pmin = ((int)(N/X))-1;
        for(lli t=1;t<=K;++t){
            if((index[pmin])%X and index[pmin] != 0){
                index[pmin] = 0;
                pmin--;
            }
            else (index[pmin])++;
        }
    }
    string res = "1";
    for(auto i:index) res += to_string(i);
    return res;
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    int X;
    cin >> X;
    long long K;
    cin >> K;
    string S;
    cin>>S;

    string out_;
    out_ = Find_It(X, K, S, N);
    cout << out_;
}