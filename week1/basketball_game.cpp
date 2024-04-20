#include <bits/stdc++.h>
using namespace std;
int num, flag, cnt[200];
string name;
int main()
{
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        cin >> name;
        cnt[name[0] - 'a']++;
    }
    for (int i = 0; i < 30; i++)
    {
        if (cnt[i] >= 5)
        {
            cout << char(i + 'a');
            flag = 1;
        }
    }
    if (flag == 0)
    {
        cout << "PREDAJA";
    }
    return 0;
}