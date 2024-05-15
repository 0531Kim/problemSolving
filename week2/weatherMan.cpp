#include <bits/stdc++.h>
using namespace std;
int n, m, arr[104][104], ret[104][104];
string s;
int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        int j = 0;
        cin >> s;
        for (char c : s)
        {
            if (c == 'c')
            {
                arr[i][j] = 1;
            }
            else
            {
                arr[i][j] = 0;
            }
            j++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        int cnt = 0;
        int flag = 0;
        for (int j = 0; j < m; j++)
        {
            if (flag == 0 && arr[i][j] == 1)
            {
                ret[i][j] = cnt;
                cnt++;
                flag = 1;
            }
            else if (flag == 1 && arr[i][j] == 0)
            {
                ret[i][j] = cnt;
                cnt++;
            }
            else if (flag == 1 && arr[i][j] == 1)
            {
                cnt = 0;
                ret[i][j] = cnt;
                cnt++;
            }
            else if (flag == 0 && arr[i][j] == 0)
            {
                ret[i][j] = -1;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << ret[i][j] << " ";
        }
        cout << '\n';
    }

    return 0;
}