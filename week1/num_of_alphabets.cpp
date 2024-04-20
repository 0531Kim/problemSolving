#include <bits/stdc++.h>
using namespace std;

int arr[50];
string s;

int main()
{

    cin >> s;

    for (char i : s)
    {
        arr[int(i) - int('a')]++;
    }

    for (int i = 0; i < 26; i++)
        cout << arr[i] << " ";
    cout << '\n';
    return 0;
}