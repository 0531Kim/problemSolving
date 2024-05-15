#include <bits/stdc++.h>
using namespace std;
int n, k;
string s, token;
vector<string> v;

bool cmp(string s1, string s2)
{
    // if(s1.length() == s2.length()){
    // 	int i = 0;
    // 	while(s1[i] == s2[i]){
    // 		i++;
    // 	}
    // 	return s1[i] < s2[i];
    // }
    if (s1.length() == s2.length())
    {
        return s1 < s2;
    }
    else
    {
        return s1.length() < s2.length();
    }
}

int main()
{
    cin >> n;
    while (n--)
    {
        cin >> s;
        for (char c : s)
        {
            if (c >= 'a' && c <= 'z')
            {
                if (token.length())
                {
                    while (token.length() != 1 && token[0] == '0')
                    {
                        token = token.substr(1, token.length());
                    }
                    v.push_back(token);
                    token = "";
                }
                continue;
            }
            else
            {
                token += c;
            }
        }
        if (token.length())
        {
            while (token.length() != 1 && token[0] == '0')
            {
                token = token.substr(1, token.length());
            }
            v.push_back(token);
            token = "";
        }
    }
    sort(v.begin(), v.end(), cmp);
    for (string s : v)
    {
        cout << s << '\n';
    }
    return 0;
}