#include <bits/stdc++.h>
using namespace std;

int a[3] = {1, 2, 3};
int n = 3, r = 3;

void printPermutation()
{
    for (int i = 0; i < r; i++)
    {
        cout << a[i] << " ";
    }
    cout << '\n';
}

void makePermutation(int n, int r, int depth)
{
    if (depth == r)
    {
        printPermutation();
        return;
    }

    for (int i = depth; i < n; i++)
    {
        swap(a[i], a[depth]);
        makePermutation(n, r, depth + 1);
        swap(a[i], a[depth]);
    }
}

int main()
{
    makePermutation(3, 3, 0);
    return 0;
}
