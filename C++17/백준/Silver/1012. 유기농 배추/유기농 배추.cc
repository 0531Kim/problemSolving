#include <bits/stdc++.h>
using namespace std;
int k, n, m, bae, a, b, arr[54][54], visited[54][54], cnt;
int dy[] = {-1, 0, 1, 0};
int dx[] = {0, 1, 0, -1};

void dfs(int y, int x){
	visited[y][x] = 1;
	for(int i = 0; i < 4; i++){
		int ny = y + dy[i];
		int nx = x + dx[i];
		if(ny < 0 || nx < 0 || ny >= n || nx >= m)continue;
		if(visited[ny][nx])continue;
		if(arr[ny][nx])dfs(ny, nx);
	}
}

int main(){
	cin >> k;
	while(k--){
		cin >> n >> m >> bae;
		while(bae--){
			cin >> a >> b;
			arr[a][b] = 1;
		}
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				if(arr[i][j] && !visited[i][j]){
					dfs(i, j);
					cnt++;
				}
			}
		}
		cout << cnt << '\n';
		memset(visited, 0, sizeof(visited));
		memset(arr, 0, sizeof(arr));
		cnt = 0;
	}
	return 0;
}