#include <bits/stdc++.h>
using namespace std;

int a[5] = {1, 2, 3, 4, 5};
int n = 5, r = 3;

vector<int> v;
int main()
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                // cout << i << j << k << '\n';
                cout << a[i] << " " << a[j] << " " << a[k] << '\n';
            }
        }
    }
    return 0;
}
