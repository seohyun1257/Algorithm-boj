#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <algorithm>
#include <array>
using namespace std;

//i를 결정한다
//배열[i-K] - 배열[i]가 몰래 먹은 초콜릿 개수
//배열 정렬
//날짜 ++;
//배열의 모든 값이 동일해질때까지 -> 최댓값과 최솟값이 동일하면


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int N, K;
	cin >> N >> K;
	int num = 0, date = 0;

	vector<int> chocolate(N+1);
	for (int i = 1;i <= N;i++) {
		cin >> chocolate[i];
	}


	while (chocolate[1] != chocolate[N]) {
		int ie = -1;
		for (int i = K + 1; i <= N; i++) {
			if (chocolate[i] != chocolate[i-K]) {
				ie = i;
				break;
			}
		}
		int number = chocolate[ie] - chocolate[ie -K];
		num += number;
		chocolate[ie] = chocolate[ie - K];


		sort(chocolate.begin(), chocolate.end());

		date++;
	}

	cout << num << ' ' << date;

	return 0;
}
