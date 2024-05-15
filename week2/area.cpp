#include <bits/stdc++.h>
using namespace std;
int n, m, r, a, b, c, d, mp[104][104], visited[104][104], cnt;
int dy[] = {-1, 0, 1, 0};
int dx[] = {0, 1, 0, -1};

void dfs(int y, int x)
{
    visited[y][x] = 1;
    for (int i = 0; i < 4; i++)
    {
        int ny = y + dy[i];
        int nx = x + dx[i];
        if (ny < 0 || nx < 0 || ny > n - 1 || nx > m - 1)
            continue;
        if (mp[ny][nx])
            continue;
        if (visited[ny][nx])
            continue;
        dfs(ny, nx);
    }
}

int main()
{
    cin >> n >> m >> r;

    while (r--)
    {
        cin >> a >> b >> c >> d;
        for (int i = a; i < c; i++)
        {
            for (int j = b; j < d; j++)
            {
                mp[j][i]++;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (mp[i][j] == 0 && visited[i][j] == 0)
            {
                dfs(i, j);
                cnt++;
            }
        }
    }
    cout << cnt << '\n';
    return 0;
}