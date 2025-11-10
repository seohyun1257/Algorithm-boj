#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <algorithm>
#include <array>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int a, b, c;
	cin >> a >> b >> c;

	if (a == b && b == c) cout << 10000 + a * 1000;
	else if (a == b && b != c) cout << 1000 + b * 100;
	else if (a != b && b == c) cout << 1000 + b * 100;
	else if (a == c && a != b) cout << 1000 + a * 100;
	else {
		int maxnum = max(a, max(b, c));
		cout << maxnum * 100;
	}

	return 0;
}
