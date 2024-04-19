#include <bits/stdc++.h>
using namespace std;

int arr[50], sum, a, b;
vector<int> v;

int main()
{
    for (int i = 0; i < 9; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if ((arr[i] + arr[j]) == (sum - 100))
            {
                a = arr[i];
                b = arr[j];
                break;
            }
        }
    }

    cout << a << " " << b << '\n';
    for (int i = 0; i < 9; i++)
    {
        if ((arr[i] != a) && (arr[i] != b))
            v.push_back(arr[i]);
    }

    sort(v.begin(), v.end());

    for (int i : v)
        cout << i << '\n';

    return 0;
}