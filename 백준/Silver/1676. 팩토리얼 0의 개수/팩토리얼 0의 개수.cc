#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N;
	cin >> N;

	int ans = 0;

	while (N != 0) {
		if ( N%125 == 0)  //5^3이 있다면
			ans += 3;
		
		else if (N % 25 == 0)  //5^2가 있다면
			ans += 2;
		
		else if (N % 5 == 0) //5^1이 있다면
			ans +=1;
		N--;

	}


	cout << ans;
	return 0;
}