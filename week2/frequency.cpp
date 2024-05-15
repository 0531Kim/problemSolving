#include <bits/stdc++.h>
using namespace std;
int n, c, k;
map<int, int> mp1, mp2;
vector<pair<int, int>> v;
int main()
{
    cin >> n >> c;
    for (int i = 0; i < n; i++)
    {
        cin >> k;
        mp1[k]++;
        if (mp2[k] == 0)
        {
            mp2[k] = i;
        }
    }
    for (auto i : mp1)
    {
        v.push_back({i.first, i.second});
    }
    for (auto i : v)
    {
        cout << i.first << " " << i.second << '\n';
    }
    return 0;
}