#include <bits/stdc++.h>
using namespace std;
int n, m;
string s;
int main()
{
	 ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> n >> m;
	
	map<int, string> int_map;
	map<string, int> str_map;
	
	for(int i = 0; i < n; i++){
		cin >> s;
		int_map.insert({i+1, s});
		str_map.insert({s, i+1});
	}
	for(int i = 0; i < m; i++){
		cin >> s;
		if(atoi(s.c_str()) == 0){
			cout << str_map[s] << '\n';
		}
		else{
			cout << int_map[atoi(s.c_str())] << '\n';
		}
	}
    return 0;
}