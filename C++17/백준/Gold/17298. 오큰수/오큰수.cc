#include <bits/stdc++.h>
using namespace std;
int n, a;
vector<int> v, ret;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> n;
    while(n--){
        cin >> a;
        v.push_back(a);
    }
    stack<int> stk;
    ret.push_back(-1);
    for(int i = v.size() - 1; i >= 0; i--){
        if(!stk.size()){
            stk.push(v[i]);
            continue;
        }
        if(stk.top() > v[i]){
            ret.push_back(stk.top());
            stk.push(v[i]);
        }else if(stk.top() <= v[i]){
            while(true){
                stk.pop();
                if(!stk.size()){
                    stk.push(v[i]);
                    ret.push_back(-1);
                    break;
                }else{
                    if(stk.top() > v[i]){
                        ret.push_back(stk.top());
                        stk.push(v[i]);
                        break;
                    }
                }
            }
        }
    }
    for(int i = ret.size() - 1; i >= 0; i--){
        cout << ret[i] << " ";
    }
    cout << '\n';
    return 0;
}