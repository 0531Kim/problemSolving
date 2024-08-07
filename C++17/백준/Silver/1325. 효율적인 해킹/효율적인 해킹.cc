#include <bits/stdc++.h>
using namespace std;
int n, m, visited[10004], max_ = -100, a, b;
vector<int> v[10004];
vector<int> ret;
int go(int here){
    int ret = 1;
    if(!v[here].size()){
        return ret;
    }
    for(int there: v[here]){
        if(visited[there])continue;
        visited[there] = 1;
        ret += go(there);
    }
    return ret;
}
int main(){
    cin >> n >> m;
    while(m--){
        cin >> a >> b;
        v[b].push_back(a);
    }
    for(int i = 1; i < n + 1; i++){
        visited[i] = 1;
        int num = go(i);
        if(num > max_){
            ret.erase(ret.begin(), ret.end());
            ret.push_back(i);
            max_ = max(max_, num);
        }
        else if(num == max_){
            ret.push_back(i);
        }
        memset(visited, 0, sizeof(visited));
    }
    for(int a: ret){
        cout << a << " ";
    }
    cout << '\n';
    return 0;
    
}