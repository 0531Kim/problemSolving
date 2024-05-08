#include <bits/stdc++.h>
using namespace std;
int n, mp[70][70], visited[70][70];
int dy[] = {-1, 0, 1, 0};
int dx[] = {0, 1, 0, -1};
void dfs(int y, int x, int l)
{
    if (l == 1)
    {
        cout << mp[y][x];
        return;
    }
    for (int i = 0; i < 4; i++)
    {
        int ny = y + dy[i];
        int nx = x + dx[i];
        if (ny < y || nx < x || ny >= y + l || nx >= x + l)
            continue;
        if (visited[ny][nx])
            continue;
        if (mp[ny][nx] != mp[y][x])
        {
            memset(visited, 0, sizeof(visited));
            cout << "(";
            dfs(y, x, l / 2);
            dfs(y + l / 2, x, l / 2);
            dfs(y, x + l / 2, l / 2);
            dfs(y + l / 2, x + l / 2, l / 2);
            cout << ")";
        }
    }
}
int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> mp[i][j];
        }
    }
    dfs(0, 0, n);
    return 0;
}