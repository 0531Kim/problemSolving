#include <bits/stdc++.h>
using namespace std;
int n, m, cnt, arr[15004];
int main(){
	cin >> n;
	cin >> m;
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
	for(int i = 0; i < n; i++){
		for(int j = i + 1; j < n; j++){
			if((arr[i] + arr[j]) == m){
				cnt++;
			}
		}
	}
	cout << cnt << '\n';
	return 0;
}