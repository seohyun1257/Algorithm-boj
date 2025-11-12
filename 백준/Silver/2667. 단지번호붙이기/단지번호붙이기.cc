#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <algorithm>
#include <array>
#include <map>
#include <unordered_set>
#include <set>
using namespace std;

int dirx[4] = { 0, -1, 0, 1 };
int diry[4] = {1, 0, -1, 0};

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int N;
	cin >> N;
	vector<vector<int>> map(N, vector<int> (N));
	vector<vector<bool>> vis(N, vector<bool>(N, false));

	for (int i = 0;i < N;i++) {
		string s;
		cin >> s;

		for (int j = 0;j < N;j++) {
			map[i][j] = s[j] - '0';
		}
	}
	queue<pair<int, int>> bfs;
	vector<int> numOfHouse;

	for (int i = 0;i < N;i++) {
		for (int j = 0;j < N;j++) {
			if (map[i][j] == 1 && !vis[i][j]) {
				int cnt = 1;
				bfs.push({i, j});
				vis[i][j] = true;
				while (!bfs.empty()) {
					pair<int, int> house = bfs.front();
					bfs.pop();
					for (int k = 0;k < 4;k++) {
						int nx = house.first + dirx[k];
						int ny = house.second + diry[k];
						if (nx < 0 || nx >= N || ny < 0 || ny >= N) continue;
						if (map[nx][ny] == 0 || vis[nx][ny]) continue;
						bfs.push({ nx, ny });
						vis[nx][ny] = true;
						cnt++;
					}
				}
				numOfHouse.push_back(cnt);
			}
		}
	}

	sort(numOfHouse.begin(), numOfHouse.end());

	cout << numOfHouse.size() << '\n';
	for (auto x : numOfHouse) {
		cout << x << '\n';
	}
	
	
	return 0;
}
