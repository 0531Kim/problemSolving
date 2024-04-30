#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
string s, ret;
map<char, int> mp;
int odd;
int main()
{
    ios_base::sync_with_stdio(false);
    cin >> s;
    for (char c : s)
    {
        mp[c]++;
    }
    for (auto i : mp)
    {
        if (i.second % 2 == 0)
        {
            for (int j = 0; j < i.second / 2; j++)
            {
                ret += i.first;
            }
        }
        else
        {
            if (odd)
            {
                cout << "I'm Sorry Hansoo" << '\n';
                return 0;
            }
            else
            {
                odd = i.first;
                for (int j = 0; j < i.second / 2; j++)
                {
                    ret += i.first;
                }
            }
        }
    }
    string inst = ret;
    ret += int(odd);
    reverse(inst.begin(), inst.end());
    ret += inst;
    cout << ret << '\n';
    return 0;
}