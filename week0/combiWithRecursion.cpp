#include <bits/stdc++.h>
using namespace std;

int n = 5, k = 3, a[5] = {1, 2, 3, 4, 5};

void print(vector<int> v)
{
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << '\n';
}

void makeCombi(int start, vector<int> b)
{
    if (b.size() == k)
    {
        print(b);
        return;
    }
    for (int i = start + 1; i < n; i++)
    {
        b.push_back(a[i]);
        makeCombi(i, b);
        b.pop_back();
    }
}

int main()
{
    vector<int> v;
    makeCombi(-1, v);
    return 0;
}