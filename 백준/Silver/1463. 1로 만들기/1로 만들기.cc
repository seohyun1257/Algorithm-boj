#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <algorithm>
#include <array>
using namespace std;

//3으로 나누기
//2로 나누기
//-1 더하기

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int N;
	cin >> N;

	vector<int> num(N+4, 0);
	num[1] = 0;
	num[2] = 1;
	num[3] = 1;

	if (N >= 4) {
		for (int i = 4;i <= N;i++) {
			if (i % 3 != 0 && i % 2 != 0) {
				num[i] = num[i - 1] + 1;
			}
			else if (i % 3 != 0) {
				num[i] = min(num[i / 2], num[i - 1]) + 1;
			}
			else if (i % 2 != 0) {
				num[i] = min(num[i / 3], num[i - 1]) + 1;
			}
			else num[i] = min(num[i / 3], min(num[i / 2], num[i - 1])) +1;
		}
	}

	cout << num[N];
	
	return 0;
}
