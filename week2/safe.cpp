#include <bits/stdc++.h>
using namespace std;
int n, cnt, ret, mp[104][104], visited[104][104];
int dy[] = {-1, 0, 1, 0};
int dx[] = {0, 1, 0, -1};
vector<int> v;

void dfs(int y, int x, int h)
// h 보다 작으면 dfs로 지나가지 않음
{
    visited[y][x] = 1;
    for (int i = 0; i < 4; i++)
    {
        int ny = y + dy[i];
        int nx = x + dx[i];
        if (ny < 0 || nx < 0 || ny >= n || nx >= n || mp[ny][nx] < h)
            continue;
        if (visited[ny][nx])
            continue;
        dfs(ny, nx, h);
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
    int k = 104;
    while (k--)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (mp[i][j] >= cnt && visited[i][j] == 0)
                {
                    dfs(i, j, cnt);
                    ret++;
                }
            }
        }
        v.push_back(ret);
        ret = 0;
        cnt++;
        memset(visited, 0, sizeof(visited));
    }
    sort(v.rbegin(), v.rend());
    cout << v[0] << '\n';
    return 0;
}