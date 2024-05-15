#include <bits/stdc++.h>
using namespace std;
int n, mp[70][70], visited[70][70];
string s;
int dy[] = {-1, 0, 1, 0};
int dx[] = {0, 1, 0, -1};
void go(int y, int x, int l)
{
    cout << y << " " << x << " " << l << "\n";
    if (l == 1)
    {
        cout << mp[y][x];
        return;
    }
    for (int i = y; i < y + l; i++)
    {
        for (int j = x; x < x + l; j++)
        {
            if (mp[i][j] != mp[y][x])
            {
                // cout << "(";
                cout << "in: " << i << " " << j << " " << mp[i][j] << " " << mp[y][x] << '\n';
                go(y, x, l / 2);
                go(y, x + l / 2, l / 2);
                go(y + l / 2, x, l / 2);
                go(y + l / 2, x + l / 2, l / 2);
                // cout << ")";
            }
        }
    }
    // cout << mp[y][x];
}
int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        for (int j = 0; j < s.length(); j++)
        {
            mp[i][j] = (int)s[j];
        }
    }
    go(0, 0, n);
    return 0;
}