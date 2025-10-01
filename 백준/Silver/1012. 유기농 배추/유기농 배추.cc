#include <iostream>
#include <map>
#include <string>
#include <algorithm>
#include <typeinfo>


using namespace std;

//동적 배열로 크기를 받아서 모든 요소가 0인 2차원 배열 생성
//bool타입으로 해당 좌표를 지나갔었는지 확인하기 위해 모든 요소 false인 2차원 배열 생성
//좌표 입력 받아서 해당 좌표 값 1로 변경
//이중 for문으로 전체 배열 훑으면서
//
//한 번 탐색 = ans++;

int N, M, K;
int** arr1;
bool** arr2;


int dx[4] = { -1, 1, 0, 0 };
int dy[4] = { 0,0,-1,1 };

void dfs(int x, int y) {
	arr2[x][y] = true;
	for (int d = 0; d < 4; d++) {
		int nx = x + dx[d];
		int ny = y + dy[d];
		if (nx >= 0 && nx < N && ny >= 0 && ny < M) {
			if (!arr2[nx][ny] && arr1[nx][ny] ==1 ) {
				dfs(nx, ny);

			}
		}
	}

}


int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int T;
	cin >> T;


	for (int i = 0;i < T;i++) {
		cin >> N >> M >> K;

		arr1 = new int* [N];
		arr2 = new bool* [N];

		for (int i = 0; i < N;i++) {
			arr1[i] = new int[M] {0};
			arr2[i] = new bool[M] {false};
		}
		for (int i = 0;i < K;i++) {
			int r, c;
			cin >> r >> c;
			arr1[r][c] = 1;
		}
		int ans = 0;
		for (int i = 0;i < N;i++) {
			for (int j = 0;j < M;j++) {
				if (arr1[i][j] == 1 && !arr2[i][j]) {
					dfs(i, j); 
					ans++;
				}
			}

		}
		cout << ans << '\n';

		for (int i = 0; i < N; i++) {
			delete[] arr1[i];
			delete[] arr2[i];
		}
		delete[] arr1;
		delete[] arr2;
	}

	}




