#include <iostream>
#include <stack>
#include <string>
#include <algorithm>
using namespace std;

//입력을 getline으로 한 줄씩 받음
//괄호 담을 stack과 상태 true 선언
//char s로 line 돌면서 여는 괄호 만나면 stack에 넣음
//닫는 괄호 만나면 가장 최근 괄호 확인 후 짝 맞으면 top원소 pop, 안맞으면 상태 false 할당 후 break
//line을 다 돌거나, false 후 break을 만나서 for문이 끝나면 stack size 확인, 비어있지 않으면 상태 false
//state의 true, false 여부에 따라 출력 결정


int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);


	while (true) {
		string line;
		getline(cin, line);

		if (line == ".") return 0;


		stack<char> st;
		bool state = true;


		for (char s : line) {
			if (s == '(' || s == '[') {
				st.push(s);
			}
			else if (s == ')') {
				if (!st.empty() && st.top() == '(') st.pop();
				else {
					state = false;
					break;
				}
			}
			else if (s == ']') {
				if (!st.empty() && st.top() == '[') st.pop();
				else {
					state = false;
					break;
				}
			}
		}
		if (!st.empty()) state = false;
		
		cout << (state ? "yes\n" : "no\n");
	}






	return 0;

}