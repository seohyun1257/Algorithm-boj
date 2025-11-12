#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <algorithm>
using namespace std;

bool cmp(const int& a, const int& b) {
	return a > b;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	string N;
	cin >> N;

	vector<int> V(N.size());

	for (int i = 0;i < N.size();i++) {
		V[i] = N[i]-'0';
	}

	sort(V.begin(), V.end(), cmp);
	for (int x = 0;x < N.size();x++) {
		cout << V[x];
	}
	
	return 0;
}
