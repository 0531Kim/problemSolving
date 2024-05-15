#include <bits/stdc++.h>
using namespace std;
int visited[500];
vector<int> v[500];

void postDFS(int start)
{
    if (visited[start] == 0)
    {
        if (v[start].size() == 1)
            postDFS(v[start][0]);
        else if (v[start].size() == 2)
        {
            postDFS(v[start][0]);
            postDFS(v[start][1]);
        }
    }
    visited[start] = 1;
    cout << start << " ";
}

void preDFS(int here)
{
    if (visited[here] == 0)
    {
        cout << here << " ";
        visited[here] = 1;
        if (v[here].size() == 1)
        {
            preDFS(v[here][0]);
        }
        else if (v[here].size() == 2)
        {
            preDFS(v[here][0]);
            preDFS(v[here][1]);
        }
    }
}

void inDFS(int here)
{
    if (visited[here] == 0)
    {
        if (v[here].size() == 1)
        {
            inDFS(v[here][0]);
            cout << here << " ";
            visited[here] = 1;
        }
        else if (v[here].size() == 2)
        {
            inDFS(v[here][0]);
            cout << here << " ";
            visited[here] = 1;
            inDFS(v[here][1]);
        }
        else
        {
            cout << here << " ";
            visited[here] = 1;
        }
    }
}

int main()
{
    v[1].push_back(2);
    v[1].push_back(3);
    v[2].push_back(4);
    v[2].push_back(5);
    int root = 1;
    cout << "post DFS : ";
    postDFS(root);
    memset(visited, 0, sizeof(visited));

    cout << "\n";
    cout << "pre DFS : ";
    preDFS(root);
    memset(visited, 0, sizeof(visited));

    cout << "\n";
    cout << "in-order DFS : ";
    inDFS(root);
    memset(visited, 0, sizeof(visited));

    return 0;
}