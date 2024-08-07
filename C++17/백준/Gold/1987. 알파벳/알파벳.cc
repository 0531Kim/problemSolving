#include <bits/stdc++.h>
using namespace std;
int n, m, _max = -1, visited[26];
int dy[] = {-1, 0, 1, 0};
int dx[] = {0 ,1, 0, -1};
string s;
char arr[24][24];

void dfs(int y, int x, int cnt){
    cnt++;
    _max = max(_max, cnt);
    for(int i = 0; i < 4; i++){
        int ny = y + dy[i];
        int nx = x + dx[i];
        if(ny < 0 || nx < 0 || ny >= n || nx >= m)continue;
        if(visited[arr[ny][nx] - 'A'])continue;
        visited[arr[ny][nx] - 'A'] = 1;
        dfs(ny, nx, cnt);
        visited[arr[ny][nx] - 'A'] = 0;
    }
}

int main(){
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        cin >> s;
        for(int j = 0; j < m; j++){
            arr[i][j] = s[j];
        }
    }
    visited[arr[0][0] - 'A'] = 1;
    dfs(0, 0, 1);
    cout << _max - 1<< '\n';
    return 0;
}