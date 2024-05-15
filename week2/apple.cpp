// baekjoon 2828
#include <bits/stdc++.h>
using namespace std;
int n, m, r, apos, lpos, rpos, cnt;
int main()
{
    cin >> n >> m;
    cin >> r;
    while (r--)
    {
        cin >> apos;
        rpos = lpos + m - 1;

        if (apos < lpos)
        {
            lpos -= (lpos - apos);
            cnt += (lpos - apos);
        }
        else if (lpos <= apos && apos <= rpos)
        {
            continue;
            cout << cnt << '\n';
        }
        else if (rpos < apos)
        {
            lpos += (apos - rpos);
            cnt += (apos - rpos);
        }
        cout << cnt << '\n';
    }
    // cout << cnt << '\n';
    return 0;
}