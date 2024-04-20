#include <bits/stdc++.h>
using namespace std;

vector<string> split(string s, string d)
{
    long long pos;
    vector<string> ret;
    string token = "";
    while ((pos = s.find(d)) != string::npos)
    {
        token = s.substr(0, pos);
        ret.push_back(token);
        s.erase(0, pos + d.length());
    }
    ret.push_back(s);
    return ret;
}
int main()
{
    int num;
    string s, input;
    vector<string> a;
    cin >> num;
    cin >> s;
    vector<string> pattern = split(s, "*");

    for (int i = 0; i < num; i++)
    {
        cin >> input;
        if (input.length() == 1)
        {
            cout << "NE" << '\n';
            continue;
        }
        if (input.length() < (pattern[0].length() + pattern[1].length()))
        {
            cout << "NE" << '\n';
            continue;
        }
        int back_start_index = input.length() - pattern[1].length();
        int back_end_index = input.length();
        int front_end_index = pattern[0].length();

        if (back_start_index > 0)
        {
            // cout << back_start_index << " " << back_end_index << '\n';
            a.push_back(input.substr(back_start_index, back_end_index));
            a.push_back(input.substr(0, pattern[0].length()));

            if ((a[1] == pattern[0]) && (a[0] == pattern[1]))
            {
                cout << "DA" << '\n';
            }
            else
            {
                cout << "NE" << '\n';
            }
            a.erase(a.begin(), a.end());
        }
        else
        {
            cout << "NE" << '\n';
        }
    }
    return 0;
}