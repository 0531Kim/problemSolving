#include <bits/stdc++.h>
using namespace std;
string s;
vector<char> v1, v2;
int flag = 1;
int main()
{
    cin >> s;
    if (s.length() == 1)
    {
        cout << flag;
    }
    else
    {
        for (int i = 0; i < s.length() / 2; i++)
        {
            if (s[i] != s[s.length() - i - 1])
            {
                flag = 0;
            }
        }
        cout << flag;
    }
    return 0;
}