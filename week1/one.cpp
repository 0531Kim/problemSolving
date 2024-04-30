#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a;

int main()
{
    while (cin >> a)
    {
        ll ret = 1, cnt = 1;
        if (a == 1)
        {
            cout << 1 << '\n';
            continue;
        }
        else
        {
            while (ret != 0)
            {
                cnt++;
                ret = (((10 % a) * (ret % a)) + 1) % a;
            }
        }
        cout << cnt << '\n';
    }
    return 0;
}