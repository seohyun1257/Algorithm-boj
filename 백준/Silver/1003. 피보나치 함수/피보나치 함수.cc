#include <iostream>
#include <string>
#include <algorithm>
#include <stack>
#include <cmath>
#include <iomanip>
#include <vector>
using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int T;
	cin >> T; //the number of test case

	int* testCase = new int[T];
	for (int i = 0;i < T;i++) {
		cin >> testCase[i];
	}

	int* max = max_element(testCase, testCase + T); //max value of test cases

	int maxValue = *max;

	vector<pair<int, int>> dp(maxValue + 1);

	dp[0] = { 1,0 };
	dp[1] = { 0,1 }; //set base case 

	for (int i = 2; i <= maxValue;i++) {
		dp[i].first = dp[i - 1].first + dp[i - 2].first;
		dp[i].second = dp[i - 1].second + dp[i - 2].second;
	}

	for (int i = 0;i < T;i++) {
		int input = testCase[i];
		cout << dp[input].first << ' ' << dp[input].second << '\n';
	}


	return 0;
}
