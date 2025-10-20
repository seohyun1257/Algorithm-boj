#include <iostream>
#include <string>
#include <algorithm>
#include <stack>
#include <cmath>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string line;
	getline(cin, line);

	int cnt = 0;
	bool vaild = false;

	for(char c : line) {
		if (c != ' ' && !vaild) {
			vaild = true;
			cnt++;
		}
		else if (c == ' ') {
			vaild = false;
		}
	}

	cout << cnt;
		

	return 0;

}