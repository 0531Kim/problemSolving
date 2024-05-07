// baekjoon 1012

#include <bits/stdc++.h>
using namespace std;
const int max_length = 54;
int num, m, n, cnt, ret, a, b, visited[max_length][max_length], mp[max_length][max_length];
int dy[] = {-1, 0, 1, 0}, dx[] = {0, 1, 0, -1};

void dfs(int y, int x)
{
    visited[y][x] = 1;
    for (int i = 0; i < 4; i++)
    {
        int ny = y + dy[i];
        int nx = x + dx[i];
        if (ny < 0 || nx < 0 || ny >= n || nx >= m || (mp[ny][nx] == 0))
            continue;
        if (visited[ny][nx])
            continue;
        dfs(ny, nx);
    }
}

int main()
{
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        cin >> n >> m >> cnt;
        for (int j = 0; j < cnt; j++)
        {
            cin >> a >> b;
            mp[a][b] = 1;
        }

        for (int k = 0; k < n; k++)
        {
            for (int l = 0; l < m; l++)
            {
                if (mp[k][l])
                {
                    dfs(k, l);
                    ret++;
                }
            }
        }
        cout << ret << '\n';
        memset(visited, 0, sizeof(visited));
        memset(mp, 0, sizeof(mp));
    }

    return 0;
}