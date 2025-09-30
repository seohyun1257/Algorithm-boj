#include <iostream>
#include <map>
#include <string>
#include <algorithm>
#include <typeinfo>


using namespace std;

//배열에 저장할 때 직전 입력까지의 합을 저장



int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int N, M;
	cin >> N >> M;

	int* arr = new int[N];
	arr[0] = 0;

	for (int i = 1;i <= N;i++) {
		int j;
		cin >> j;
		arr[i] = arr[i - 1] + j;

	}
	for (int i = 0;i < M;i++) {
		int A, B;
		cin >> A >> B;
		cout << arr[B] - arr[A-1] <<'\n';
	}
}



