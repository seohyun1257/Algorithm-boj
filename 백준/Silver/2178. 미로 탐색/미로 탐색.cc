#include <iostream>
#include <vector>
#include <queue>
using namespace std;

//입력을 받을 2차원 배열, int
//좌표를 담을 큐
//방문여부를 남길 2차원 배열, bool
//좌표 기준 상하좌우 방문

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int dx[4] = { 1, 0, -1, 0 };
    int dy[4] = { 0, 1, 0, -1 };

    int n, m;
    cin >> n >> m;
    vector<vector <int>> maze(n, vector<int>(m));
    vector<vector<bool>> vis(n, vector<bool>(m));
    vector<vector<int>> dis(n, vector<int>(m));
    queue<pair<int, int>> Q;
   
   
    for (int i = 0;i < n;i++) {
        string s;
        cin >> s;
        for (int j = 0;j < m;j++) {
            maze[i][j] = s[j] - '0';
        }
    }

    Q.push({ 0,0 });
    vis[0][0] = true;
    dis[0][0] = 1;

    while (!Q.empty()) {
        pair<int, int> cur = Q.front(); Q.pop();
        for (int dir = 0;dir < 4;dir++) {
            int nx = cur.first + dx[dir];
            int ny = cur.second + dy[dir];
            if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
            if (vis[nx][ny] || maze[nx][ny] != 1) continue;
            vis[nx][ny] = true;
            dis[nx][ny] = dis[cur.first][cur.second] + 1;
            Q.push({ nx, ny });
        }
    }

    cout << dis[n - 1][m - 1];

    
    return 0;
}
