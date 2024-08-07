#include <bits/stdc++.h>
using namespace std;
int n, cnt;
int main(){
	cin >> n;
	for(int i = 0; i < 987654321; i++){
		if(to_string(i).find("666") != string::npos){
			cnt++;
		}
		if(cnt == n){
			cout << i << '\n';
			return 0;
		}
	}
	return 0;
}