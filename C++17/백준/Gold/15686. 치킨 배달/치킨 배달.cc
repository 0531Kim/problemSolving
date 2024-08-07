#include <bits/stdc++.h>
using namespace std;
int n, m, k, ret = 987654321;
vector<pair<int, int>> h, c;
void go(vector<pair<int, int>> v){
    int sum = 0;
    for(auto a: h){
        int min_ = 987654321;
        for(auto b: v){
            int d = abs(a.first - b.first) + abs(a.second - b.second);
            min_ = min(min_, d);        
        }
        sum += min_;
    }
    ret = min(ret, sum);
}
void combi(int start, vector<pair<int, int>> b){
    if(b.size() == m){
        go(b);
    }
    for(int i = start + 1; i < c.size(); i++){
        b.push_back({c[i].first, c[i].second});
        combi(i, b);
        b.pop_back();
    }
    return;
}
int main(){
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> k;
            if(k == 1) h.push_back({i, j});
            else if(k == 2) c.push_back({i, j});
        }
    }
    vector<pair<int, int>> b;
    combi(-1, b);
    cout << ret << '\n';
    return 0;
}