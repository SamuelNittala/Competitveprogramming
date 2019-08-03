#include<iostream>
#include<vector>
#include<cmath>

using namespace std;

int myAtoi(string str){
	int len = str.length();
	vector<char> int_arr;
	bool start_space = true;
	int minus_index;
	for(int i=0;i<len;++i){
		if(start_space == true){
			while(str[i] == ' ') ++i;
			start_space = false;
			minus_index = i;
		}
		if(str[i] >= '0' and str[i] <= '9'){
			int_arr.push_back(str[i]);
		}
		else if(i==minus_index and str[i] == '-') {
			int_arr.push_back(str[i]);
		}
		else break;
	}
	if(int_arr.size() == 0) return 0;
	int curr_pwr = 0;
	int res = 0;
	for(auto i=int_arr.end()-1;i>=int_arr.begin();--i){
		if(*i != '-' and *i != '.'){
			int curr_int = (int)*i -48;
			curr_int *= pow(10,curr_pwr);
			res += curr_int;
			curr_pwr++;
		}else if(*i == '-'){
			res = res - 2*res;
		}
	}
	return res;
}
int main(){
	string s;
	getline(cin,s);
	cout << myAtoi(s) << '\n';
	return 0;
}