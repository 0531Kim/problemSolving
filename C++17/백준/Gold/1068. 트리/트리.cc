#include <bits/stdc++.h>
using namespace std;
int n, root, parent, del, ret;
vector<int> v[54];
void go(int here){
    if(!v[here].size() || (v[here].size() == 1 && v[here][0] == del)){
        ret++;
        return;
    }
    for(int next: v[here]){
        if(next != del){
            go(next);
        }
    }
    return;
}
int main(){
    cin >> n;
    for(int child = 0; child < n; child++){
        cin >> parent;
        if(parent == -1){
            root = child; 
            continue;
        }
        v[parent].push_back(child);
    }
    cin >> del;
    if(del == root){
        cout << 0 << '\n';
        return 0;
    }
    v[del].erase(v[del].begin(), v[del].end());
    go(root);
    cout << ret << '\n';
    return 0;
}