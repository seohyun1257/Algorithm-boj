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

	string A, B;
	cin >> A >> B;

	int size = A.length() - B.length();

	if (size < 0) { //만약 B가 더 길다면
		size *= -1;
		for (int i = 0;i < size;i++) {
			A.insert(0, "0");
		}
	}
	else if (size > 0) { //만약 A가 더 길다면
		for (int i = 0;i < size;i++) {
			B.insert(0, "0");
		}
	}

	stack<int> st;
	bool carry = false;

	for (int i = A.length() - 1;i >= 0;i--) {
		int a = A[i] - '0';
		int b = B[i] - '0';
		int sum = a + b;


		if (carry) sum++;

		if (sum >= 10) {
			carry = true;
			sum -= 10;
		}
		else carry = false;
		
		st.push(sum);
	}

	if (carry) st.push(1);
	
	while (!st.empty()) {
		cout << st.top();
		st.pop();
	}


	return 0;
}
