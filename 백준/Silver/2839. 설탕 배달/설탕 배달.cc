#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;

//N을 5로 나누어 떨어질 때까지, 안되면 -3씩해가면서 반복
//5로 나눈 횟수와 3을 뺀 횟수를 저장하여서
//5로 나누는 while문 밖에서 5로 나눠진 숫자 빼고, -3한 만큼 다시 +3
//3으로 나눠지면 count에 횟수 더해서 출력, 안나눠지면 -1 출력

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N;
	cin >> N;

	int count3 = 0;
	int count = 0;
	while (N > 0) {
		if (N % 5 == 0) {
			count = N / 5;
			break;
		}
		else {
			N -= 3;
			count3++;
		}
	}
	N += 3 * count3;
	N -= 5 * count;
	
	if (N > 0) {
		if (N % 3 == 0) {
			count += N / 3;
		}
		else { 
			cout << "-1"; 
			return 0;
		}
	}
	cout << count;
	
	


	return 0;

}