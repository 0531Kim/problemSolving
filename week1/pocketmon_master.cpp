#include <bits/stdc++.h>
using namespace std;
int n, m;
string s;
int main()
{
    // 입력값이 많으므로 필수!
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n >> m;

    map<int, string> int_map;
    map<string, int> str_map;

    for (int i = 0; i < n; i++)
    {
        cin >> s;
        int_map.insert({i + 1, s});
        str_map.insert({s, i + 1});
    }
    for (int i = 0; i < m; i++)
    {
        cin >> s;
        if (atoi(s.c_str()) == 0)
        {
            cout << str_map[s] << '\n';
        }
        else
        {
            // 들어오는값이 int형처럼 생겼어도 문자열이므로 atoi로 문자열을
            // 숫자로 바꾼후 map에서 찾는다
            cout << int_map[atoi(s.c_str())] << '\n';
        }
    }
    return 0;
}