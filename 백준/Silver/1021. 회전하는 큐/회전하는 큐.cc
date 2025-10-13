#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N;
	cin >> N;

	deque<int> q;

	for (int i = 1;i <= N;i++) {
		q.push_back(i);
	}

	int M;
	cin >> M;

	int ans = 0;
	while (M--) {
		int x;
		cin >> x;
		int target = find(q.begin(), q.end(), x) - q.begin();
		if (target <= q.size() / 2) { 
			for (int i = 0; i < target; i++) {
				q.push_back(q.front());
				q.pop_front();
				ans++;
			}
		}
		else { 
			for (int i = 0; i < q.size() - target; i++) {
				q.push_front(q.back());
				q.pop_back();
				ans++;
			}
		}

		q.pop_front();
	}

	cout << ans;



	return 0;

}