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

	long long N, K;
	cin >> N >> K;

	long long* cable = new long long[N];

	for (int i = 0; i < N;i++) {
		cin >> cable[i];
	}

	sort(cable, cable + N); //올림차순 정렬
	
	long long low = 1;
	long long high = cable[N - 1]; //가장 긴 랜선의 길이
	long long mid = (low + high) / 2;

	int numCable = 0;
	int answer = 0;

	while (low <= high) {
		mid = (low + high) / 2;
		int numCable = 0;
		for (int i = 0;i < N;i++) { //numCable 개수 구하기
			numCable += cable[i] / mid;
		}


		if (numCable >= K) { //개수가 K보다 넘치는 경우
			answer = mid;
			low = mid + 1; //하한을 올림
		}
		else //개수가 K보다 적은 경우
			high = mid - 1; //상한을 내림;
	}

	cout << answer;



	return 0;
}
