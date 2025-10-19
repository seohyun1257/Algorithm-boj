#include <iostream>
#include <string>
#include <algorithm>
#include <stack>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	stack<char> st;
	string line;
	getline(cin, line);

	for(char c : line) {
		
		if (c == '/' || c == '*') {
			while (!st.empty() && (st.top() == '*' || st.top() == '/')) {
				cout << st.top();
				st.pop();
			}
			st.push(c);
		}
		else if (c == '+' || c == '-') {
			while(!st.empty() && st.top() != '(') {
				cout << st.top();
				st.pop();
			}
			st.push(c);
		}
		else if (c == ')') {
			while (st.top() != '(') {
				cout << st.top();
				st.pop();
			}
			st.pop(); //여는 괄호가 top이므로 pop
		}
		else if (c == '(') {
			st.push(c);
		}
		else cout << c;

	}

	while (!st.empty()) {
		cout << st.top();
		st.pop();
	}




	return 0;

}