#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<vector<int>> paper(n, vector<int>(m));       //도화지
    vector<vector<bool>> visit(n, vector<bool>(m, false)); //방문 여부


    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> paper[i][j];
        }
    }

    int maxSize = 0;
    int cnt = 0;
    queue<pair<int, int>> Q;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (paper[i][j] == 1 && !visit[i][j]) {
                int size = 0;
                visit[i][j] = true;
                Q.push({ i, j });

                while (!Q.empty()) {
                    auto cur = Q.front();
                    Q.pop();
                    size++;

                    for (int dir = 0; dir < 4; dir++) {
                        int nx = cur.first + dx[dir];
                        int ny = cur.second + dy[dir];
                        if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
                        if (!visit[nx][ny] && paper[nx][ny] == 1) {
                            visit[nx][ny] = true;
                            Q.push({ nx, ny });
                        }
                    }
                }

                if (size > maxSize) maxSize = size;
                cnt++;
            }
        }
    }

    cout << cnt << '\n' << maxSize;

    return 0;
}
