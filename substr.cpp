#include<iostream>
#include<map>

using namespace std;



int main(){
    map<char,bool> m;
    for(char c = 'a' ; c <= 'z' ; c++) m[c] = false;
    string s;
    cin >> s;
    int res = 0,temp = 0;
    for(int i=0; i < s.length() - 1 ; ++i){
        for(int j=i; j < s.length() ; ++j){
            if(m[s[j]] == false){
                m[s[j]] = true;
                temp++;
            }
            else break;
        }
        for(char c = 'a' ; c <= 'z' ; c++) m[c] = false;
        if(temp > res){
            res = temp;
        }
        temp = 0;
    }
    cout << res << '\n';
    return 0;
}