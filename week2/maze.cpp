// baekjoon 2178
#include <bits/stdc++.h>
using namespace std;
int n, m, mp[104][104], visited[104][104], x, y;
int dy[] = {-1, 0, 1, 0}, dx[] = {0, 1, 0, -1};
string str;
int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> str;
        int j = 0;
        for (char c : str)
        {
            mp[i][j] = c - '0';
            j++;
        }
    }

    queue<pair<int, int>> q;
    q.push({0, 0});
    visited[0][0] = 1;
    while (q.size())
    {
        tie(y, x) = q.front();
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int ny = y + dy[i];
            int nx = x + dx[i];
            if (ny < 0 || nx < 0 || ny >= n || nx >= m)
                continue;
            if (visited[ny][nx])
                continue;
            if (mp[ny][nx] == 0)
                continue;
            q.push({ny, nx});
            visited[ny][nx] = visited[y][x] + 1;
        }
    }

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         cout << mp[i][j] << ' ';
    //     }
    //     cout << '\n';
    // }

    cout << visited[n - 1][m - 1];
    return 0;
}