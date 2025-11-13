#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <algorithm>
#include <array>
#include <stack>
using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int T;
	cin >> T;
	while (T--) {
		int N, M;
		cin >> N >> M;
		deque<pair<int, int>> s;
		priority_queue<int> pq;


		for (int i = 0;i < N;i++) {
			int pri;
			cin >> pri;
			s.push_back({ pri, i });
			pq.push(pri);
		}

		int cnt = 0;

		while (!s.empty()) {
			int cur = s.front().first;
			if (cur == pq.top()) { //만약 현재 우선순위가 가장 크다면
				cnt++;
				if (s.front().second == M) break;
				s.pop_front();
				pq.pop();


			}
			else {
				pair<int, int> current = s.front();
				s.pop_front();
				s.push_back(current);
			}

		}

		cout << cnt << '\n';
	}
	
	
	return 0;
}
