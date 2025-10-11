#include <iostream>
#include <stack>
#include <vector>
using namespace std;

//정수 n 입력 -> stack의 길이
//배열에 입력을 받으면서 직전 배열 값과 이어지는 값이면 "NO" 출력
//각 배열에 해당 하는 숫자를 출력하기 위해서


int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	stack<int> s;
	int num = 1;
	vector<char> ops;

	for (int i = 0; i < n;i++) {
		int x;
		cin >> x;

		while (num <= x) {
			s.push(num);
			ops.push_back('+');
			num++;
		}
		if (!s.empty() && s.top() == x) {
			s.pop();
			ops.push_back('-');
		}
		else {
			cout << "NO";
			return 0;
		}

	}

	for (char op : ops) cout << op << '\n';




	return 0;

}