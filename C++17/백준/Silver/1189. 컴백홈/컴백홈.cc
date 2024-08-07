#include <bits/stdc++.h>
using namespace std;
int r, c, k, visited[6][6], cnt;
int dy[] = {-1, 0, 1, 0};
int dx[] = {0, 1, 0, -1};
char arr[6][6];
string s;

void go(int y, int x){
    if(y == 0 && x == c - 1){
        if(visited[y][x] == k){
            cnt++;
        }
    }
    for(int i = 0; i < 4; i++){
        int ny = y + dy[i];
        int nx = x + dx[i];
        if(ny < 0 || nx < 0 || ny >= r || nx >= c)continue;
        if(visited[ny][nx])continue;
        if(arr[ny][nx] == 'T')continue;
        visited[ny][nx] = visited[y][x] + 1;
        go(ny, nx);
        visited[ny][nx] = 0;
    }
}

int main(){
    cin >> r >> c >> k;
    for(int i = 0; i < r; i++){
        cin >> s;
        for(int j = 0; j < c; j++){
            arr[i][j] = s[j];
        }
    }
    visited[r - 1][0] = 1;
    go(r - 1, 0);
    cout << cnt << '\n';
    return 0;
}