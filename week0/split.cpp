#include <bits/stdc++.h>
using namespace std;

vector<string> split(string s, string d)
{
    vector<string> ret;
    long long pos;
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
    string d = "i";
    string s = "hhhhihhhihhhhhhhihih";
    vector<string> a = split(s, d);
    for (string i : a)
        cout << i << " ";
    return 0;
}