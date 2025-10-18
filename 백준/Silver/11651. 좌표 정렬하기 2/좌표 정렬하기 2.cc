#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

//map은 key값이 중복될 수 없기 때문에 pair vector를 사용해야 하는 문제

bool cmp(const pair<int, int>& a, const pair<int, int>& b) {
	if (a.second == b.second) return a.first < b.first;
	return a.second < b.second;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);


	int N;
	cin >> N;


	vector<pair<int, int>> vec;

	for (int i = 0; i < N; i++) {
		int x, y;
		cin >> x >> y;
		vec.push_back({ x, y });
	}


	sort(vec.begin(), vec.end(), cmp);

	for (auto num : vec) {
		cout << num.first << ' ' << num.second << '\n';
	}
	



	return 0;

}