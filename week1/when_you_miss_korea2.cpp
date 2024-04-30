#include <bits/stdc++.h>
using namespace std;
int cnt;
string pattern, input;

vector<string> split(string s, string d)
{
    long long pos;
    vector<string> ret;
    string token;
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
    cin >> cnt;
    cin >> pattern;
    vector<string> p = split(pattern, "*");
    string str;
    string front_str, end_str;
    for (int i = 0; i < cnt; i++)
    {
        cin >> str;
        front_str = str.substr(0, p[0].length());
        if (str.length() - p[1].length())
        {
            end_str = str.substr(str.length() - p[1].length(), str.length());
        }
        cout << front_str << " " << end_str << '\n';
    }

    return 0;
}