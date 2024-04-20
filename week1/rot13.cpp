#include <bits/stdc++.h>
using namespace std;
// baekjoon 11655
string s, ret;
int main()
{
    // cin >> s;
    getline(cin, s);
    for (int i = 0; i < s.length(); i++)
    {
        if ((int(s[i]) >= int('A')) && int(s[i] <= int('Z')))
        {
            if ((int(s[i]) + 13) > int('Z'))
            {
                ret += char(int(s[i]) + 13 - 26);
            }
            else
            {
                ret += char(int(s[i]) + 13);
            }
        }
        else if ((int(s[i]) >= int('a')) && int(s[i] <= int('z')))
        {
            if ((int(s[i]) + 13) > int('z'))
            {
                ret += char(int(s[i]) + 13 - 26);
            }
            else
            {
                ret += char(int(s[i]) + 13);
            }
        }
        else
        {
            ret += s[i];
        }
    }
    cout << ret;
    return 0;
}