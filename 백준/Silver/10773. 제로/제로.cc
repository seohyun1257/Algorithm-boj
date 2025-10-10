#include <iostream>
#include <stack>

using namespace std;

int main() {
	int N;
	cin >> N;
	stack <int> s;

	while (N) {
		int K;
		cin >> K;
		if (K == 0) {
			s.pop();
		}
		else {
			s.push(K);
		}



		N--;
	}
	int sum = 0;
	while (!s.empty()) {
		sum += s.top();
		s.pop();
	}
	cout << sum;
	return 0;
}