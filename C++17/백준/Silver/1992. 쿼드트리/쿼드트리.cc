#include <bits/stdc++.h>
using namespace std;
int n, arr[70][70], visited[70][70];
string s;
void go(int y, int x, int l){
	if(l == 1){
		cout << arr[y][x];
		return;
	}
	else{
		for(int i = y; i < y + l; i++){
			for(int j = x; j < x + l; j++){
				if(arr[y][x] != arr[i][j]){
					cout << "(";
					go(y, x, l / 2);
					go(y, x + l / 2, l / 2);
					go(y + l / 2, x, l / 2);
					go(y + l / 2, x + l / 2, l / 2);
					cout << ")";
					return;
				}
			}
		}
		cout << arr[y][x];
		return;
	}
}
int main(){
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> s;
		for(int j = 0 ; j < n; j++){
			arr[i][j] = s[j] - '0';
		}
	}
	go(0, 0, n);
	return 0;
}