#include <bits/stdc++.h>
using namespace std;

int a[104][104], visited[104][104], n, m, x, y;
int dy[4] = {-1, 0, 1, 0};
int dx[4] = {0, 1, 0, -1};

int main() {

    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        int j = 0;
        for(char c: s){
        	a[i][j] = c - '0';
        	j++;
        }
    }

    queue<pair<int, int>> q;
    visited[0][0] = 1;
    q.push({0,0});
    while(q.size()){
        tie(y, x) = q.front(); q.pop();
        for(int i = 0; i < 4; i++){
            int ny = y + dy[i];
            int nx = x + dx[i];
            if(ny < 0 || ny >= n || nx < 0 || nx >= m || a[ny][nx] == 0) continue;
            if(visited[ny][nx]) continue;
            visited[ny][nx] = visited[y][x] + 1;
            q.push({ny,nx});
        }
    }

    cout << visited[n-1][m-1];
    
}