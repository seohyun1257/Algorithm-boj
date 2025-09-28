#include <iostream>
#include <map>
#include <string>
#include <algorithm>

using namespace std;

//N을 배열에 넣고 내림차순으로 정렬
//K보다 배열의 원소가 크다면 K -= 배열의 원소;
//cnt +1;

bool compare(int i, int j) {
	return j < i;
}

int main() {
	int N, K;
	cin >> N >> K;

	int * arr = new int[N];
	for (int i = 0; i < N;i++) {
		cin >> arr[i];
	}

	sort(arr, arr + N, compare);
	int cnt = 0;

	for (int i = 0; i < N;i++) {
		while (K - arr[i] >= 0) {
			K -= arr[i];
			cnt++;
		}
	}
	cout << cnt;
	

	
	}
	







