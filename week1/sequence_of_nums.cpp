#include <bits/stdc++.h>
using namespace std;
int num, days, arr[101000];
vector<int> v;
int main()
{
    cin >> num >> days;
    for (int i = 0; i < num; i++)
    {
        cin >> arr[i + 1];
        arr[i + 1] += arr[i];
    }
    for (int i = days; i < num + 1; i++)
    {
        v.push_back(arr[i] - arr[i - days]);
    }
    sort(v.rbegin(), v.rend());

    cout << v[0] << '\n';

    return 0;
}