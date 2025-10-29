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

	string input;
	getline(cin, input);
	char prev = '\0';
	int res = 0;

	stack<char> st;
	for (char c : input) {
		if (c == '(') {
			st.push('(');
		}

		if (c == ')') {
			if (prev == '(') {
				st.pop(); //직전 괄호는 레이저 이므로 제거
				res += st.size(); //현재 스택의 길이만큼 막대기 조각 개수 추가
			}
			else {
				st.pop(); //막대기의 끝
				res++; //막대기 조각 한개  추가
			}
		}

		prev = c; //이전 입력 저장
	}
	cout << res;


	return 0;
}
