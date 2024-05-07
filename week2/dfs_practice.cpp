#include <bits/stdc++.h>
using namespace std;
const int N = 100;
int a, b, input, cnt;
int visited[N][N];
int mp[N][N];
int dy[] = {-1, 0, 1, 0};
int dx[] = {0, 1, 0, -1};

void dfs(int u, int v)
{
    visited[u][v] = 1;
    for (int i = 0; i < 4; i++)
    {
        int ny = u + dy[i];
        int nx = v + dx[i];
        if (ny < 0 || nx < 0 || ny >= N || nx >= N)
            continue;
        if (visited[ny][nx])
            continue;
        dfs(ny, nx);
    }
    return;
}

int main()
{
    cin >> a >> b;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cin >> input;
            mp[i][j] = input;
        }
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            if (mp[i][j] && (visited[i][j] == 0))
            {
                dfs(i, j);
                cnt++;
            }
        }
    }
    return 0;
}