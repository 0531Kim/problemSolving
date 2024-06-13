#include <bits/stdc++.h>
using namespace std;
int n, visited[10];
string s, ret;
vector<int> v;
vector<string> v2;

void go(int a, int pos, string str){
    if(str.size() == n + 1){
        v2.push_back(str);
        return;
    }
    for(int i = 0; i < 10; i++){
        if(visited[i])continue;
        if(v[pos] == 1){
            if(i <= a)continue;
            else{
                visited[i] = 1;
                string token = to_string(i);
                str += token;
                go(i, pos + 1, str);
                visited[i] = 0;
                str = str.substr(0, str.size() - 1);
            }
        }else if(v[pos] == 2){
            if(i >= a)continue;
            else{
                visited[i] = 1;
                string token = to_string(i);
                str += token;
                go(i, pos + 1, str);
                visited[i] = 0;
                str = str.substr(0, str.size() - 1);
            }
        }
        
    }
}
int main(){
    cin >> n;
    cin.ignore();
    getline(cin, s);
    for(char c: s){
        if(c == '<'){
            v.push_back(1);
        }else if(c == '>'){
            v.push_back(2);
        }
    }
    for(int i = 0; i < 10; i++){
        visited[i] = 1;
        string token = to_string(i);
        ret += token;
        go(i , 0 , ret);
        visited[i] = 0;
        ret = "";
    }
    cout << v2[v2.size() - 1] << '\n' << v2[0] << '\n';
    return 0;
}