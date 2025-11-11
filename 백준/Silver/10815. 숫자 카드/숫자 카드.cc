#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <algorithm>
#include <array>
#include <map>
#include <unordered_set>
using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int N, M;
	cin >> N;
	
	unordered_set<int> us;
	while(N--) {
		int n;
		cin >> n;
		us.insert(n);
	}
	
	cin >> M;
	while (M--) {
		int m;
		cin >> m;
		if (us.count(m)) {
			cout << '1' << '\n';
		}
		else cout << '0' << '\n';
	}

	
	return 0;
}
