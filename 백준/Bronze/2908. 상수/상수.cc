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
	
	int a = (A[2] - '0') * 100 + (A[1] - '0') * 10 + (A[0] - '0');
	int b = (B[2] - '0') * 100 + (B[1] - '0') * 10 + (B[0] - '0');

	int result = (a > b) ? a : b;

	cout << result;

	
	
	return 0;
}
