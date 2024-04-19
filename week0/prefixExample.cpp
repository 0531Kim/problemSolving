#include <bits/stdc++.h>
using namespace std;

int n, m;
int arr[100000], prefix[100000];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        prefix[i] = prefix[i - 1] + arr[i];
    }
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        cout << prefix[b] - prefix[a - 1] << '\n';
    }

    return 0;
}