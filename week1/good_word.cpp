#include <bits/stdc++.h>
using namespace std;
int n, cnt;
string s;
stack<char> _stack;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        for (char c : s)
        {
            if ((_stack.size() == 0) || (_stack.top() != c))
            {
                _stack.push(c);
            }
            // else if(_stack.top() == c)
            else
            {
                _stack.pop();
            }
        }
        if (_stack.size() == 0)
        {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}