#include <bits/stdc++.h>
using namespace std;
int flag, flag1, flag2, flag3;
char cur;
string s;
int main()
{
    while (true)
    {
        flag = 0;
        cin >> s;
        if (s == "end")
        {
            break;
        }
        for (char c : s)
        {
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            {
                flag1 = 1;
                // 1 is wrong
            }
        }
        if (flag1 = 0)
        {
            flag = 1;
            // cout << "<" << s << ">" << " is not acceptable.";
            // continue;
        }
        for (char c : s)
        {
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            {
                flag2++;
                flag3 = 0;
            }
            else
            {
                flag3++;
                flag2 = 0;
            }
            if (flag2 == 3 || flag3 == 3)
            {
                flag = 1;
                // cout << "<" << s << ">" << " is not acceptable.";
                // continue;
            }
        }
        for (char c : s)
        {
            if (cur == c && (c != 'e' && c != 'o'))
            {
                flag = 1;
                // cout << "<" << s << ">" << " is not acceptable.";
                // break;
            }
            cur = c;
        }
        if (flag == 1)
        {
            cout << "<" << s << ">" << " is not acceptable.";
        }
        else
        {
            cout << "<" << s << ">" << " is acceptable.";
        }
    }
    return 0;
}