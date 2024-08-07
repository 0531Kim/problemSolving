#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a, b, c;

ll go(ll b){
	if(b == 1){
		return a % c;
	}
	ll ret = go(b / 2);
	ret = (ret * ret) % c;
	if(b % 2) ret = (ret * a) % c;
	return ret;
}

int main(){
	cin >> a >> b >> c;
	cout << go(b) << '\n';
	return 0;
}