#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 2, 4, 5};
    map<int, int> mp;

    for (int i : v)
    {
        if (mp[i])
        {
            continue;
        }
        else
        {
            mp[i] = 1;
        }
    }
    for (auto i : mp)
    {
        cout << i.first << " ";
    }
    return 0;
}