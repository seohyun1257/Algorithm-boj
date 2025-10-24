#include <iostream>
#include <string>
#include <algorithm>
#include <stack>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {


	int N;
	cin >> N;
	int cnt = 0;

	while (N--) {
		string word;
		cin >> word;

		stack<char> st;
		bool valid = true;

		for (char c : word) {
			if (!st.empty() && st.top() == c) {
				st.pop();
			}
			else {
				st.push(c);
			}
		}

		if (st.empty()) cnt++;
	}

	cout << cnt;
	return 0;
}
