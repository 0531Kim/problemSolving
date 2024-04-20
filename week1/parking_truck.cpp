#include <bits/stdc++.h>
using namespace std;
int a, b, c, in, out, cnt[200], sum;
int main()
{
    cin >> a >> b >> c;
    for (int i = 0; i < 3; i++)
    {
        cin >> in >> out;
        for (int j = in; j < out; j++)
        {
            cnt[j]++;
        }
    }
    for (int i = 0; i < 110; i++)
    {
        if (cnt[i] == 1)
            sum += a;
        else if (cnt[i] == 2)
            sum += (b * 2);
        else if (cnt[i] == 3)
            sum += (c * 3);
    }

    cout << sum;
    return 0;
}