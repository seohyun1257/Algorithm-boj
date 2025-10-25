#include <iostream>
#include <string>
#include <algorithm>
#include <stack>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int N;
	cin >> N;
	
	int* num = new int[N];
	for (int i = 0;i < N;i++) {
		cin >> num[i];
	}

	if ((num[1] - num[0]) == (num[2] - num[1])) {
		int r = num[1] - num[0];
		cout << num[N - 1] + r;
	}
	else if ((num[1] / num[0]) == (num[2] / num[1])) {
		int r = num[1] / num[0];
		cout << num[N - 1] * r;
	}
	
	return 0;
}
