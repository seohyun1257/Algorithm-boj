#include <iostream>
#include <deque>
#include <algorithm>
#include <list>
using namespace std;

//1부터 N까지 담을 list와 순서를 담을 list 선언
//num배열이 비워질 때까지 반복
//K-1만큼 회전 (첫번째 원소를 마지막에 넣고 pop)
//첫번째 원소를 order배열에 넣고 pop
//order배열 순서대로 출력

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	list<int> num;
	list<int> order;

	int N;
	cin >> N;

	for (int i = 1;i <= N;i++) {
		num.push_back(i);
	}

	int K;
	cin >> K;

	while (!num.empty()) {
		for (int i = 0;i < K-1;i++) {
			num.push_back(num.front());
			num.pop_front();
		}

		order.push_back(num.front());
		num.pop_front();
	}
	cout << '<';
	for (const auto& element : order) {
		if (element == order.back()) {
			cout << element;
		}
		else cout << element << ", ";
	}
	cout << '>';



	return 0;

}