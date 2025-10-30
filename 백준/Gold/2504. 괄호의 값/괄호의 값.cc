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
	cin >> input;

	stack<pair<char, int>> st;
	for (int i = 0;i < input.length();i++) {
		if (input[i] == '(' || input[i] == '[') {
			st.push({ input[i], 1 });

		}
		else if (input[i] == ')') {
			if (!st.empty() && st.top().first == '(') { //바로 여는 괄호라면 기본값 push
				st.pop();
				st.push({ 'n', 2 });
			}
			else if (!st.empty() && st.top().first == 'n') { //숫자라면
				int temp = 0;
				while (!st.empty() && st.top().first != '[' && st.top().first != '(') { //괄호를 만날 때까지
					temp += st.top().second;
					st.pop();
				}
				if (!st.empty() && st.top().first == '(') {				
					st.pop();
					st.push({ 'n', temp * 2 }); //마지막에 2 곱해서 push
				}
				else {
					cout << 0; //스택이 비어있거나 괄호 짝이 맞지 않다면
					return 0;
				}
			}
			else {
				cout << 0; //스택이 비어있거나 괄호 짝이 맞지 않다면
				return 0;
			}
			if (st.size() >= 2) { //인접한 숫자끼리 합치기
				auto top1 = st.top(); st.pop();
				if (!st.empty() && st.top().first == 'n' && top1.first == 'n') {
					int sum = st.top().second + top1.second;
					st.pop();
					st.push({ 'n', sum });
				}
				else {
					st.push(top1);
				}
			}
		}
		else if (input[i] == ']') {
			if (!st.empty() && st.top().first == '[') { //바로 여는 괄호라면 기본값 push
				st.pop();
				st.push({ 'n', 3 });
			}
			else if (!st.empty() && st.top().first == 'n') { //숫자라면
				int temp = 0;
				while (!st.empty() && st.top().first != '[' && st.top().first != '(') { //괄호를 만날 때까지
					temp += st.top().second;
					st.pop();
				}
				if (!st.empty() && st.top().first == '[') {
					st.pop();
					st.push({ 'n', temp * 3 }); //마지막에 3 곱해서 push
				}
				else {
					cout << 0; //스택이 비어있거나 괄호 짝이 맞지 않다면
					return 0;
				}
			}
			else {
				cout << 0; //스택이 비어있거나 괄호 짝이 맞지 않다면
				return 0;
			}
			if (st.size() >= 2) { //인접한 숫자끼리 합치기
				auto top1 = st.top(); st.pop();
				if (!st.empty() && st.top().first == 'n' && top1.first == 'n') {
					int sum = st.top().second + top1.second;
					st.pop();
					st.push({ 'n', sum });
				}
				else {
					st.push(top1);
				}
			}
		}
		
	}

	if (st.size() == 1 && st.top().first == 'n') {
		cout << st.top().second;
	}
	else {
		cout << 0;
	}

	return 0;
}
