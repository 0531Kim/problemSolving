#include <bits/stdc++.h>
using namespace std;
int n, k;
vector<int> v;
vector<int> bt[12];

void go(int idx, int cnt, int len){
    if(len == 1){
        bt[cnt].push_back(v[idx]);
        return;
    }
    int size = ((len - 1)/ 2);
    bt[cnt].push_back(v[idx]);
    go(idx - ((size + 1) / 2), cnt + 1, size);
    go(idx + ((size + 1) / 2), cnt + 1, size);
}
int main(){
    cin >> n;
    while(cin >> k){
        v.push_back(k);
    }
    go((v.size() - 1) / 2, 0, v.size());
    for(vector<int> a: bt){
        for(int i: a){
            cout << i << " ";
        }    
        cout << '\n';
    }
    return 0;
}