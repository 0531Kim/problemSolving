#include <bits/stdc++.h>
using namespace std;

int buf[10004];
int mapp[104][104];
int visited[104][104];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, -1, 0, 1};
int result;
int top;

void dfs(int y, int x, int h, int nm){
    visited[y][x]=1;
    for (int k = 0; k < 4; k++) {
        int nx = x + dx[k];
        int ny = y + dy[k];
            
        if (nx < 0 || ny < 0 || ny >= nm || nx >= nm || visited[ny][nx]==1) continue;
        if(mapp[ny][nx] > h) dfs(ny, nx, h, nm);
    }
    return;
}

int main() {
    int nm; cin >> nm;
    
    for(int i=0; i<nm; i++){
        memset(buf,0,sizeof(buf));
        
        for(int j=0; j<nm; j++){
            cin >> buf[j];
            mapp[i][j] = buf[j];
        }
    }

    for(int h=0; h<100; h++){   
        result=0;
        memset(visited,0,sizeof(visited));
        for(int i=0; i < nm; i++){
            for(int j=0; j<nm; j++){
                // if(mapp[i][j] > h+1 && visit[i][j]==0){
                if(mapp[i][j] > h && visited[i][j]==0){
                    result++;
                    dfs(i,j,h, nm);
                }
            }
        }
        if(result > top) top=result;
    }
	cout << top << endl;
    return 0;
}