#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <algorithm>
#include <array>
#include <map>
using namespace std;

bool cmp(const pair<string, int>& a, const pair<string, int>& b) {
	if (a.second == b.second) return a.first > b.first;
	return a.second < b.second;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	map<string, int> m;
	int N;
	cin >> N;
	for (int i = 0;i < N;i++) {
		string book;
		cin >> book;
		if (m.find(book) != m.end()) {
			auto it = m.find(book);
			it->second++;

		}
		else {
			m.insert({ book, 1 });
		}
	}

	vector<pair<string, int>> vec(m.begin(), m.end());
	sort(vec.begin(), vec.end(), cmp);

	cout << vec[vec.size() - 1].first;

	return 0;
}
