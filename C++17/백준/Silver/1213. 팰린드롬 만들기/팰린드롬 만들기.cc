#include <bits/stdc++.h>
using namespace std;
int arr[26], flag;
string s, s2;
char odd;
vector<char> v;
int main(){
	cin >> s;
	for(char c: s){
		v.push_back(c);
	}
	for(char c: v){
		arr[c - 'A']++;
	}
	for(int i = 0; i < 26; i++){
		if(arr[i]%2 == 1){
			flag++;
			odd = char(i + 'A');
			if(flag >= 2){
				cout << "I'm Sorry Hansoo" << '\n';
				return 0;
			}
		}
		for(int j = 0; j < arr[i]/2; j++){
			if(arr[i]){
				s2 += i + 'A';
			}
		}
	}
	cout << s2;
	reverse(s2.begin(), s2.end());
	string ret;
	if(flag){
		ret = ret + odd + s2;
	}
	else{
		ret = ret + s2;
	}
	cout << ret << '\n';
	return 0;
}