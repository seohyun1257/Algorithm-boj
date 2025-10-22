#include <iostream>
#include <string>
#include <algorithm>
#include <stack>
#include <cmath>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N;
	cin >> N;

	for (int i = 1;i <= N;i++) {
		int n = i;
		while (n < N) {
			cout << ' ';
			n++;
		}
		for (int j = 0;j < i;j++) {
			cout << '*';
		}
		cout << '\n';

	}


	




	return 0;

}